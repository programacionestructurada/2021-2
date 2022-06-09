/** print_matriz.c */
#include <stdio.h>
#define CONFIG_USING_LIB_INTROPROGUTIL
#ifndef CONFIG_USING_LIB_INTROPROGUTIL
#include "struct_matriz.h"
#else
#include "../202110/ProgEst02/include/struct_matriz.h"
//#include <struct_matriz.h>
#endif // CONFIG_USING_LIB_INTROPROGUTIL

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

