/** det.c */
#include <stdlib.h>
#include <math.h>
#include "struct_matriz.h"

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
			tmp->A = MSUBM(M,0,j);
			r += (M->A[0][j]) * pow(-1.0, j) * det(tmp);
		}
	}
	return r;
}

