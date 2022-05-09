#ifndef PROGESTE02_UTIL_H_INCLUDED
#define PROGESTE02_UTIL_H_INCLUDED
#include "struct_matriz.h"
/**Num. de elementos de un arreglo*/
#define SIZE_ARR(arr)   (sizeof(arr)/sizeof(arr[0]))
/**Num. de filas de un arreglo bidiensional*/
#define ROWS_D(arr)    SIZE_ARR(arr)
/**Num. de Columnasas de un arreglo bidiensional*/
#define COLS_D(arr)    SIZE_ARR(arr[0])
/**DIMENsi\'ones de un arreglo bidimensional*/
#define DIMEN(arr)  SIZE_ARR(arr),SIZE_ARR(arr[0])
/**DIMENsiones de la traspuesta de un arreglo bidimensional*/
#define DIMEN_AT(arr)   SIZE_ARR(arr[0]),SIZE_ARR(arr)

void print_ident_data(const char *file_name,const char *exe);

/**Obtiene un apuntador a un arreglo bidimensional de rows filas
 * por cols columnas.
 * Devuelve un apuntador a rows apuntadores, y cada uno de esos
 * rows apuntadores apunta a cols valores reales.
 */
float **get_matrix_pointer(size_t rows,size_t cols);
void copy_matriz(struct matriz *to,struct matriz *from);

/**
 * Imprime la matriz a la que apunta el
 * apuntador M.
 */
void print_matriz(struct matriz *M);
#endif // PROGESTE02_UTIL_H_INCLUDED
