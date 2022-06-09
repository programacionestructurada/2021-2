/**LintroProg.c*/
#include <string.h>
#include <limits.h>  /** SHRT_MIN */
#include "PO_DiaNumDLab.h"

struct PO_DiaNumDLab PO_DNdL_0 = {0,"DOMINGO"};
struct PO_DiaNumDLab PO_DNdL_1 = {4,"LUNES"};
struct PO_DiaNumDLab PO_DNdL_2 = {0,"MARTES"};
struct PO_DiaNumDLab PO_DNdL_3 = {4,"MIERCOLES"};
struct PO_DiaNumDLab PO_DNdL_4 = {1,"JUEVES"};
struct PO_DiaNumDLab PO_DNdL_5 = {0,"VIERNES"};
struct PO_DiaNumDLab PO_DNdL_6 = {0,"SABADO"};

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

