/** TestFactorial.c */
#include "funciones.h"

/**
 * Combinaciones de n objetos tomando
 * k a la vez.
 * Comb(n,k) = \frac{n!}{k!(n-k)!}
 */
long int Comb(long int n,long int k)
{
 long int result;
 long int num,den;
 num = Factorial(n);
 den = Factorial(k)*Factorial(n-k);
 result = num / den;
 return result;
}

/**
 * Combinaciones de n objetos tomando
 * k a la vez.
 * Combinaciones(n,k) = \frac{n!}{k!(n-k)!}
 */
long int Combinaciones(long int (*F)(long int n),long int n,long int k)
{
 long int result;
 long int num,den;
 /** Las dos variantes siguientes son equivalentes */
#if 0
 num = F(n);
 den = F(k)*F(n-k);
#else
 num = (*F)(n);
 den = (*F)(k)*(*F)(n-k);
#endif // 0
 result = num / den;
 return result;
}


