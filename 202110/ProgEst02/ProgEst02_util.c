/** ProgEst02_util.c */
#include <stdlib.h>
#include "./include/ProgEst02_util.h"

/**
 * Devueleve un apuntador a una matriz de rows filas y
 * cols columnas.
 * Forma de uso: dado un arreglo bidimensional
 * float A[ROWS][COLS];
 * float **M=get_matrix_pointer(SIZE_ARR(A),SIZE_ARR(A[0]));
 */
float **get_matrix_pointer(size_t rows,size_t cols)
{
 int i;
 float **M = (float **)malloc(rows*sizeof(float *));
 for (i=0;i<rows;i++) {
    M[i] = (float *)malloc(cols*sizeof(float));
 }
 return M;
}
