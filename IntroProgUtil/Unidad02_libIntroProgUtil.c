/**IntroProgUnidad02.c*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#define NDEBUG
#include <assert.h>
#include "IntroProgUnidad02_util.h"
#include "PO_DiaNumDLab.h"
extern char HdG[3][100];
/** print_ident_data(__FILE__,argv[0]); en la funci\'on
 * main imprime datos de identificaci\'on: del archivo
 * fuente que contiene la funci\'on main, y el nombre
 * del archivo ejecutable.
 */
void
print_ident_data(const char *source,char *exe)
{
 printf("FUENTE: %s\n",source);
 printf("EJECUTABLE: %s\n",exe);
}

void print_hrule(void)
{
 unsigned short i;
 for (i = 0;i<ARRAY_SIZE(HdG[0])-2;i++) {
   switch(i){
   case 0:{putchar('+');break;}
   case 12:{putchar('+');break;}
   case 29:{putchar('+');break;}
   case 46:{putchar('+');break;}
   case 63:{putchar('+');break;}
   case 80:{putchar('+');break;}
   case 97:{putchar('+');break;}
   default:{putchar('-');break;}
   }
 }
}

void set_formato_i(char formato_i[],
                   short c1w,short c2w,short c3w,short c4w,short c5w,short c6w)
{
  sprintf(formato_i,"|%c%i%c|%c%i%c|%c%i%c|%c%i%c|%c%i%c|%c%i%c|\n",
         '%',c1w,'s','%',c2w,'s','%',c3w,'s','%',c4w,'s','%',c5w,'s','%',c6w,'s');
}

/**LMC 2022.05.27
 * Coloca en el arreglo formato[] una cadena que se puede utilizar como
 * segundo par\'ametro para la funci\'on de biblioteca sprintf() y con esta
 * funci\'on obtener una fila de una tabla a imprimir ya sea en la pantalla
 * o bien guardarla en un archivo de texto. Ejemplo de uso:
 * short rows=3,cols=6,i;
 * char HdG[rows][SHRT_MAX];
 * char FILA_0[][COLUMN_W] = {"","LUNES","MARTES","MIERCOLES","JUEVES","VIERNES"};
 * char FILA_1[][COLUMN_W] = {"14:30-16:00","","SOTR 3MM11 (C8)","SOTR 3MM11 (C7)",
 *                            "INTROPROG 1MV3 (C1)",SOTR 3MM11 (C7)"};
 * char FILA_2[][COLUMN_W] = {"16:00-17:30","INTROPROG 1MV3 (C4)","","INTROPROG 1MV3 (C4)",
 *                            "PROGAVAN 1MV4 (C3)","PROGAVAN 1MV4 (C4)"};
 *
 * char formato[SHRT_MAX];
 * struct ConjDInts cdi = {6,(short*)malloc(6*sizeof(short))};
 * cdi.Elem[0]=11;cdi.Elem[1]=cdi.Elem[2]=cdi.Elem[3]=cdi.Elem[4]=cdi.Elem[5]=-16;
 *
 * set_formato(formato,cdi);
 * switch(cols){
 * //...
 *  case 6:{sprintf(HdG[0],formato,FILA_0[0],FILA_0[1],FILA_0[2],FILA_0[3],FILA_0[4],FILA_0[5]);
 *       sprintf(HdG[1],formato,FILA_1[0],FILA_1[1],FILA_1[2],FILA_1[3],FILA_1[4],FILA_1[5]);
 *       sprintf(HdG[2],formato,FILA_2[0],FILA_2[1],FILA_2[2],FILA_2[3],FILA_2[4],FILA_2[5]);
 *       break;}
 * //...
 * }
 * print_hrule_cust(h_rule);
 * for(i=0;i<3;i++){
 *   printf("%s",HdG[i]);
 *   print_hrule_cust(h_rule);
 * }
 * print_hrule_cust(h_rule);
 */
void set_formato(char formato[],struct ConjDInts CdI)
{
//  sprintf(formato_i,"|%c%i%c|%c%i%c|%c%i%c|%c%i%c|%c%i%c|%c%i%c|\n",
//         '%',c1w,'s','%',c2w,'s','%',c3w,'s','%',c4w,'s','%',c5w,'s','%',c6w,'s');
 short i;
 char tmp[SHRT_MAX];
 formato[0]='|';formato[1]='\0';
 for (i=0;i<CdI.canDElems;i++) {
   sprintf(tmp,"%c%i%c|",'%',CdI.Elem[i],'s');
   strcat(formato,tmp);
 }
 strcat(formato,"\n");
}

