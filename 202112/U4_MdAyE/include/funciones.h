#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
/**
 * Funci\'on recursiva que calcula el facotrial
 * de un entero no negativo.
 */
long int Factorial(long int n);

/**
Combinaciones
Comb(n,k) = \frac{n!}{k!(n-k)!}
*/
long int Comb(long int n,long int k);

/**
 * Calcula el factorial con una funci\'on
 * Iterativa.
 */
long int FactorialIte(long int n);

/**
 * Combinaciones de n objetos tomando
 * k a la vez.
 * Combinaciones(n,k) = \frac{n!}{k!(n-k)!}
 */
#if 0
long int Combinaciones(long int (*F)(long int n),long int n,long int n);
#else
long int Combinaciones(long int (*)(long int),long int,long int);
#endif
/**
 * Funci\'on que devuelve dos valores.
 */
void SumaProd(double *psuma,double *pprod,double dato1,double dato2);
#endif // FUNCIONES_H_INCLUDED
