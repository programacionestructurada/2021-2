/** copy_matriz.c */
#include <stdlib.h>
#include "../include/struct_matriz.h"

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

