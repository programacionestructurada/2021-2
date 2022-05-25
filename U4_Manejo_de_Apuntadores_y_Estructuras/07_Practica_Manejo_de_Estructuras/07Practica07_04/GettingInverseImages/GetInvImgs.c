/**TestConjDInts.c*/
#include "../PO_DiaNumDLab.h"

static struct ConjDInts Conj_A;   /**Conjunto A*/

int main(int argc,char *argv[])
{
 //short i;
 char_array_pt_t char_array_pt = NULL;

 printf("%s\n\n",__FILE__);
 Conj_A.canDElems = 1;
 Conj_A.Elem = (short*)malloc(Conj_A.canDElems*sizeof(short));
 Conj_A.Elem[0] = 4;//Conj_A.Elem[1] = 1;
 printf("funcion_LIntroProg^{-1}({");print_ConjDInts(Conj_A,',');printf("}) = ");
 char_array_pt = ImagenInversaD_LIntroProg(Conj_A);
 printf("%s\n",*char_array_pt);

 Conj_A.Elem[0] = 3;
 printf("funcion_LIntroProg^{-1}({");print_ConjDInts(Conj_A,',');printf("}) = ");
 char_array_pt = ImagenInversaD_LIntroProg(Conj_A);
 printf("%s\n",*char_array_pt);

 Conj_A.Elem[0] = 2;
 printf("funcion_LIntroProg^{-1}({");print_ConjDInts(Conj_A,',');printf("}) = ");
 char_array_pt = ImagenInversaD_LIntroProg(Conj_A);
 printf("%s\n",*char_array_pt);

 Conj_A.Elem[0] = 1;
 printf("funcion_LIntroProg^{-1}({");print_ConjDInts(Conj_A,',');printf("}) = ");
 char_array_pt = ImagenInversaD_LIntroProg(Conj_A);
 printf("%s\n",*char_array_pt);

 Conj_A.Elem[0] = 0;
 printf("funcion_LIntroProg^{-1}({");print_ConjDInts(Conj_A,',');printf("}) = ");
 char_array_pt = ImagenInversaD_LIntroProg(Conj_A);
 printf("%s\n",*char_array_pt);

 Conj_A.canDElems = 2;free(Conj_A.Elem);
 Conj_A.Elem = (short*)malloc(Conj_A.canDElems*sizeof(short));
 Conj_A.Elem[0] = 4;Conj_A.Elem[1] = 1;
 printf("funcion_LIntroProg^{-1}({");print_ConjDInts(Conj_A,',');printf("}) = ");
 char_array_pt = ImagenInversaD_LIntroProg(Conj_A);
 printf("%s\n",*char_array_pt);


 Conj_A.canDElems = 4;free(Conj_A.Elem);
 Conj_A.Elem = (short*)malloc(Conj_A.canDElems*sizeof(short));
 Conj_A.Elem[0] = 4;Conj_A.Elem[1] = 3;Conj_A.Elem[2] = 2;Conj_A.Elem[3] = 1;
 printf("funcion_LIntroProg^{-1}({");print_ConjDInts(Conj_A,',');printf("}) = ");
 char_array_pt = ImagenInversaD_LIntroProg(Conj_A);
 printf("%s\n",*char_array_pt);

 Conj_A.canDElems = 3;free(Conj_A.Elem);
 Conj_A.Elem = (short*)malloc(Conj_A.canDElems*sizeof(short));
 Conj_A.Elem[0] = 4;Conj_A.Elem[1] = 1;Conj_A.Elem[2] = 0;
 printf("funcion_LIntroProg^{-1}({");print_ConjDInts(Conj_A,',');printf("}) = ");
 char_array_pt = ImagenInversaD_LIntroProg(Conj_A);
 printf("%s\n",*char_array_pt);

 Conj_A.canDElems = 0;
 printf("funcion_LIntroProg^{-1}({");print_ConjDInts(Conj_A,',');printf("}) = ");
 char_array_pt = ImagenInversaD_LIntroProg(Conj_A);
 printf("%s\n",*char_array_pt);
 free(Conj_A.Elem);
 return 0;
}
