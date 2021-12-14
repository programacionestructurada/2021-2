/** 4_1_3_Direccionamiento.c
 *  4_1_3 Direccionamiento de un apuntador a arreglos unimensionales
 *  4_1_4 Direccionamiento de un apuntador a arreglos bidimensionales
 */
#include <stdio.h>

//int m_array[10];      /** arreglo unidimensional */
int arr[5];           /** arreglo unidimensional */
int ar_bid[2][2] = {{1,2},{3,4}};

int main(){
 //int *arr_dpt[10];  /** arreglo de apuntadores a int -- int*-- */
 int i = 0,j = 0;
 arr[0] = 15;arr[1] = 25;arr[2] = 35;arr[3] = 45;arr[4] = 55;
 int (*m)[5];      /** apuntador a arreglo unidimensional de int */
 m = &arr;
 printf("Apuntadores a arreglos unidimensionales y\n\
apuntadores a arreglos bidimensionales\n");
 printf("Los elementos del arreglo arr:\n");
 while(i < 5){
  printf("%4d",(*m)[i++]);
 }
 printf("\n\n/**************************************/\n");
 int (*arbid_p)[2][2];
 arbid_p = &ar_bid;
 printf("Los elementos del arreglo ar_bid:\n");
 i = 0;
 while(i < 2){
   for(j = 0;j < 2;j++){
     printf("%4d",(*arbid_p)[i][j]);
   }
   printf("\n");
   i++;
 }
 return 0;
}/*end main()*/

