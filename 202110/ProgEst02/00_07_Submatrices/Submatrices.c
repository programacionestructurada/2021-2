/** Submatrices.c - La funci\'on sub_matrix() se utiliza
 *  para obtener una submatriz a partir de una matriz.
 *  Espec\'ificamente, obtiene la submatriz que resulta
 *  de eliminar la primera fila y la columna colAElim
 *  (que se recibe como segundo par\'ametro), de la matriz
 *  M que se recibe como primer par\'ametro.
 */
#include<stdio.h>
#include<malloc.h>

//determinantes de matrices

struct matriz{
       int m;//num de filas
       int n;//num de columnas
       float** A;
};

int P, Q, i, j, k, z;
float** PQ;

float** sub_matrix_(struct matriz*M, int colAElim)
{
      int i,j;
      float** R=(float**)malloc((M->m-1)*sizeof(float*));
      for(i=0;i<M->m-1;++i)
        R[i]=(float*)malloc((M->m-1)*sizeof(float));
      for(i=1;i<M->m;++i)
        for(j=0;j<M->n;++j){
          if(j<colAElim){
            R[i][j]=M->A[i][j];
          }
          if(j>colAElim){
            R[i][j-1]=M->A[i][j];
        }
     }
     return R;
}

void print_matriz(struct matriz*M){
     int i,j;
     for(i=0;i<M->m;++i){
       for(j=0;j<M->n;++j){
         printf("%.2f\t",M->A[i][j]);
       }
       printf("\n");
     }
}

void copy_matriz(struct matriz *to,struct matriz *from){
    int i,j;
    to->m = from->m;
    to->n = from->n;
    to->A=(float**)malloc(from->m*sizeof(float*));
    for(i=0;i < from->m;++i)
      F[m]=(float*)malloc((from->n)*sizeof(float));
    for(i=0;i<from->m;++i){
       for(j=0;j<from->n;++j){
         to->A[i][j] = from->A[i][j];
       }
    }
}

int main (void)
{
    float*p=(float* )malloc(2*sizeof (float));
    *p=40.41;
    p[1]=42.43;
    float*q=(float*)malloc(2*sizeof(float));//si sizeof(float));
    q[0]=44.45;
    q[1]=46.47;

    PQ=(float**)malloc(2*sizeof(float*));
    //PQ=[i][j]=*(PQ[i]+[j]);
    //*(p+k)es float porque p es float*;
    //*(PQ+i)es float* porque PQ es float**;
    //float**=(float**)malloc(2*sizeof(float*));
    PQ[0]=p;
    PQ[1]=q;
  #if 1
    //float** PQ;//matriz de mxn
    int i, j, m=2,n=2;
    for(i=0;i<m;++i){
      for(j=0;j<n;++j)
        printf ("%.2f\t",PQ[i][j]);
      printf ("\n");
    }
    printf("\n");
  #else
    //struct matriz{ int m,n;float**A};
    struct matriz SM;
    SM.m=SM.n=2;
    SM.A=PQ;
    print_matriz(&SM);
  #endif



    return 0;
}/*end main()*/


