/**LIntroProg.c*/
#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include "PO_DiaNumDLab.h"
short medida_cdd(char ev[]);
#if 0 //LMC 2022.05.05
struct PO_DiaNumDLab PO_DNdL_0 = {"DOMINGO",0};
struct PO_DiaNumDLab PO_DNdL_1 = {"LUNES",4};
struct PO_DiaNumDLab PO_DNdL_2 = {"MARTES",0};
struct PO_DiaNumDLab PO_DNdL_3 = {"MIERCOLES",4};
struct PO_DiaNumDLab PO_DNdL_4 = {"JUEVES",1};
struct PO_DiaNumDLab PO_DNdL_5 = {"VIERNES",0};
struct PO_DiaNumDLab PO_DNdL_6 = {"SABADO",0};
#else
struct PO_DiaNumDLab PO_DNdL_0 = {0,"DOMINGO"};
struct PO_DiaNumDLab PO_DNdL_1 = {4,"LUNES"};
struct PO_DiaNumDLab PO_DNdL_2 = {0,"MARTES"};
struct PO_DiaNumDLab PO_DNdL_3 = {4,"MIERCOLES"};
struct PO_DiaNumDLab PO_DNdL_4 = {1,"JUEVES"};
struct PO_DiaNumDLab PO_DNdL_5 = {0,"VIERNES"};
struct PO_DiaNumDLab PO_DNdL_6 = {0,"SABADO"};
#endif // 0
/**Arreglo de apuntadores a estructura*/
struct PO_DiaNumDLab *LIntroProg[] = {
/*0*/ &PO_DNdL_0,
/*1*/ &PO_DNdL_1,
/*2*/ &PO_DNdL_2,
/*3*/ &PO_DNdL_3,
/*4*/ &PO_DNdL_4,
/*5*/ &PO_DNdL_5,
/*6*/ &PO_DNdL_6
};

/**
 funcion_LIntroProg - Devuelve el n\'umero de laboratorio
 correspondiente al d\'ia que se recibe como argumento.
 @pre: El arreglo dia debe contener el nombre de uno de
 los d\'ias de la semana en espa\~nol.
*/
short funcion_LIntroProg(char dia[16])
{
 short index;
 char DIA[][16] = {"DOMINGO","LUNES","MARTES","MIERCOLES",
 "JUEVES","VIERNES","SABADO"};
 for(index=0;index<(sizeof(DIA)/sizeof(DIA[0]));index++){
   if(!strcmp(dia,DIA[index])){/**``Los d\'ias son iguales''*/
     //return LIntroProg[index]; LIntroProg[index] tiene tipo
     //de dato struct PO_DiaNumDLab *, (se lee apuntador a
     //estructura PO_DiaNumDLab)
     return LIntroProg[index]->NumDLab;
   }
 }
 return -1;
}

struct PO_NumDLab_Days PO_NumDLab_Days_Empty = {SHRT_MIN,"{ }"};
struct PO_NumDLab_Days PO_NumDLab_Days_0 = {0,"{DOMINGO,MARTES,VIERNES,SABADO}"};
struct PO_NumDLab_Days PO_NumDLab_Days_1 = {1,"{JUEVES}"};
struct PO_NumDLab_Days PO_NumDLab_Days_4 = {4,"{LUNES,MIERCOLES}"};

struct PO_NumDLab_Days *LIntroProgInv[] = {
/*0*/ &PO_NumDLab_Days_0,
/*1*/ &PO_NumDLab_Days_1,
/*2*/ &PO_NumDLab_Days_4
};
//short NdL[] = {0,1,4};

/**Ejemplo de una funci\'on que recibe un entero corto y devuelve
 * un apuntador a un arreglo de caracteres.
 */
//char (*p)[] funcion_LIntroProg_Inv(short ndl)
//char (*funcion_LIntroProg_Inv(short ndl))[SIZE_OF_CHAR_ARRAY]
char (*funcion_LIntroProg_Inv(short ndl))[]
{
 short index;
 char NDL[] = {0,1,4};
 for(index=0;index<(sizeof(NDL)/sizeof(NDL[0]));index++){
   if(ndl==NDL[index]){/**``si hemos encontrado el \'indice correcto''*/
     return &(LIntroProgInv[index]->char_arr);
   }
 }
 return &(PO_NumDLab_Days_Empty.char_arr);
}

struct ImageOfASetUnderFunction ImageOfASetUnder_function_LIntroProg = {
 0,NULL,"{"
};

#define MAX_SIZE    100
/**Funci\'on que recibe un apuntador a funci\'on y un arreglo de caracteres;
 * y devuelve un apuntador a arreglo de caracteres.
 */
