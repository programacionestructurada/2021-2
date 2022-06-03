#include <stdio.h>
#include "IntroProgUnidad02_util.h"

int fib_dw(int n)
{
 int i = 0;
 int val = 0;
 int nval = 1;

 do {
    int t = val + nval;// t=1    |t=1     + t=2     |t=1
    val = nval;        // val=1  |val=1   + val=1   |val=1
    nval = t;          // nval=1 |nval=1  + nval=2  |nval=1
    i++;               // i=1    |i=1     + i=2     |i=1
 } while (i < n);     //1<1<false|1<2=true+2<2=false|1<3

 return val;
}
#ifdef CONFIG_FIBONACCI_DO_WHILE
int main(int argc,char *argv[])
{
 int N = 10, n = 1;
 int F;
 print_ident_data(__FILE__,argv[0]);
 printf("\nEjemplo de serie de Fibonacci (usando fib_dw())\n");
LABEL:
 F = fib_dw(n);   //F=1       |n=2,F=1|n=3
 printf("%3d",F); //__1,       1
 if(n++ < N)      //1<10=true,2<10=true
   goto LABEL;

 return 0;
}
#endif
