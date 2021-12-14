/** 4_1_5_AddDApuntadores */

#include <stdio.h>
#include <stdlib.h>
#include "../include/tipo.h"

int main(){
 int i;
 struct conjunto_dints *conjunto[2]; /**Arreglo de apuntadores a
                                        struct conjunto_dints */
 int *p = (int *)malloc(3 * sizeof(int));
 struct conjunto_dints CDI_1 = { 3, p };
 *(CDI_1.N + 0) = 0;
 *(CDI_1.N + 1) = 2;/* La suma se realiza con aritm\'etica de apuntador */
 *(CDI_1.N + 2) = 4;

 struct conjunto_dints CDI_2;
 int *q = (int *)malloc(3 * sizeof(int));
 CDI_2.n = 3;
 CDI_2.N = q;
 CDI_2.N[0] = 1;
 CDI_2.N[1] = 3;
 CDI_2.N[2] = 5;

 conjunto[0] = &CDI_1;
 conjunto[1] = &CDI_2;

 printf("PROGRAMA QUE USA UN ARREGLO DE APUNTADORES\n");
 for(i = 0; i < SIZE_ARR(conjunto);i++){
   printf("\n");
   print_conjunto_dints(conjunto[i]);
 }


 free(p);
 free(q);
 return 0;
}/*end main()*/


