#include <stdio.h>
#include <limits.h>

#ifdef CONFIG_EJEMPLO_VII
int main(void)
{
 double f=5000000000.0;/**double precision constant because of '.'*/

#ifndef CONFIG_OBTENER_WARNING_POR_OVERFLOW_EN_INICIALIZACION_B
 double g=2*(9223372036854775807U);/**unsigned int or long long*/
#endif // CONFIG_OBTENER_WARNING_POR_OVERFLOW_EN_INICIALIZACION_B
#ifdef CONFIG_OBTENER_WARNING_POR_OVERFLOW_EN_INICIALIZACION
 unsigned long long ull=(unsigned long long)(LLONG_MAX+1);
#endif
#ifdef CONFIG_OBTENER_WARNING_POR_OVERFLOW_EN_INICIALIZACION_A
 unsigned long long ull=9223372036854775808;
#endif // CONFIG_OBTENER_WARNING_POR_OVERFLOW_EN_INICIALIZACION_A
#ifdef CONFIG_OBTENER_WARNING_POR_OVERFLOW_EN_INICIALIZACION_B
 double g=(unsigned long long)(LLONG_MAX+1);
#endif
 printf("\nLONG_MAX=%li\n",LONG_MAX);
 printf("\nULONG_MAX=%lu\n",ULONG_MAX);
 printf("\nLLONG_MAX=%I64lli\n",LLONG_MAX);
 printf("f=%lf\n",f);
 printf("g=%lf\n",g);
 printf("g=%f\n",g);
 printf("INT_MAX=%i\n",INT_MAX);
 float g1=5000000000;
 printf("g1=%lf\n",g1);
 return 0;
}
#endif
