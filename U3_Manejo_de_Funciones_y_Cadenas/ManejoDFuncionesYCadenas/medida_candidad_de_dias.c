/**medida_cantidad_de_dias.c*/

#include "PO_DiaNumDLab.h"
short is_empty_set(char ev[]);

/** medida cantidad de d\'ias */
short medida_cdd(char ev[])
{
 short i=0;
 short cdc=0;/**cantidad de comas*/
 while (ev[i]!=0) {
   if(ev[i]==',')
     cdc++;
   i++;
 }
 switch(cdc){
 //case 0:{ if (is_empty_set(ev)){return 0;}else{return 1;}}
 case 0:{return (is_empty_set(ev))?0:1;}
 default:return cdc+1;
 }
 return -1;
}

short is_empty_set(char ev[])
{
 short i,in_ind,end_ind;
 i=end_ind=0;in_ind=-1;
 while(ev[i]!=0){
   if(ev[i]=='{')in_ind=i;
   if(ev[i]=='}')end_ind=i;
   i++;
 }
 if ((in_ind>-1)&&(end_ind>in_ind)){
   i=in_ind+1;
   while((i>in_ind)&&(i<end_ind)){
     if(ev[i++]!=' ')return 0;
   }
 }else{
   return 0;
 }
 return 1;
}

//Definici\'on de tipo apuntador a funci\'on que recibe un
// entero corto y devuelve un apuntador a arreglo de caracteres
//typedef char (**funcion_LIntroProg_Inv_t(short ndl))[];

int
Integral(funcion_LIntroProg_Inv_t f,short valor[],short sizeof_valor)
{
 int result = 0,i;
 for (i=0;i<sizeof_valor;i++){
   result+=valor[i]*medida_cdd(*f(valor[i]));
 }
 return result;
}
