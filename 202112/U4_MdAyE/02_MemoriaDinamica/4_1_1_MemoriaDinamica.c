/** 4_1_1_MemoriaDinamica.c */
#include <stdio.h>
#include <stdlib.h>
#include "../include/tipo.h"

int main(){
 struct conjunto_dints *cdiPt,*other;

 cdiPt =(struct conjunto_dints *)malloc(sizeof(*cdiPt));
 cdiPt->n = 3;
 cdiPt->N = (int *)malloc(cdiPt->n * sizeof(int));
 cdiPt->N[0] = 2;
 cdiPt->N[1] = 3;
 cdiPt->N[2] = 5;

 print_conjunto_dints(cdiPt);
 printf("\n");
#if 1
 other =(struct conjunto_dints *)malloc(sizeof(*other));
 init_conjunto_dints(other);
 printf("\n");
 print_conjunto_dints(other);
#endif
 free(cdiPt);
 //free(other);
 return 0;
}/*end main()*/

