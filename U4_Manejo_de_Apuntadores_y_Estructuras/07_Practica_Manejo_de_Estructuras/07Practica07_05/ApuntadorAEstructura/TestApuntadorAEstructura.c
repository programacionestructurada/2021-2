/**TestConjDInts.c*/
#include "../PO_DiaNumDLab.h"
void pedir_tercer_elemento(struct ConjDInts *);

int main(int argc,char *argv[])
{
 struct ConjDInts *cdi_Pt = NULL;
 struct ConjDInts Conj_B = {3,(short*)malloc(3*sizeof(short))};
 cdi_Pt = &Conj_B;
 Conj_B.Elem[0] = 10;
 cdi_Pt->Elem[1] = 20;
 pedir_tercer_elemento(cdi_Pt);
 print_ConjDInts(Conj_B,',');

 return 0;
}/*end main()*/

void pedir_tercer_elemento(struct ConjDInts *p)
{
 printf("Teclea un entero [%hi,%hi]: ",SHRT_MIN,SHRT_MAX);
 scanf("%hi",p->Elem + 2);
}



