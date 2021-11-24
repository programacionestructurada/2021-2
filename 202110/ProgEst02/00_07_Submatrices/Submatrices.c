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

float** sub_matrix_(struct matriz *M,int colAElim)
{
      int i,j;
      float** R=(float**)malloc((M->m-1)*sizeof(float*));
      for(i=0;i < M->m-1;++i)
        R[i]=(float*)malloc((M->m-1)*sizeof(float));
      for(i=1;i < M->m;++i)
        for(j=0;j < M->n;++j){
          if(j<colAElim){
            R[i-1][j]=M->A[i][j];
          }
          if(j>colAElim){
            R[i-1][j-1]=M->A[i][j];
        }
     }
     return R;
}

void print_matriz(struct matriz *M){
     int i,j;
     for(i=0;i < M->m;++i){
       for(j=0;j < M->n;++j){
         printf("%8.2f",M->A[i][j]);
       }
       printf("\n");
     }
}

/** Copia la matriz a la que apunta from en la estructura a la
 *  que apunta to
 */
void copy_matriz(struct matriz *to,struct matriz *from){
    int i,j;
    to->m = from->m;
    to->n = from->n;
    to->A=(float**)malloc(from->m*sizeof(float*));
    for(i=0;i < from->m;++i)
      to->A[i] = (float*)malloc((from->n)*sizeof(float));
    for(i=0;i<from->m;++i){
       for(j=0;j<from->n;++j){
         to->A[i][j] = from->A[i][j];
       }
    }
}

int main (void)
{
#if 0 //LMC 2021.11.24
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
  #if 0
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
#endif
    struct matriz SM;
    printf("Prueba de la funci\\'on \
float** sub_matrix_(struct matriz *M,int colAElim)\n");
    struct matriz M;
    M.m = M.n = 3;

    M.A = (float **)malloc(3*sizeof(float *));
    M.A[0] = (float *)malloc(3*sizeof(float));
    M.A[1] = (float *)malloc(3*sizeof(float));
    M.A[2] = (float *)malloc(3*sizeof(float));
    M.A[0][0]=1;M.A[0][1]=2;M.A[0][2]=3;
    M.A[1][0]=4;M.A[1][1]=40.41;M.A[1][2]=42.43;
    M.A[2][0]=5;M.A[2][1]=44.45;M.A[2][2]=46.47;
    printf("\n");
    print_matriz(&M);
    printf("\n");

    float **sm = sub_matrix_(&M,0);
    SM.A = sm;
    SM.m=SM.n=2;
    printf("Submatriz que se obtiene eliminando la fila 0 \
y la columna 0:\n");
    print_matriz(&SM);
    printf("\n");
    free(sm);
    sm = sub_matrix_(&M,1);
    SM.A = sm;
    printf("Submatriz que se obtiene eliminando la fila 0 \
y la columna 1:\n");
    print_matriz(&SM);
    printf("\n");
    free(sm);
    sm = sub_matrix_(&M,2);
    SM.A = sm;
    printf("Submatriz que se obtiene eliminando la fila 0 \
y la columna 2:\n");
    print_matriz(&SM);

    free(sm);
    free(M.A);
#if 0 //LMC 2021.11.24
    free(p);
    free(q);
    free(PQ);
#endif // 2021.11.24
    return 0;
}/*end main()*/


