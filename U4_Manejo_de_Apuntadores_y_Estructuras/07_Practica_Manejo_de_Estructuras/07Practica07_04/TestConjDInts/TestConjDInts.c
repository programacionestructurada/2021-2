/**TestConjDInts.c*/
#include "../PO_DiaNumDLab.h"

static struct ConjDInts Conj_A;   /**Conjunto A*/

int main(int argc,char *argv[])
{
 short i;
 Conj_A.canDElems = 5;
 Conj_A.Elem = (short*)malloc(
                Conj_A.canDElems*sizeof(short));
 for(i=0;i<Conj_A.canDElems;i++){
   Conj_A.Elem[i] = 2*i+1;
 }
 printf("%s\n\n",__FILE__);
 print_ConjDInts(Conj_A,'\0');
 return 0;
}/*end main()*/

