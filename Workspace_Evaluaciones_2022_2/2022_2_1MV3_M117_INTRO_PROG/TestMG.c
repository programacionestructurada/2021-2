/**TestMG.c*/
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//#include "../CommFiles/Discente.h"
#include "Discente.c"
int main(int argc,char *argv[])
{
 size_t i;
 printf("%s\n",__FILE__);
// static_assert(LENGTH(Disc_Arr)==DISCENTS_AMOUNT,
//"DISCENTS_AMOUNT en ../CommonFiles/Discente.h debe ser \
//igual a la cantidad de discentes evaluados (LENGTH(Disc_Arr) \
//en EventsMeasures.c)");
 float_array_pt_t float_array_pt = max_grades(Disc_Arr);
 for (i=0;i<DISCENTS_AMOUNT;i++) {
   printf("%-44s%7.1f\n",Disc_Arr[i]->disc_name,(*float_array_pt)[i]);
 }
// printf("\nSIZE_OF_CALDEVID=%d\n",SIZE_OF_CALDEVID);

 return 0;
}
