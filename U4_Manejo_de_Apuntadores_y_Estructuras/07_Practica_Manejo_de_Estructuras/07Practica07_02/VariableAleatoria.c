#include <stdio.h>
#include <stdlib.h>
#include "PO_DiaNumDLab.h"
short funcion_LIntroProg(char dia[16]);
/**Prototipo de una funci\'on de recibe un short y devuelve
 * un apuntador a arreglo de chars.
 */
char (*funcion_LIntroProg_Inv(short ndl))[];

int main(int argc,char *argv[])
{
 short i;
 /**Dominio de la funci\'on funcion_LIntroProg*/
 char day[][16] = {"DOMINGO","LUNES","MARTES","MIERCOLES",
"JUEVES","VIERNES","SABADO"};
 printf("\nValores de la funci\\'on funcion_LIntroProg\n\n");
 printf("%-14s%-14s\n","DIA","Laboratorio");
 for(i=0;i<(sizeof(day)/sizeof(day[0]));i++){
   printf("%-14s%6i\n",day[i],funcion_LIntroProg(day[i]));
 }

/**Dominio de la funci\'on funcion_LIntroProg_Inv*/
 short NdL[] = {0,1,4};
 char (*char_arr_pt)[];

 printf("\n\n(Im\\'agenes inversas correspondientes a los valores que \
toma la funci\\'on funcion_LIntroProg)\n\n");
 printf("%-14s%-14s\n","Num. de Lab.","DIA(S)");
 for(i=0;i<(sizeof(NdL)/sizeof(NdL[0]));i++){
   char_arr_pt = funcion_LIntroProg_Inv(NdL[i]);
   if (char_arr_pt != NULL)
     printf("%7i%s%-64s\n",NdL[i],"       ",*char_arr_pt);
 }
 return 0;
}/*end main()*/


