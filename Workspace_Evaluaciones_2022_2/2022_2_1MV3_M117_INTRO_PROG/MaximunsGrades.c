#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "../CommFiles/Discente.h"
#include "EventsMeasures.c"
float_array_pt_t max_grades(struct Discente *D_A[DISCENTS_AMOUNT])
{
 static float arr[DISCENTS_AMOUNT] = {0.0f};
 float_array_pt_t pRet = &arr;
 short i,j;
// static_assert(LENGTH(Disc_Arr)==DISCENTS_AMOUNT,
//"DISCENTS_AMOUNT en ../CommonFiles/Discente.h debe ser \
//igual a la cantidad de discentes evaluados (LENGTH(Disc_Arr) \
//en EventsMeasures.c)");
//static_assert(LENGTH(EvtMeasure)==LENGTH(m_arr),
//"SIZE_OF_CALDEVID en ../CommonFiles/Discente.h debe ser \
//igual a LENGTH(EvtMeasure) (en EventsMeasures.c)");
 for (i=0;i<LENGTH(arr);i++){
   for (j=1;j<LENGTH(EvtMeasure);j++){
     arr[i]+=EvtMeasure[j]*D_A[i]->caldevid[j];
   }
 }
// for (i=0;i<LENGTH(arr);i++){
//   for (j=0;j<LENGTH(EvtMeasure);j++) {
//     printf("EvtMeasure[j]=%f\tD_A[i]->caldevid[j]=%f\n",
//            EvtMeasure[j],D_A[i]->caldevid[j]);
//   }
//   printf("%-44s%7.1f\n",D_A[i]->disc_name,arr[i]);
// }
// printf("\nLENGTH(EvtMeasure)=%d\n",LENGTH(EvtMeasure));
 return pRet;
}
