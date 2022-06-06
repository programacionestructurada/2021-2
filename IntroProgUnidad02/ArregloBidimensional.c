#include <stdio.h>
#include <string.h>
//#include "PO_DiaNumDLab.h"
#include "IntroProgUnidad02_util.h"

#ifdef CONFIG_ARREGLOS_BIDIMENSIONALES
char HdG[3][100] = {{' '}}; /** Horario de Grupo */
void set_formato_i(char formato_i[],short,short,short,short,short,short);

int main(int argc,char *argv[])
{
 char formato_d[100],formato_i[100];
 sprintf(formato_d,"|%c%i%c|%c%i%c|%c%i%c|%c%i%c|%c%i%c|%c%i%c|\n",
         '%',11,'s','%',16,'s','%',16,'s','%',16,'s','%',16,'s','%',16,'s');
// sprintf(formato_i,"|%c%i%c|%c%i%c|%c%i%c|%c%i%c|%c%i%c|%c%i%c|\n",
//         '%',11,'s','%',-16,'s','%',-16,'s','%',-16,'s','%',-16,'s','%',-16,'s');
#if 0/**LMC 2022.05.31*/
 set_formato_i(formato_i,11,-16,-16,-16,-16,-16);
#else
 struct ConjDInts cdi = {6,(short*)malloc(6*sizeof(short))};
 cdi.Elem[0]=11;cdi.Elem[1]=cdi.Elem[2]=cdi.Elem[3]=cdi.Elem[4]=cdi.Elem[5]=-16;
 set_formato(formato_i,cdi);
#endif // 0
#ifdef CONFIG_JUSTIFICADO_A_LA_DERECHA
 //sprintf(HdG[0],"|%11s|%16s|%16s|%16s|%16s|%16s|\n",
 sprintf(HdG[0],formato_d,
#endif // CONFIG_JUSTIFICADO_A_LA_DERECHA
#ifdef CONFIG_JUSTIFICADO_A_LA_IZQUIERDA
 //sprintf(HdG[0],"|%11s|%-16s|%-16s|%-16s|%-16s|%-16s|\n",
 sprintf(HdG[0],formato_i,
#endif // CONFIG_JUSTIFICADO_A_LA_IZQUIERDA
         " ","LUNES","MARTES","MIERCOLES","JUEVES","VIERNES");
 sprintf(HdG[1],"|%11s|%16s|%16s|%16s|%16s|%16s|\n",
         " "," "," "," "," "," ");
 sprintf(HdG[2],"|%11s|%16s|%16s|%16s|%16s|%16s|\n",
         " "," "," "," "," "," ");
/**SALIDA*/
 printf("\n\n\n");
 #ifdef CONFIG_INCLUDE_HRULE
 print_hrule();printf("\n");
 #endif // INCLUDE_HRULE
 printf("%s",HdG[0]);
 #ifdef CONFIG_INCLUDE_HRULE
 print_hrule();printf("\n");
 #endif // INCLUDE_HRULE
 printf("%s",HdG[1]);
 #ifdef CONFIG_INCLUDE_HRULE
 print_hrule();printf("\n");
 #endif // INCLUDE_HRULE
 printf("%s",HdG[2]);
 #ifdef CONFIG_INCLUDE_HRULE
 print_hrule();printf("\n");
 #endif // INCLUDE_HRULE
 char (**two_dim_char_array_pt_pt)[][COLUMN_W];
 char FILA_0[][COLUMN_W] = {"DIA:","LUNES","MARTES","MIERCOLES","JUEVES","VIERNES"};
 FILA_0[0][COLUMN_W-1]='1';
 char FILA_1[][COLUMN_W] = {"14:30-16:00","","SOTR 3MM11 (C8)","SOTR 3MM11 (C7)",
                            "INTROPROG 1MV3 (C1)","SOTR 3MM11 (C7)"};
 FILA_1[0][COLUMN_W-1]='0';
 char FILA_2[][COLUMN_W] = {"16:00-17:30","INTROPROG 1MV3 (C4)","","INTROPROG 1MV3 (C4)",
                             "PROGAVAN 1MV4 (C3)","PROGAVAN 1MV4 (C4)"};
 FILA_2[0][COLUMN_W-1]='1';
 two_dim_char_array_pt_pt = malloc(3*sizeof(&FILA_0));
 two_dim_char_array_pt_pt[0] = &FILA_0;
 two_dim_char_array_pt_pt[1] = &FILA_1;
 two_dim_char_array_pt_pt[2] = &FILA_2;
 cdi.canDElems = 6;
 cdi.Elem[0]=-11;cdi.Elem[1]=cdi.Elem[3]=cdi.Elem[4]=-19;cdi.Elem[2]=-16;cdi.Elem[5]=-19;
 printf("\n");print_like_table(3,cdi,two_dim_char_array_pt_pt);
/**********************************************************************************/
 char (**listado_alumno)[][COLUMN_W];
 char ALUM_0[][COLUMN_W] = {"1","Nombre del Alumno(a) 1"};ALUM_0[0][COLUMN_W-1]='0';
 char ALUM_1[][COLUMN_W] = {"2","Nombre del Alumno(a) 2"};ALUM_1[0][COLUMN_W-1]='1';
 char ALUM_2[][COLUMN_W] = {"3","Nombre del Alumno(a) 3"};ALUM_2[0][COLUMN_W-1]='1';
 listado_alumno = malloc(3*sizeof(&ALUM_0));
 listado_alumno[0] = &ALUM_0;
 listado_alumno[1] = &ALUM_1;
 listado_alumno[2] = &ALUM_2;
 cdi.canDElems = 2;  /** cantidad de columnas de la tabla */
 cdi.Elem[0]=5;cdi.Elem[1]=-24;/**justificado de cada columna,
                                  un valor negativo: alineado a la izquierda,
                                  un valor positivo: alineado a la derecha; y en cada
                                  caso el valor absoluto del n\'umero indica el ancho
                                  de la columna */
 printf("\n");print_like_table(3,cdi,listado_alumno);
/***********************************************************************************/
 char (**frases)[][COLUMN_W];
 char FRASE_0[][COLUMN_W] = {"Sapere aude"};FRASE_0[0][COLUMN_W-1]='1';
 char FRASE_1[][COLUMN_W] = {"Alea jacta est"};FRASE_1[0][COLUMN_W-1]='1';
 char FRASE_2[][COLUMN_W] = {"Nil novi sub sole"};FRASE_2[0][COLUMN_W-1]='1';
 frases = malloc(3*sizeof(&FRASE_0));
 frases[0]=&FRASE_0;frases[1]=&FRASE_1;frases[2]=&FRASE_2;
 cdi.canDElems = 1;cdi.Elem[0] = -strlen(FRASE_2[0]);
 printf("\n");print_like_table(3,cdi,frases);
/***********************************************************************************/
 char encabezado[][COLUMN_W] = {"Task Number","Description","Date"};
 char T01[][COLUMN_W] = {"1","Pagar factura Telmex.","Junio 1, 2022. Deadline: Junio 11, 2022."};
 two_dim_char_array_pt_t arr[] = {&encabezado,&T01};
 printf("\n");tabla(2,3,arr);
/***********************************************************************************/
 return 0;
}/*end main()*/
#endif //CONFIG_ARREGLOS_BIDIMENSIONALES
