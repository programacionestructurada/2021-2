#include <stdio.h>
#include <stdlib.h>
#include "IntroProgUnidad02_util.h"
void show_table(struct mtabla *);

int main(int arc,char *arv[])
{
  short i;
#include "datos.c"
 struct mtabla my_tabla,my_tabla_1;
 /**Setting my_tabla*/
 two_dim_char_array_pt_t TwoDimCharArrayPt_array[] =
 {&encabezado,&T01,&T02,&T03,&T04,&T05,&T06};
 my_tabla.table_content = TwoDimCharArrayPt_array;
 my_tabla.rows = 7;my_tabla.cols = 6;
 my_tabla.print_table = &show_table;
 /**Setting my_tabla_1*/
 two_dim_char_array_pt_t FromDeclPatr_array[] =
 {&DP00,&DP01,&DP02,&DP03,&DP04,&DP05};
 my_tabla_1.table_content = FromDeclPatr_array;
 my_tabla_1.rows = 6;my_tabla_1.cols = 2;
 my_tabla_1.print_table = &show_table;
 /**Setting array smtabla_arr*/
 struct mtabla smtabla_arr[] = {my_tabla,my_tabla_1};

 printf("%s\n",__FILE__);
 printf("\nDe la constancia de perceciones y retenciones (empleo 1), y de la \
declaraci\\'on anual del ISR, tenemos:\n");
 for (i=0;i<LENGTH(smtabla_arr);i++) {
   printf("\n");smtabla_arr[i].print_table(&smtabla_arr[i]);
 }
 printf("\nRAN_1 = Cantidad_F - Cantidad_P\n");
 printf("RAN_2 = Cantidad_IAc - RAN_1\n");

 return 0;
}/*end main()*/

void show_table(struct mtabla *p)
{
 tabla(p->rows,p->cols,p->table_content);
}
