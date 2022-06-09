#include <stdio.h>
#include <stdlib.h>
#include "PO_DiaNumDLab.h"
short funcion_LIntroProg(char dia[16]);
//char (*)[] funcion_LIntroProg_Inv(short numDL);
/**Prototipo de una funci\'on de recibe un short y devuelve
 * un apuntador a arreglo de SIZE_OF_CHAR_ARRAY chars.
 */
//char (*funcion_LIntroProg_Inv(short ndl))[SIZE_OF_CHAR_ARRAY];
/**Prototipo de una funci\'on de recibe un short y devuelve
 * un apuntador a arreglo de chars.
 */
char (*funcion_LIntroProg_Inv(short ndl))[];
short medida_cdd(char ev[]);
/**Funci\'on que recibe un apuntador a funci\'on y un arreglo de caracteres;
 * y devuelve un apuntador a arreglo de caracteres.
 */
char (*ImgOfASetUnder(short (*f)(char []),char DaySet[]))[];
int Integral(funcion_LIntroProg_Inv_t f,short valor[],short sizeof_valor);

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
 //printf("\nValores de la funci\\'on funcion_LIntroProg_Inv\n\n");
 printf("\n\n(Im\\'agenes inversas correspondientes a los valores que \
toma la funci\\'on funcion_LIntroProg)\n\n");
 printf("%-14s%-14s\n","Num. de Lab.","DIA(S)");
 for(i=0;i<(sizeof(NdL)/sizeof(NdL[0]));i++){
   char_arr_pt = funcion_LIntroProg_Inv(NdL[i]);
   if (char_arr_pt != NULL)
     printf("%7i%s%-64s\n",NdL[i],"       ",*char_arr_pt);
 }
 printf("\n\n%-14s%-14s\n","Num. de Lab.","DIA(S)");
 for(i=0;i<=5;i++){
   char_arr_pt = funcion_LIntroProg_Inv(i);
   if (char_arr_pt != NULL)
     printf("%7i%s%-64s\n",i,"       ",*char_arr_pt);
 }

// printf("\nmedida_cdd(\"{}\")=%d\n",medida_cdd("{}"));
// printf("medida_cdd(\"{ }\")=%d\n",medida_cdd("{ }"));
// printf("medida_cdd(\"{  }\")=%d\n",medida_cdd("{  }"));
// printf("medida_cdd(\"{DOMINGO,MARTES,VIERNES,SABADO}\")=%d\n",
//        medida_cdd(*funcion_LIntroProg_Inv(0)));
// printf("medida_cdd(\"{JUEVES}\")=%d\n",medida_cdd(*funcion_LIntroProg_Inv(1)));
// printf("medida_cdd(*funcion_LIntroProg_Inv(2)))=%d\n",medida_cdd(*funcion_LIntroProg_Inv(2)));
// printf("medida_cdd(*funcion_LIntroProg_Inv(3)))=%d\n",medida_cdd(*funcion_LIntroProg_Inv(3)));
// printf("medida_cdd(\"{LUNES,MIERCOLES}\")=%d\n",medida_cdd(*funcion_LIntroProg_Inv(4)));
 printf("\n");
 for(i=0;i<=5;i++){
   char_arr_pt = funcion_LIntroProg_Inv(i);
   printf("medida_cdd(%s)=%d\n",
          *char_arr_pt,
          medida_cdd(*funcion_LIntroProg_Inv(i)));
 }
 printf("\n\nLa integral de %s sobre %sunion%sunion%s es %d\n",
        "funcion_LIntroProg",
        *funcion_LIntroProg_Inv(0),*funcion_LIntroProg_Inv(1),*funcion_LIntroProg_Inv(4),
        Integral(&funcion_LIntroProg_Inv,NdL,LENGTH(NdL)));
 short ImagenDelLUNES[] = {1};
 printf("\n\nLa integral de %s sobre *funcion_LIntroProg_Inv(1)=%s es %d\n",
        "funcion_LIntroProg",
        *funcion_LIntroProg_Inv(1),
        Integral(&funcion_LIntroProg_Inv,ImagenDelLUNES,LENGTH(ImagenDelLUNES)));
 printf("\n\nLa integral de %s sobre *funcion_LIntroProg_Inv(2)=%s es %d\n",
        "funcion_LIntroProg",
        *funcion_LIntroProg_Inv(2),
        Integral(&funcion_LIntroProg_Inv,ImagenDelLUNES,0));
 printf("\n\nLa integral de %s sobre *funcion_LIntroProg_Inv(3)=%s es %d\n",
        "funcion_LIntroProg",
        *funcion_LIntroProg_Inv(3),
        Integral(&funcion_LIntroProg_Inv,ImagenDelLUNES,0));
 short ImagenDelLUNES_MIERCOLES[] = {4};
 printf("\n\nLa integral de %s sobre *funcion_LIntroProg_Inv(4)=%s es %d\n",
        "funcion_LIntroProg",
        *funcion_LIntroProg_Inv(4),
        Integral(&funcion_LIntroProg_Inv,ImagenDelLUNES_MIERCOLES,LENGTH(ImagenDelLUNES_MIERCOLES)));
 printf("\n\nLa integral de %s sobre *funcion_LIntroProg_Inv(72)=%s es %d\n",
        "funcion_LIntroProg",
        *funcion_LIntroProg_Inv(72),
        Integral(&funcion_LIntroProg_Inv,
                 ImagenDelLUNES_MIERCOLES,
                 medida_cdd(*funcion_LIntroProg_Inv(72))));
 printf("\nLa imagen de {DOMINGO,LUNES,MARTES,MIERCOLES,JUEVES,VIERNES,SABADO} es %s",
        *ImgOfASetUnder(funcion_LIntroProg,"{DOMINGO,LUNES,MARTES,MIERCOLES,JUEVES,VIERNES,SABADO}"));
 printf("\nLa imagen de {DOMINGO,LUNES,MARTES,MIERCOLES,JUEVES,VIERNES,SABADO} es %s",
        *ImgOfASetUnder(funcion_LIntroProg,"{DOMINGO,LUNES,MARTES,MIERCOLES,JUEVES,VIERNES,SABADO}"));
 printf("\nLa imagen de {JUEVES} es %s",
        *ImgOfASetUnder(funcion_LIntroProg,"{JUEVES}"));
 printf("\nLa imagen de %s es %s",*funcion_LIntroProg_Inv(2),
        *ImgOfASetUnder(funcion_LIntroProg,*funcion_LIntroProg_Inv(2)));
 printf("\nLa imagen de %s es %s",*funcion_LIntroProg_Inv(3),
        *ImgOfASetUnder(funcion_LIntroProg,*funcion_LIntroProg_Inv(3)));
 printf("\nLa imagen de %s es %s",*funcion_LIntroProg_Inv(4),
        *ImgOfASetUnder(funcion_LIntroProg,*funcion_LIntroProg_Inv(4)));
 printf("\nLa imagen de %s es %s",*funcion_LIntroProg_Inv(72),
        *ImgOfASetUnder(funcion_LIntroProg,*funcion_LIntroProg_Inv(72)));
 printf("\nLa imagen de %s es %s","{LUNES,MIERCOLES,JUEVES}",
        *ImgOfASetUnder(funcion_LIntroProg,"{LUNES,MIERCOLES,JUEVES}"));

 return 0;
}

//Bosque de Teutoburgo, en Kal Kriese
