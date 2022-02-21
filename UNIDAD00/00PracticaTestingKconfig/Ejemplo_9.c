#include <stdio.h>

#ifdef CONFIG_EJEMPLO__IX
int main(void)
{
 short a= 256,b=10;

 printf("Type a number: ");
 scanf("%c",&a);

 printf("a = %hi, b = %f\n",a,*((float *)(&b)));

 return 0;
}
#endif