//void print_hrule_cust(char h_rule[]){}
//void print_like_table(struct ConjDInts cdi)
/**
 * rows debe contener el numero de filas de la tabla.
 * cdi.canDElems debe contener el n\'umero de columnas de la tabla.
 * Los apuntadores a arreglo bidimensional de chars a los que apunta two_dim_char_array_pt_pt
 * contienen las cadenas a colocar en cada celda de una fila de la tabla, y en la celda
 * (*(two_dim_char_array_pt_pt[i]))[0][COLUMN_W-1] deber\'an contener un  char '1' si se debe
 * imprimir una l\'inea horizontal, y un '0' si no se debe imprimir. Esto se utiliza en el
 * ciclo for que est\'a al final de esta funci\'on (de la funci\'on print_like_table()).
 */
void print_like_table(short rows,struct ConjDInts cdi,char (**two_dim_char_array_pt_pt)[][COLUMN_W])
{
 //short rows=3,cols=6,
 short i;
 char HdG[rows][SHRT_MAX];

// char FILA_0[][COLUMN_W] = {"","LUNES","MARTES","MIERCOLES","JUEVES","VIERNES"};
// char FILA_1[][COLUMN_W] = {"14:30-16:00","","SOTR 3MM11 (C8)","SOTR 3MM11 (C7)",
//                            "INTROPROG 1MV3 (C1)","SOTR 3MM11 (C7)"};
// char FILA_2[][COLUMN_W] = {"16:00-17:30","INTROPROG 1MV3 (C4)","","INTROPROG 1MV3 (C4)",
//                             "PROGAVAN 1MV4 (C3)","PROGAVAN 1MV4 (C4)"};
// for (i=0;i<cdi.canDElems;i++) {
//   strcpy(FILA_0[i],(*(two_dim_char_array_pt_pt[0]))[i]);
// }
// for (i=0;i<cdi.canDElems;i++) {
//   strcpy(FILA_1[i],(*(two_dim_char_array_pt_pt[1]))[i]);
// }
// for (i=0;i<cdi.canDElems;i++) {
//   strcpy(FILA_2[i],(*(two_dim_char_array_pt_pt[2]))[i]);
// }
 char formato[SHRT_MAX];
 char h_rule[SHRT_MAX];
/**
// struct ConjDInts cdi = {cols,(short*)malloc(cols*sizeof(short))};
// cdi.Elem[0]=-11;cdi.Elem[1]=cdi.Elem[3]=cdi.Elem[4]=-19;cdi.Elem[2]=-16;cdi.Elem[5]=-19;
*/
 create_h_rule(h_rule,cdi);

 set_formato(formato,cdi);
 switch(cdi.canDElems){
 case 1:
/**
//        {sprintf(HdG[0],formato,FILA_0[0]);
//         sprintf(HdG[1],formato,FILA_1[0]);
//         sprintf(HdG[2],formato,FILA_2[0]);
//         break;}
*/
         {
          for (i=0;i<rows;i++) {
            sprintf(HdG[i],formato,
                    (*(two_dim_char_array_pt_pt[i]))[0]);
            HdG[i][SHRT_MAX-1] = (*(two_dim_char_array_pt_pt[i]))[0][COLUMN_W-1];
          }
          break;}
 case 2:
/**
//     {sprintf(HdG[0],formato,FILA_0[0],FILA_0[1]);
//         sprintf(HdG[1],formato,FILA_1[0],FILA_1[1]);
//         sprintf(HdG[2],formato,FILA_2[0],FILA_2[1]);
//         break;}
*/
        {
         for (i=0;i<rows;i++) {
           sprintf(HdG[i],formato,
                   (*(two_dim_char_array_pt_pt[i]))[0],
                   (*(two_dim_char_array_pt_pt[i]))[1]);
           HdG[i][SHRT_MAX-1] = (*(two_dim_char_array_pt_pt[i]))[0][COLUMN_W-1];
         }
         break;}
 case 3:
        {
         for (i=0;i<rows;i++) {
           sprintf(HdG[i],formato,
                   (*(two_dim_char_array_pt_pt[i]))[0],
                   (*(two_dim_char_array_pt_pt[i]))[1],
                   (*(two_dim_char_array_pt_pt[i]))[2]);
           HdG[i][SHRT_MAX-1] = (*(two_dim_char_array_pt_pt[i]))[0][COLUMN_W-1];
         }
         break;}
 case 4:
        {
         for (i=0;i<rows;i++) {
           sprintf(HdG[i],formato,
                   (*(two_dim_char_array_pt_pt[i]))[0],
                   (*(two_dim_char_array_pt_pt[i]))[1],
                   (*(two_dim_char_array_pt_pt[i]))[2],
                   (*(two_dim_char_array_pt_pt[i]))[3]);
           HdG[i][SHRT_MAX-1] = (*(two_dim_char_array_pt_pt[i]))[0][COLUMN_W-1];
         }
         break;}
 case 5:
        {
         for (i=0;i<rows;i++) {
           sprintf(HdG[i],formato,
                   (*(two_dim_char_array_pt_pt[i]))[0],
                   (*(two_dim_char_array_pt_pt[i]))[1],
                   (*(two_dim_char_array_pt_pt[i]))[2],
                   (*(two_dim_char_array_pt_pt[i]))[3],
                   (*(two_dim_char_array_pt_pt[i]))[4]);
           HdG[i][SHRT_MAX-1] = (*(two_dim_char_array_pt_pt[i]))[0][COLUMN_W-1];
         }
         break;}
 case 6:
/**
//        {sprintf(HdG[0],formato,FILA_0[0],FILA_0[1],FILA_0[2],FILA_0[3],FILA_0[4],FILA_0[5]);
//         sprintf(HdG[1],formato,FILA_1[0],FILA_1[1],FILA_1[2],FILA_1[3],FILA_1[4],FILA_1[5]);
//         sprintf(HdG[2],formato,FILA_2[0],FILA_2[1],FILA_2[2],FILA_2[3],FILA_2[4],FILA_2[5]);
//         break;}
*/
        {
         for (i=0;i<rows;i++) {
           sprintf(HdG[i],formato,
                   (*(two_dim_char_array_pt_pt[i]))[0],
                   (*(two_dim_char_array_pt_pt[i]))[1],
                   (*(two_dim_char_array_pt_pt[i]))[2],
                   (*(two_dim_char_array_pt_pt[i]))[3],
                   (*(two_dim_char_array_pt_pt[i]))[4],
                   (*(two_dim_char_array_pt_pt[i]))[5]);
           HdG[i][SHRT_MAX-1] = (*(two_dim_char_array_pt_pt[i]))[0][COLUMN_W-1];
         }
         break;}
         case 7:
        {
         for (i=0;i<rows;i++) {
           sprintf(HdG[i],formato,
                   (*(two_dim_char_array_pt_pt[i]))[0],
                   (*(two_dim_char_array_pt_pt[i]))[1],
                   (*(two_dim_char_array_pt_pt[i]))[2],
                   (*(two_dim_char_array_pt_pt[i]))[3],
                   (*(two_dim_char_array_pt_pt[i]))[4],
                   (*(two_dim_char_array_pt_pt[i]))[5],
                   (*(two_dim_char_array_pt_pt[i]))[6]);
           HdG[i][SHRT_MAX-1] = (*(two_dim_char_array_pt_pt[i]))[0][COLUMN_W-1];
         }
         break;}
 //...
 default:{break;}
 }/*end switch()*/
 printf("%s",h_rule);
 for(i=0;i<3;i++){
   printf("%s",HdG[i]);
   if (HdG[i][SHRT_MAX-1]=='1'){
     printf("%s",h_rule);
   }
 }
}/*end print_like_table()*/

