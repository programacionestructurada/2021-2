#include <stdlib.h>
#include <math.h>
#include "struct_matriz.h"

/**
 * Make SUBMatrix ignoring row row & column col
 */
float **MSUBM(struct matriz *M, int row,int col)
{
	int i, j;
	float **R = (float **)malloc((M->m - 1) * sizeof(float *));
	for (i = 0; i < M->m - 1; ++i)
		R[i] = (float *)malloc((M->m - 1) * sizeof(float));
//	for (i = 1; i < M->m; ++i)
//		for (j = 0; j < M->n; ++j) {
//			if (j < colAElim) {
//				R[i - 1][j] = M->A[i][j];
//			}
//			if (j > colAElim) {
//				R[i - 1][j - 1] = M->A[i][j];
//			}
//		}
    for(i=0;i < M->m;i++){
      for(j=0;j < M->n;j++){
        if(i<row && j<col){
          R[i][j]=M->A[i][j];
        }
        if(i<row && j>col){
          R[i][j-1]=M->A[i][j];
        }
        if(i>row && j<col){
          R[i-1][j]=M->A[i][j];
        }
        if(i>row && j>col){
          R[i-1][j-1]=M->A[i][j];
        }
      }
    }
	return R;
}
