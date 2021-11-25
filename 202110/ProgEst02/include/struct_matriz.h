#ifndef STRUCT_MATRIZ_H_INCLUDED
#define STRUCT_MATRIZ_H_INCLUDED
#include <stdlib.h>

struct matriz {
	int m;      /** Num. de filas */
	int n;      /** Num. de columnas */
	float **A;
};

/**
 * Establece las entradas de la matriz
 * a la que apunta M. El apuntador M->A
 * debe ser inicalizado antes de usar
 * esta macro.
 * I and J must be integer variables.
 */
#define set_entries_of_A(M,a,I,J) \
for(I=0;I < (M)->m;I++){\
  for(J=0;J < (M)->n;J++){\
    (M)->A[I][J]=a[I][J];\
  }\
}

/**
 * Imprime la matriz a la que apunta el
 * apuntador M.
 * Esta funci\'on est\'a resuelta en el archivo print_matriz.c
 */
void print_matriz(struct matriz *M);

/** get_traspose()
 * Obtiene la traspuesta de la matriz A de rows filas y cols
 * columnas.
 * @param A: doble apuntador a la matriz original
 * @param rows: cantidad de tilas de la matriz original
 * @param cols: cantidad de columnas de la matriz original
 * @return: doble apuntador a la matriz traspuesta
 * Esta funci\'on est\'a resuelta en el archivo get_trapose.c
 */
float **get_traspose(float **A,unsigned int rows,unsigned int cols);

/**
 * Make SUBMatrix ignoring row row & column col.
 * Esta funci\'on est\'a resuelta en el archivo sub_matrix.c
 */
float **MSUBM(struct matriz *M, int row,int col);

/**
 * Obtiene el determinante de la matriz M.
 * Esta funci\'on est\'a resuelta en el archivo det.c
 */
float det(struct matriz *M);

/** Multiplica la matriz de reales a la que apunta A por
 * el escalar factor. La matriz tiene r filas y c columas.
 */
void MultByScalar(float factor,float **A,int r,int c);

/** Multiplica las matrices A y B */
struct matriz *
Mult(struct matriz *A,struct matriz *B);

/**
 * Obtiene la matriz inversa de la matriz a la que apunta
 * el apuntador M.
 */
struct matriz *inv(struct matriz *M);

#endif // STRUCT_MATRIZ_H_INCLUDED
