#include <stdio.h>
#include <stdint.h>  /* uint8_t */
/** Obtiene la cantidad de elementos de un arreglo
 *  unidimensional.
 */
#define SIZE_ARR(Array) ((sizeof(Array))/(sizeof(Array[0])))

int ga[] = {2021,11};
void print_array(int A[],unsigned int tam){
 int i;
 for(i=0;i<tam;i++){
  printf("%5d",A[i]);
 }
}

/**
 Ordena de menor a mayor los elementos de
 un arreglo de tamanio mayor o igual a 2.
 @param tam debe ser mayor o igual que 2.
 @param D: si D es 0, ordena de menor a mayor,
           si D no es 0, ordena de mayor a menor.
*/
void burbuja(int A[],unsigned int tam,uint8_t D)
{
 int i,k;
 //int i;
 int tmp;
 uint8_t centinela=0;
#if 0 //Error de l\'ogica
 for (k=2;k<=tam-1;k++) {
#else
 for (k=2;k<=tam;k++) {
#endif
 //2, 3, 4, 5, 6, 7
 //i<=tam-2,i<=tam-3,...,tam<=1
#if 1 //tam debe ser mayor o igual a 2
        /** i<=tam-(2) ... i<=1 =tam-(tam-1) */
   //for(i=0;(unsigned int)i<=tam-2;i++){
   for(i=0;(unsigned int)i<=tam-k;i++) {
#else
   for(i=0;i<=(int)(tam-2);i++){
#endif
     ////(intercambiar los contenidos de A[0] y A[1])
     //tmp=A[0];A[0]=A[1];A[1]=tmp;
     //(intercambiar los contenidos de A[1] y A[2])
     //tmp=A[1];A[1]=A[2];A[2]=tmp;
   #if 0
     printf("i=%3i, i+1=%3i\n",i,i+1);
 /** print_array(A,((sizeof(A))/(sizeof(A[0])))); <--ERROR */
     print_array(A,tam);printf("\n");
   #endif // 1
   if (D == 0){/** ordenando de menor a mayor */
     if (A[i] > A[i+1]){
      //(intercambiar los contenidos de A[i] y A[i+1])
      //tmp=A[i];A[i]=A[i+1];A[i+1]=tmp;
      centinela = 1;
     }
   }else{/** ordenando de mayor a menor */
     if (A[i] < A[i+1]){
      //(intercambiar los contenidos de A[i] y A[i+1])
      //tmp=A[i];A[i]=A[i+1];A[i+1]=tmp;
      centinela = 1;
     }
   }
    if(centinela == 1){
       tmp=A[i];A[i]=A[i+1];A[i+1]=tmp;centinela=0;
    }
   }//printf("\n");
 }
}/*end burbuja()*/

int main(){
 //int arr[] = {2,0,2,1,1,1,0,3};
 //int arr[] = {0,3,1,1,2,0,2,1};
 int arr[] = {16,14,23,12,10,8,6,4,2};
 printf("\n\n\n\n\n\n");
 print_array(arr,SIZE_ARR(arr));printf("\n");
 burbuja(arr,SIZE_ARR(arr),0);printf("\n");
 print_array(arr,SIZE_ARR(arr));printf("\n");
 //burbuja(arr,sizeof(arr)/sizeof(arr[0]));printf("\n");
 //print_array(arr,sizeof(arr)/sizeof(arr[0]));
 print_array(ga,SIZE_ARR(ga));printf("\n");
 burbuja(ga,SIZE_ARR(ga),0);printf("\n");
 print_array(ga,SIZE_ARR(ga));printf("\n");

 print_array(arr,SIZE_ARR(arr));printf("\n");
 burbuja(arr,SIZE_ARR(arr),1);printf("\n");
 print_array(arr,SIZE_ARR(arr));printf("\n");
 return 0;
}
