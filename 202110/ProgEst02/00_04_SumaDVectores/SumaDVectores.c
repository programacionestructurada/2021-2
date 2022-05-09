#include <stdio.h>
#include <stdlib.h>
#define TAM 100
#define USE_ARRAYS
//#define SIZE_ARR(arr)   (sizeof(arr)/sizeof(arr[0]))
#include "../include/ProgEst02_util.h"

void print_array(float A[],unsigned int tam){
 int i;
 for(i=1;i<=tam;i++){
  printf("%4.2f\t",A[i]);
 }
}

int main(){
 int I,N;                // Jueves 31 de marzo de 2022.
#ifdef CONFIG_USE_ARRAYS //Este proyecto aun no est\'a usando kconfig
 float A[TAM],B[TAM],C[TAM];
#else
 float *A,*B,*C;
#endif // 1
 printf("PROGRAMA QUE REALIZA UNA SUMA DE VECTORES\n");
 printf("Introduce el valor de N (dimensi\\'on de vectores): ");
 scanf("%d",&N);

#ifdef USE_ARRAYS
 /** ENTRADA */
 for (I=1;!(I>N);I++) {
   printf("A[%i] = ",I);
   scanf("%f",&A[I]);
   printf("B[%i] = ",I);
   scanf("%f",&B[I]);
 }
 #if 1
 printf("\n");
 print_array(A,N);
 printf("\n");
 print_array(B,N);
 #endif
  /** PROCESO */
  for (I=1;!(I>N);I++) {
    C[I]=A[I]+B[I];
  }
  /** SALIDA */
  printf("\n");
  for (I=1;!(I>N);I++) {
    printf("%6.2f\t",C[I]);
  }
#else
 A=(float *)malloc((N+1)*sizeof(float));
 B=(float *)malloc((N+1)*sizeof(float));
 C=(float *)malloc((N+1)*sizeof(float));
 /** ENTRADA */
 for (I=1;!(I>N);I++) {
   printf("A[%i] = ",I);
   scanf("%f",&A[I]);
   printf("B[%i] = ",I);
   scanf("%f",&B[I]);
 }
 #if 1
 printf("\n");
 print_array(A,N);
 printf("\n");
 print_array(B,N);
 #endif
  /** PROCESO */
  for (I=1;!(I>N);I++) {
    C[I]=A[I]+B[I];
  }
  /** SALIDA */
  printf("\n");
  for (I=1;!(I>N);I++) {
   #if 0
    printf("%6.2f\t",C[I]);
   #else
    printf("%6.2f\t",*(C+I));
   #endif // 0
  }
  free(A);
  free(B);
  free(C);
#endif // CONFIG_USE_ARRAYS


 return 0;
}/*end main()*/

