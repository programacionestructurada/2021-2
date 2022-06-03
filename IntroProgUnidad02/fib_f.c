#include <stdio.h>
#include "IntroProgUnidad02_util.h"

int fib_f(int n)
{
 int i;
 int val = 1;
 int nval = 1;

 for (i = 1; i < n; i++) {
   int t = val + nval;
   val = nval;
   nval = t;
 }

 return val;
}

#ifdef CONFIG_FIBONACCI_FOR
int main(int argc,char *argv[])
{
 int N = 10, n = 1;
 int F;
 print_ident_data(__FILE__,argv[0]);
 printf("\nEjemplo de serie de Fibonacci (usando fib_f())\n");
LABEL:
 F = fib_f(n);
 printf("%3d",F);
 if(n++ < N)
   goto LABEL;

 return 0;
}
#endif // CONFIG_FIBONACCI_FOR
