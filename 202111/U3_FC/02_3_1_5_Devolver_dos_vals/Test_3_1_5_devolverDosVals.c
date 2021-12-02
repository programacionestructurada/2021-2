/** Test_3_1_5_devolverDosVals.c
 * Usa un procedimiento para retornar dos valores
 * pasando los primeros dos argumentos por referencia.
 */
#include "funciones.h"

int main()
{
 double sum;
 double prod;
//void SumaProd(double *psuma,double *pprod,double dato1,double dato2);
 SumaProd(&sum,&prod,2.0,3.0);
 printf("2.0 + 3.0 = %g\n2.0 * 3.0 = %g\n",sum,prod);

 return 0;
}/*end main()*/


