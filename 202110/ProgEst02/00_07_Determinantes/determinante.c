#include <stdio.h>
#include <malloc.h>
#include <math.h>

struct matriz {
	int m;      /** Num. de filas */
	int n;      /** Num. de columnas */
	float **A;
};

float **sub_matrix(struct matriz *M, int colAElim)
{
	int i, j;
	float **R = (float **)malloc((M->m - 1) * sizeof(float *));
	for (i = 0; i < M->m - 1; ++i)
		R[i] = (float *)malloc((M->m - 1) * sizeof(float));
	for (i = 1; i < M->m; ++i)
		for (j = 0; j < M->n; ++j) {
			if (j < colAElim) {
				R[i - 1][j] = M->A[i][j];
			}
			if (j > colAElim) {
				R[i - 1][j - 1] = M->A[i][j];
			}
		}
	return R;
}

void print_matriz(struct matriz *M)
{
	int i, j;
	for (i = 0; i < M->m; ++i) {
		for (j = 0; j < M->n; ++j)
			printf("%8.2f\t", M->A[i][j]);
		printf("\n");
	}
}

float det(struct matriz *M)
{
	int j;
	float r = 0;
	struct matriz *tmp;
	tmp = (struct matriz *)malloc(sizeof(*tmp));
	tmp->m = tmp->n = M->m - 1;
	if (M->m == 1)
		return M->A[0][0];
	if (M->n >= M->m) {
		for (j = 0; j < M->m; ++j) {
			tmp->A = sub_matrix(M, j);
			r += (M->A[0][j]) * pow(-1.0, j) * det(tmp);
		}
	}
	return r;
}

int main(void)
{
	float *p = (float *)malloc(2 * sizeof(float));
	*p = 40.41;
	p[1] = 42.43;
	float *q = (float *)malloc(2 * sizeof(float));	//si sizeof(float));
	q[0] = 44.45;
	q[1] = 46.47;

	float **PQ = (float **)malloc(2 * sizeof(float *));
	//PQ=[i][j]=*(PQ[i]+[j]);
	//*(p+k)es float porque p es float*;
	//*(PQ+i)es float* porque PQ es float**;
	//float**=(float**)malloc(2*sizeof(float*));
	PQ[0] = p;		// equivale a *(PQ+0) es de tipo float*
	PQ[1] = q;		// equivale a *(PQ+1) es de tipo float*

	//float** PQ;//matriz de mxn
	int i, j, m = 2;// n = 2;
/*
	for (i = 0; i < m; ++i) {
		for (j = 0; j < n; ++j)
			printf("%.2f\t", PQ[i][j]);
		printf("\n");
	}
*/

	struct matriz SM;
	SM.m = SM.n = 2;
	SM.A = PQ;
	print_matriz(&SM);
	printf("\n");

	printf("det(&SM) = %.2f\n", det(&SM));

	float **F = (float **)malloc(3 * sizeof(float *));
	for (m = 0; m < 3; ++m)
		F[m] = (float *)malloc(3 * sizeof(float));
	for(i = 0; i < 3; ++i)
		for(j = 0; j < 3; ++j)
			*(*(F + i) + j) = i + j;
	F[0][0] = 1;
	SM.m = SM.n = 3;
  #if 0 //2021.11.24
    SM.A = F;
  #endif // 0
	printf("\n");

	print_matriz(&SM);
	printf("\n");

	printf("det(&SM) = %.2f\n", det(&SM));

#ifndef __unix__
	system("pause");
#endif
    free(SM.A);
	return 0;

}				//End main()
