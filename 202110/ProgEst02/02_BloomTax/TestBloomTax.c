#include <stdio.h>
#include "BloomTax.h"

int main(){
#if 1
 int i;
 printf("Verbos de niveles taxo\\'omicos (Bloom)\n");
 printf("\nNivel CONOCIMIENTO\n(Recordar informaci\\'on)\n");
 for(i = 0; i < SIZE_ARR(VerbDTax_Conocimiento); i++){
   printf("%s\n",VerbDTax_Conocimiento[i]);
 }
 printf("\nNivel COMPRENSI\\'ON\n(Interpretar \
informaci\\'on poni\\'endola en sus propias palabras)\n");
 for(i = 0; i < SIZE_ARR(VerbDTax_Comprension); i++){
   printf("%s\n",VerbDTax_Comprension[i]);
 }
 printf("\nNivel APLICACI\\'ON\n(Usar el conocimiento \
o la generalizaci\\'on en una nueva situaci\\'on)\n");
 for(i = 0; i < SIZE_ARR(VerbDTax_Aplicacion); i++){
   printf("%s\n",VerbDTax_Aplicacion[i]);
 }
 printf("\nNivel AN\\'ALISIS\n(Dividir el conocimiento \
en partes y mostrar relaciones entre ellas)\n");
 for(i = 0; i < SIZE_ARR(VerbDTax_Analisis); i++){
   printf("%s\n",VerbDTax_Analisis[i]);
 }
 printf("\nNivel S\\'INTESIS\n(Juntar o unir, \
partes o fragmentos de conocimiento para formar un \
\ntodo y construir relaciones para situaciones nuevas)\n");
 for(i = 0; i < SIZE_ARR(VerbDTax_Sintesis); i++){
   printf("%s\n",VerbDTax_Sintesis[i]);
 }
 printf("\nNivel EVALUACI\\'ON\n(Hacer juicios con base a \
criterios dados)\n");
 for(i = 0; i < SIZE_ARR(VerbDTax_Evaluacion); i++){
   printf("%s\n",VerbDTax_Evaluacion[i]);
 }
#endif // 1
 return 0;
}/*end main()*/
