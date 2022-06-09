#include <stdio.h>
#include <stdlib.h>
//#define NDEBUG
#include <assert.h>
#include <string.h>
#include "../CommFiles/Discente.h"
#include "EventsMeasures.c"
#ifndef CONFIG_INCLUDING_DISCENTE_C_IN_MAXIMUNS_GRADES_C
float_array_pt_t max_grades(struct Discente *D_A[DISCENTS_AMOUNT])
#else
#include "Discente.c"
float_array_pt_t max_grades()
#endif
{
 static float arr[DISCENTS_AMOUNT] = {0.0f};
 float_array_pt_t pRet = &arr;
 short i,j;
 static_assert(LENGTH(Disc_Arr)==DISCENTS_AMOUNT,
"DISCENTS_AMOUNT en ../CommonFiles/Discente.h debe ser \
igual a la cantidad de discentes evaluados (LENGTH(Disc_Arr) \
en Discente.c)");

static_assert(LENGTH(EvtMeasure)==LENGTH(m_arr),
"SIZE_OF_CALDEVID en ../CommonFiles/Discente.h debe ser \
igual a LENGTH(EvtMeasure) (en EventsMeasures.c)");
 for (i=0;i<LENGTH(arr);i++){
   for (j=1;j<LENGTH(EvtMeasure);j++){
#ifndef CONFIG_INCLUDING_DISCENTE_C_IN_MAXIMUNS_GRADES_C
     arr[i]+=EvtMeasure[j]*D_A[i]->caldevid[j];
#else
     arr[i]+=EvtMeasure[j]*Disc_Arr[i]->caldevid[j];
#endif
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
void
#ifndef CONFIG_INCLUDING_DISCENTE_C_IN_MAXIMUNS_GRADES_C
print_max_grades(float_array_pt_t float_array_pt,
                 struct Discente *D_A[DISCENTS_AMOUNT])
#else
print_max_grades(float_array_pt_t float_array_pt)
#endif // CONFIG_INCLUDING_DISCENTE_C_IN_MAXIMUNS_GRADES_C
{
 size_t i,j;
 char str[64];
 for (i=1;i<DISCENTS_AMOUNT;i++) {
#ifndef CONFIG_INCLUDING_DISCENTE_C_IN_MAXIMUNS_GRADES_C
   sprintf(str,"%s",D_A[i]->disc_name);
   for (j=0;j<(44-strlen(D_A[i]->disc_name));j++){
     strcat(str,".");
   }
   printf("%2li %-44s%5.1f\n",i,D_A[i]->disc_name,(*float_array_pt)[i]);
#else
   sprintf(str,"%s",Disc_Arr[i]->disc_name);
   for (j=0;j<(44-strlen(Disc_Arr[i]->disc_name));j++){
     strcat(str,".");
   }
   printf("%2li %-44s%5.1f\n",i,str,(*float_array_pt)[i]);
#endif // CONFIG_INCLUDING_DISCENTE_C_IN_MAXIMUNS_GRADES_C
 }
}
