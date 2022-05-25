/**TestConjDInts.c*/
#include "PO_DiaNumDLab.h"

void
print_ConjDInts(struct ConjDInts CdI,char sep)
{
 short index;
 for(index=0;index<CdI.canDElems;index++){
   if (index < CdI.canDElems - 1) {
     //printf("%10i%c",CdI.Elem[index],sep);
     printf("%i%c",CdI.Elem[index],sep);
   }else{
     //printf("%10i",CdI.Elem[index]);
     printf("%i",CdI.Elem[index]);
   }
 }
}



