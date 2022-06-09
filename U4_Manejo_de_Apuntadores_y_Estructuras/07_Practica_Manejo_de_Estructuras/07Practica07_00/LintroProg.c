/**LintroProg.c*/
#include <string.h>
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
