/** print_matriz.c */
#include <stdio.h>
#include "struct_matriz.h"

/**
 * Imprime la matriz a la que apunta el
 * apuntador M.
 */
void print_matriz(struct matriz *M)
{
	int i, j;
	for (i = 0; i < M->m; ++i) {
		for (j = 0; j < M->n; ++j)
			printf("%8.2f\t", M->A[i][j]);
		printf("\n");
	}
}

