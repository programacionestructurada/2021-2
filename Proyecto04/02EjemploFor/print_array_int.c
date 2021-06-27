/**
 * Otro ejemplo de uso de un ciclo for.
 * La funcion print_array_int() imprime
 * los elementos de un arreglo de enteros.
 */
 /**
  * pre: @param N debe ser menor o igual al
  *      tama\~no del arreglo arr.
  */
#include <stdio.h>
#define SIZE_ARR(A) (sizeof(A)/sizeof(A[0]))
void print_array_int(int arr[],int N)
{
 int i;
 for (i = 0; i < N; i++){
   printf("%d ",arr[i]);
 }
}
int main(){
 int arr[5];
 arr[0]=2;arr[1]=4;arr[2]=6;arr[3]=8;arr[4]=10;
 printf("\n/******************************2021.04.26**/\n");
 print_array_int(arr,(int)SIZE_ARR(arr));
 printf("\n/******************************************/\n");
 return 0;
}
