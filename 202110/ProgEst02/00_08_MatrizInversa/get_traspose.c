/** get_traspose.c */
#include <stdlib.h>
#include "struct_matriz.h"
/**
 * get_traspose()
 * Obtiene la traspuesta de la matriz A de rows filas y cols
 * columnas.
 * @param A: doble apuntador a la matriz original
 * @param rows: cantidad de tilas de la matriz original
 * @param cols: cantidad de columnas de la matriz original
 * @return: doble apuntador a la matriz traspuesta
 */
float **get_traspose(float **A,unsigned int rows,unsigned int cols)
{
 unsigned int i,j,fil,col;
 float **A_t = (float **)malloc(cols*sizeof(float *));
 for(i=0;i<cols;i++){
  *(A_t + i) = (float *)malloc(rows*sizeof(float));
 }
 fil = cols;
 col = rows;
 for(i=0;i<fil;i++){
   for(j=0;j<col;j++){
     #if 0 // arr[x] = *(arr + x)
     A_t[i][j] = A[j][i];
     #else
     *(*(A_t + i) + j) = A[j][i];
     #endif
   }
 }
 return A_t;
}/*end get_traspose()*/