char (*ImgOfASetUnder(short (*f)(char []),char DaySet[]))[]
{
 short i,in_ind,end_ind;
 char str[SIZE_OF_CHAR_ARRAY];
// short n = 0;
// short queue[MAX_SIZE];
 struct ImageOfASetUnderFunction *p = malloc(sizeof(*p));
 //struct ImageOfASetUnderFunction ImageOfASetUnder_function_LIntroProg =*p;
 p->num_DVals=0;
 p->Vals=NULL;
 p->set_of_vals[0]='{';p->set_of_vals[1]='\0';
 short cntd = medida_cdd(DaySet);
 //printf("\ncntd=%d\n",cntd);//<-------------------
 short value;
 short ESTA = 0;
 i=0;end_ind=-1;in_ind=1;
 while (cntd) {//printf("\ncntd=%d\n",cntd);//<------------------
   i = in_ind;
   while((DaySet[i]!=',')&&(DaySet[i]!='}')){
     i++;
   }//printf("\nDESP del while dentro del while\n");//<------------------
   end_ind=i-1;
   for (i=in_ind;i<=end_ind;i++){
     str[i-in_ind] = DaySet[i];
   }
   str[i-in_ind] = '\0';//printf("\nstr[]=%s\n",str);//<--------------------
   value = f(str);//printf("value=%d\n",value);//<---------------------
//   for (i=0;i<ImageOfASetUnder_function_LIntroProg.num_DVals;i++){
//     if(value==ImageOfASetUnder_function_LIntroProg.Vals[i]){
//        break;
//     }
//   }
   for (i=0;i < p->num_DVals;i++){
     if(value==p->Vals[i]){
        break;
     }
   }
   //if (i==ImageOfASetUnder_function_LIntroProg.num_DVals){
   if (i==p->num_DVals){
     ESTA = 0;
   }else{
     ESTA = 1;
   }
   if (!ESTA) {
//     short *tmp = malloc((ImageOfASetUnder_function_LIntroProg.num_DVals+1)*sizeof(short));
//     for (i=0;i<ImageOfASetUnder_function_LIntroProg.num_DVals;i++){
     short *tmp = malloc((p->num_DVals+1)*sizeof(short));
     for (i=0;i < p->num_DVals;i++){
        tmp[i]=p->Vals[i];
     }
     //tmp[ImageOfASetUnder_function_LIntroProg.num_DVals]=value;
     tmp[p->num_DVals]=value;
     //printf("\ntmp[ImageOfASetUnder_function_LIntroProg.num_DVals]=%d\n",
     //       tmp[ImageOfASetUnder_function_LIntroProg.num_DVals]);
//     ImageOfASetUnder_function_LIntroProg.num_DVals++;
//     ImageOfASetUnder_function_LIntroProg.Vals=
//        malloc(ImageOfASetUnder_function_LIntroProg.num_DVals*sizeof(short));
     p->num_DVals++;
     p->Vals=malloc(p->num_DVals*sizeof(short));
//     for (i=0;i<ImageOfASetUnder_function_LIntroProg.num_DVals;i++){
//        ImageOfASetUnder_function_LIntroProg.Vals[i]=tmp[i];
//     }
     for (i=0;i < p->num_DVals;i++){
        p->Vals[i]=tmp[i];
     }
   }
   in_ind=end_ind+2;
   cntd--;
 }
 /**Si lo anterior funciona (it would be a miracle!), aqu\'i es
  * donde se deber\'ia colocar c\'odigo para ordenar los valores
  * discretos de la imagen del conjunto DaySet --por ejemplo,
  * utilizando una Priority queue, o usando el algoritmo de la
  * burbuja.
  */
// if (ImageOfASetUnder_function_LIntroProg.Vals!=NULL){
//   sprintf(str,"%d",ImageOfASetUnder_function_LIntroProg.Vals[0]);
//   strcat(ImageOfASetUnder_function_LIntroProg.set_of_vals,str);
//   for(i=1;i<ImageOfASetUnder_function_LIntroProg.num_DVals;i++){
//     sprintf(str,",%d",ImageOfASetUnder_function_LIntroProg.Vals[i]);
//     strcat(ImageOfASetUnder_function_LIntroProg.set_of_vals,str);
//   }
// }
 if (p->Vals!=NULL){
   sprintf(str,"%d",p->Vals[0]);
   strcat(p->set_of_vals,str);
   for(i=1;i<p->num_DVals;i++){
     sprintf(str,",%d",p->Vals[i]);
     strcat(p->set_of_vals,str);
   }
 }
// if (ImageOfASetUnder_function_LIntroProg.num_DVals) {
//   strcat(ImageOfASetUnder_function_LIntroProg.set_of_vals,"}");
// }else{
//   strcat(ImageOfASetUnder_function_LIntroProg.set_of_vals," }");
// }
// return &(ImageOfASetUnder_function_LIntroProg.set_of_vals);
 if (p->num_DVals) {
   strcat(p->set_of_vals,"}");
 }else{
   strcat(p->set_of_vals," }");
 }
 return &(p->set_of_vals);
}/*end char (*ImgOfASetUnder(short (*f)(char []),char DaySet[]))[]*/

