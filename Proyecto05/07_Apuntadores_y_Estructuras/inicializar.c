#include <stdlib.h>
#include <common.h>
ConjDInt SetA;     /** Algunos n\'umeros pares */
ConjDInt SetB;     /** Algunos n\'umeros primos */
int *p,*q;
void inicializar(){
 /** 5 n\'umeros pares */
 p = malloc(5*sizeof(int));
 *(p + 0) = 2;
 *(p + 1) = 10;
 *(p + 2) = 22;
 *(p + 3) = 8;
 *(p + 4) = 12;
 init_set(&SetA,5,p);
 /** 4 n\'umeros primos*/
 q = malloc(4*sizeof(int));
 *(q + 0) = 1;
 *(q + 1) = 2;
 *(q + 2) = 3;
 *(q + 3) = 7;
 init_set(&SetB,4,q);
}
