/** Ejemplo_7.c */
#include <stdio.h>
#include <limits.h>

int main(){
 double f = 5000000000.0; /** double precision constant
                              because of "."  */
 //unsigned long long ull = (unsigned long long)(LLONG_MAX+1);
 //unsigned long long ull = 9223372036854775808U;
 //double g = (unsigned long long)(LLONG_MAX+1);
 ///** constant is integer or long long
 ///**                depending on the macro LLONG_MAX */
 double g = 2*(9223372036854775807U);
 printf("\nLONG_MAX=%li\n",LONG_MAX);
 printf("\nULONG_MAX=%lu\n",ULONG_MAX);
 printf("\nLLONG_MAX=%I64i\n",LLONG_MAX);
 printf("f=%lf\n",f);
 printf("g=%lf\n",g);
 printf("%i\n",INT_MAX);
 float g1 = 5000000000;
 printf("g1=%lf\n",g1);

 return 0;
}/*end main()*/
