#include <stdio.h>

#ifdef CONFIG_EJEMPLO__IX
int main(void)
{
 short a= 256,b=10;

 printf("Type a number: ");
 scanf("%c",&a); // scanf("%hi",&a) (leer un short int)
    //o bien scanf("%c",&c), donde c es de tipo char.(leer un chr)

 printf("a = %hi, b = %f\n",a,*((float *)(&b)));

 return 0;
}
#endif
