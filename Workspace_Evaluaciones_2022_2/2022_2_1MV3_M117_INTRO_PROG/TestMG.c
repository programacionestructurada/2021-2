/**TestMG.c*/
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "../CommFiles/Discente.h"
#ifndef CONFIG_INCLUDING_DISCENTE_C_IN_MAXIMUNS_GRADES_C
#include "Discente.c"
#endif
int main(int argc,char *argv[])
{
 printf("%s\n",__FILE__);
#ifndef CONFIG_INCLUDING_DISCENTE_C_IN_MAXIMUNS_GRADES_C
 size_t i;
 float_array_pt_t float_array_pt = max_grades(Disc_Arr);
 for (i=0;i<DISCENTS_AMOUNT;i++) {
   printf("%-44s%7.1f\n",Disc_Arr[i]->disc_name,(*float_array_pt)[i]);
 }
#else
 float_array_pt_t float_array_pt = max_grades();
 print_max_grades(float_array_pt);
#endif
// printf("\nSIZE_OF_CALDEVID=%d\n",SIZE_OF_CALDEVID);

 return 0;
}