void create_h_rule(char h_rule[SHRT_MAX],struct ConjDInts cdi)
{
 short i,j,k;
 h_rule[0] = '+';
 j = k = 1;
 for (i = 0;i < cdi.canDElems;i++){
   for (j = 0;j < abs(cdi.Elem[i]);j++){
     h_rule[k++] = '-';
   }
   h_rule[k++] = '+';
 }
 h_rule[k++] = '\n';
 h_rule[k] = '\0';
}

/**Stub
 */
void tabla(short rows,short cols,two_dim_char_array_pt_t t_c[])
{
 short i,j,k;
 /**Stub*/
 char (**c_a_pt_pt)[][COLUMN_W] = t_c;
 for (i=0;i<rows;i++) {
   (*(c_a_pt_pt[i]))[0][COLUMN_W-1] = '1';/*?ES ESTO UNA POLITICA?*/
 }
 struct ConjDInts cdi;
 cdi.canDElems = cols;
 cdi.Elem = malloc(cols*sizeof(short));
 for (j=0;j<cols;j++) {
#if 0//LMC 2022.06.07
   if (j==0) {
     cdi.Elem[j] = -16;
   } else {
     cdi.Elem[j] = -strlen((*(c_a_pt_pt[2]))[j]);
   }
#else
   k = row_of_max_lenght_for_column(j,rows,c_a_pt_pt);
   cdi.Elem[j] = -strlen((*(c_a_pt_pt[k]))[j]);/*ESTO ES UN MECANISMO*/
#endif // 0
 }
#ifndef NDEBUG
 printf("%s|%s|%s\n",(*(c_a_pt_pt[0]))[0],(*(c_a_pt_pt[0]))[1],(*(c_a_pt_pt[0]))[2]);
#endif // NDEBUG
 print_like_table(rows,cdi,c_a_pt_pt);
}

short row_of_max_lenght_for_column(short J,short rows,char (**c_a_pt_pt)[][COLUMN_W])
{
 short result = 0,i;
 for (i=0;i<rows;i++) {
   if (strlen((*(c_a_pt_pt[i]))[J]) > strlen((*(c_a_pt_pt[result]))[J])) {
     result = i;
   }
 }
 return result;
}
