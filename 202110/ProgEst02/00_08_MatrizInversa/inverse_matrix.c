/** inverse_matrix.c */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "struct_matriz.h"

/** Multiplica la matriz de reales a la que apunta A por
 * el escalar factor. La matriz tiene r filas y c columas.
 */
void MultByScalar(float factor,float **A,int r,int c){
 int i,j;
 for(i=0;i < r;i++)
   for(j=0;j < c;j++)
     A[i][j] = factor*(A[i][j]);
}

/** Multiplica las matrices A y B */
struct matriz *
Mult(struct matriz *A,struct matriz *B)
{
 int i,j,k;
 struct matriz *C = (struct matriz *)malloc(sizeof(struct matriz));
 C->m = A->m;
 C->n = B->n;
 C->A = (float **)malloc((C->m)*sizeof(float *));
 for(i=0;i < C->m;i++)
   C->A[i] = (float *)malloc((C->n)*sizeof(float));

 for(i=0;i < C->m;i++)
   for(j=0;j < C->n;j++)
     C->A[i][j]=0;

 for(i=0;i < C->m;i++)
   for(j=0;j < C->n;j++)
     for(k=0;k < A->n;k++)
       C->A[i][j]+=(A->A[i][k])*(B->A[k][j]);

 return C;
}

/**
 * Obtiene la matriz inversa de la matriz a la que apunta
 * el apuntador M.
 */
struct matriz *inv(struct matriz *M){
 unsigned int i,j;
 float floatDetDA;   /** determinante de la matriz M */
 float **MCof;       /** matriz de cofactores */
 float **TrDMCof;    /** Traspuesta De Matriz de Cofactores */
 struct matriz *SM;  /** SubMatriz */
 struct matriz *Minv;/** Matriz inversa */

 floatDetDA = det(M);
 if(!floatDetDA){/**Si el determinante es cero */
   return NULL;
 }
 /** apuntador a struct matriz (matriz inversa) */
 Minv = (struct matriz *)malloc(sizeof(*Minv));
 Minv->m = Minv->n = M->m;

 /** Obtener matriz de cofactores (en un arreglo de 2 dimensiones) */
 MCof = (float **)malloc((M->m)*sizeof(float *));
 for(i = 0;i < M->m;i++){
   MCof[i] = (float *)malloc((M->m)*sizeof(float));
 }
 SM = (struct matriz *)malloc(sizeof(*SM));
 SM->m = SM->n = M->m - 1;
 for(i = 0;i < M->m;i++){
   for(j = 0;j < M->m;j++){
     /** obtener submatriz eliminando fila i, y columna j */
     SM->A = MSUBM(M,i,j);
     MCof[i][j]=pow(-1,i+j)*det(SM);
   }
 }
 /** obtener adjunta */
 TrDMCof = get_traspose(MCof,M->m,M->m);
 /*finalmente, obtener la matriz inversa*/
 MultByScalar((1/floatDetDA),TrDMCof,M->m,M->m);
 Minv->A = TrDMCof;
 return Minv;
}/*end inv()*/

