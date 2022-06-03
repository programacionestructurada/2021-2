#include <stdio.h>
#include "IntroProgUnidad02_util.h"

int fib_w_goto(int n)
{
 int val = 1;
 int nval = 1;
 int nmi, t;

 if (val >= n)
   goto done;
 nmi = n - 1;

loop:
 t = val + nval;
 val = nval;
 nval = t;
 nmi--;
 if (nmi)
   goto loop;

done:
 return val;
}

#ifdef CONFIG_FIBONACCI_W_GOTO
int main(int argc,char *argv[])
{
 int N = 10, n = 1;
 int F;
 print_ident_data(__FILE__,argv[0]);
 printf("\nEjemplo de serie de Fibonacci (usando fib_w_goto())\n");
LABEL:
 F = fib_w_goto(n);
 printf("%3d",F);
 if(n++ < N)
   goto LABEL;

 return 0;
}
#endif

