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

/**Devuelve true si value es un elemento del Conjunto de Integers
 * al que apunta CdI, en caso contrario devuelve false.
 */
bool is_element_from(struct ConjDInts *CdI,short value)
{
 short i;
 for (i = 0;i < CdI->canDElems;i++) {
   if (CdI->Elem[i] == value){
     return true;
   }
 }
 return false;
}/*end is_element_from()*/
