/** TestFactorial.c */
#include "../include/funciones.h"

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
 *
 * long int (*F)(long int n), F es un apuntador a
 * funci\'on que devuelve un long int y recibe un long int.
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
 num = (*F)(n);          /** se calcula n! */
 den = (*F)(k)*(*F)(n-k);/** se calcula k! y (n-k)! */
#endif // 0
 result = num / den;
 return result;
}


