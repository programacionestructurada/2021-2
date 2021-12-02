#include <stdio.h>
/**
 * Funci\'on que devuelve dos valores.
 */
void SumaProd(double *psuma,double *pprod,double dato1,double dato2)
{
 *psuma = dato1 + dato2;
 *pprod = dato1 * dato2;
}

int main()
{
 double sum,prod;
 SumaProd(&sum,&prod,3.0,2.0);
 printf("sum = %g, prod = %g\n",sum,prod);
 return 0;
}
