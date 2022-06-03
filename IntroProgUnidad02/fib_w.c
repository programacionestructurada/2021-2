#include <stdio.h>
#include "IntroProgUnidad02_util.h"

int fib_w(int n)
{
 int i = 1;
 int val = 1;
 int nval = 1;

 while (i < n) {
   int t = val + nval;
   val = nval;
   nval = t;
   i++;
 }

 return val;
}

#ifdef CONFIG_FIBONACCI_WHILE
int main(int argc,char *argv[])
{
 int N = 10, n = 1;
 int F;
 print_ident_data(__FILE__,argv[0]);
 printf("\nEjemplo de serie de Fibonacci (usando fib_w())\n");
LABEL:
 F = fib_w(n);
 printf("%3d",F);
 if(n++ < N)
   goto LABEL;

 return 0;
}
#endif
