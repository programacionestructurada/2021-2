#include <stdio.h>
#include <stdlib.h>
#define LENGTH(A)   (sizeof(A)/sizeof(A[0]))
int arr[] = {2,4,6,8,10};
#define SIZE_OF_ARRAY_ARR   LENGTH(arr)
/**prototipo de una funci\'on que devuelve un apuntador
   a arreglo de SIZE_OF_ARRAY_ARR enteros*/
int (*array_pt_funcion(int value))[SIZE_OF_ARRAY_ARR];

int main()
{
 size_t i;
 /**arreglo de SIZEOF_ARRAY_ARR apuntadores a entero*/
 //int *arr_pt[SIZE_OF_ARRAY_ARR];
 /**apuntador a arreglo de SIZE_OF_ARRAY_ARR enteros*/
 int (*arr_pt)[SIZE_OF_ARRAY_ARR];
 int (*arr_pt1)[SIZE_OF_ARRAY_ARR];
 printf("\n\n\nUSANDO EL ARREGLO arr\n");
 for(i=0;i<LENGTH(arr);i++){
   printf("%5i",arr[i]);
 }
 printf("\n");
 arr_pt = &arr;
 printf("\n\n\nUSANDO EL APUNTADOR arr_pt\n");
 for(i=0;i<LENGTH(arr);i++){
   printf("%5i",(*arr_pt)[i]);
 }
 printf("\n");
 arr_pt1 = array_pt_funcion(100);
  printf("\n\n\nUSANDO EL APUNTADOR arr_pt1\n");
 for(i=0;i<LENGTH(arr);i++){
   printf("%5i",(*arr_pt1)[i]);
 }
 printf("\n");

 return 0;
}/*end main()*/

int (*array_pt_funcion(int value))[SIZE_OF_ARRAY_ARR]
{
 size_t i;
 static int fn_arr[SIZE_OF_ARRAY_ARR];// = {NULL};
 int (*result)[SIZE_OF_ARRAY_ARR];
 result = &fn_arr;
 for(i=0;i<SIZE_OF_ARRAY_ARR;i++){
    fn_arr[i] = arr[i];
 }
 return result;
}

