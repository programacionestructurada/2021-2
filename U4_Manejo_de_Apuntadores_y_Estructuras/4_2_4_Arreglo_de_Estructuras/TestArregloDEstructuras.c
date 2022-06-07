#include <stdio.h>
#include <stdlib.h>
#define NDEBUG
#include <assert.h>
//#define COLUMN_W    128
#include "IntroProgUnidad02_util.h"
typedef char (*two_dim_char_array_pt_t)[][COLUMN_W];
struct mtabla {
 short rows;
 short cols;
 char (**table_content)[][COLUMN_W];
 void (*print_table)(struct mtabla *);
};
void show_table(struct mtabla *);

int main(int argc,char *argv[])
{
 short i;
 printf("%s\n",__FILE__);
/***********************************************/
 char fila_0[][COLUMN_W] = {
  "Task number","Description","Deadline"
 };
 char fila_1[][COLUMN_W] = {
  "1","Kconfig file","June 7, 2022"
 };
 two_dim_char_array_pt_t tarea[] = {
  &fila_0,&fila_1
 };
#ifndef NDEBUG
 char (**two_dim_char_array_pt_pt)[][COLUMN_W] = tarea;
#endif // NDEBUG
 struct mtabla my_tabla;
 my_tabla.table_content = tarea;
// char A[];/**Arreglo de char*/
// char *B[];/**Arreglo de apuntadores a char*/
// char (*C)[];/**Apuntador a arreglo de char*/
 my_tabla.rows = 2;my_tabla.cols = 3;
 my_tabla.print_table = &show_table;
 printf("\n");my_tabla.print_table(&my_tabla);
/***********************************************/
 char FRASE_0[][COLUMN_W] = {"Sapere aude"};
 char FRASE_1[][COLUMN_W] = {"Alea jacta est"};
 char FRASE_2[][COLUMN_W] = {"Nil novi sub sole"};
 two_dim_char_array_pt_t FRASE[] = {
  &FRASE_0,&FRASE_1,&FRASE_2
 };
 struct mtabla my_tabla_1;
 my_tabla_1.table_content = FRASE;
 my_tabla_1.rows = 3;my_tabla_1.cols = 1;
 my_tabla_1.print_table = &show_table;
 printf("\n");my_tabla_1.print_table(&my_tabla_1);
/***********************************************/
 /*Ahora el arreglo de estructuras mtabla*/
 struct mtabla smtabla_arr[] = {my_tabla,my_tabla_1};
 for (i=0;i<LENGTH(smtabla_arr);i++) {
   printf("\n");smtabla_arr[i].print_table(&smtabla_arr[i]);
 }

 return 0;
}/*end main()*/

void show_table(struct mtabla *p)
{
 tabla(p->rows,p->cols,p->table_content);
}



