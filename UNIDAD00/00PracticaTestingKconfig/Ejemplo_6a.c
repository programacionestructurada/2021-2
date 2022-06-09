#include <stdio.h>
#include "00PracticaTestingKconfig_util.h"
int sum; /* variable global, accesible desde cualquier parte */
         /* del progama*/
void suma(int x) /* Variable local declarada como parámetro, */
                 /* accesible solo por la función suma*/
{
   sum=sum+x;
   return;
}
void intercambio(int *a,int *b)
{
   if (*a>*b)
   {
      int inter; /* Variable local, accesible dolo dentro del */
                 /* bloque donde se declara*/
      inter=*a;
      *a=*b;
      *b=inter;
   }
   return;
}

#ifdef CONFIG_EJEMPLO__VI_A
int main(int argc,char *argv[]) /*Función principal del programa*/
{
   int contador,a=9,b=0; /*Variables locales, accesibles solo */
                         /* por main*/
   sum=0;
   intercambio(&a,&b);
   print_ident_data(__FILE__,argv[0]);
   for(contador=a;contador<=b;contador++) suma(contador);
   printf("%d\n",sum);
   return(0);
}
#endif // CONFIG_EJEMPLO__VI_A
