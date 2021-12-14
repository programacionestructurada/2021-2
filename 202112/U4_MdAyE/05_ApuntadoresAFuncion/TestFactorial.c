/** TestFactorial.c */
#include "../include/funciones.h"
/**
Combinaciones
Comb(n,k) = \frac{n!}{k!(n-k)!}
*/

int main(){
 long int N,K,C;
 N = 3;
 K = 2;
 C = Comb(N,K);
// printf("Programa que calcula combinaciones\n
//(La funci\\'on Comb() llama a Factorial)\n");
 printf("La funci\\'on Combinaciones() recibe como argumento \n");
 printf("un apuntador a funci\\'on\n");
 printf("(Funci\\'on Combinaciones )est\\'a resuelta en el archivo ");
 printf("Combinaciones.c\n");
 printf("Comb(%li,%li) = %li\n",N,K,C);
#if 0 // <----Estas dos variantes son equivalentes
 /** Calculando combinaciones usando la funci\'on FactorialIte() */
 C = Combinaciones(FactorialIte,N,K);
 printf("Combinaciones(%s,%li,%li) = %li\n","FactorialIte",N,K,C);
 C = Combinaciones(Factorial,N,K);
 printf("Combinaciones(%s,%li,%li) = %li\n","Factorial",N,K,C);
#else // <----Estas dos variantes son equivalentes
 /** Calculando combinaciones usando la funci\'on FactorialIte() */
 C = Combinaciones(&FactorialIte,N,K);
 printf("Combinaciones(%s,%li,%li) = %li\n","FactorialIte",N,K,C);
 C = Combinaciones(&Factorial,N,K);
 printf("Combinaciones(%s,%li,%li) = %li\n","Factorial",N,K,C);
#endif
 return 0;
}/*end main()*/

