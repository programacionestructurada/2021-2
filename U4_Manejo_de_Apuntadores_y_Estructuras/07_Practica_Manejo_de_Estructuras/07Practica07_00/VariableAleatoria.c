#include <stdio.h>
#include <stdlib.h>
#include "PO_DiaNumDLab.h"
short funcion_LIntroProg(char dia[16]);


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
 return 0;
}/*end main()*/
