#include <stdio.h>
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
}/*end fib_f()*/

int main(){
 printf("\n/******************************2021.04.26**/\n");
 int a = 1;
inicio:
 printf("%5d",fib_f(a++));
 if (a <= 5)
   goto inicio;
 printf("\n/******************************************/\n");
 return 0;
}
