#include <stdio.h>
#include <stdlib.h>

int main()
{//Sofia Janice Morales Tinajero
 int x, a, y, b;
 int res;
 printf("ingrese el valor de a");
 scanf("%d", &a);
 printf("Ingrese los valores de b para la ecuacion");
	scanf("%d", &b);
	printf("Ingrese los valores de x para la ecuacion");
	scanf("%d", &x);
	printf("Ingrese los valores de y para la ecuacion");
	scanf("%d", &y);
 //Valeria Michelle Castellanos
 //int Res=(a+b)(a+b)(x+y);
 //int res=((x+y)^2(a-b));
 //int res=(a+b)*(a+b)*(x+y);//NO genera error, pero
 //no calcula lo que se pidio
  res = (x+y)*(x+y)*(a-b);
 printf("%d\n",res);

 return 0;
}
