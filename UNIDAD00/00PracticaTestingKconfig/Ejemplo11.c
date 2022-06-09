#include <stdio.h>

#ifdef CONFIG_EJEMPLO__XI
int main(void)
{
 int i = 5, j = 4;
 double f;

 f = (double)i / j;
#ifdef CONFIG_EJEMPLO__XI_PRINTF
 printf("f = (double)i / j = %f\n",f);
#endif // CONFIG_EJEMPLO__XI_PRINTF

 f = i / (double)j;
#ifdef CONFIG_EJEMPLO__XI_PRINTF
 printf("f = i / (double)j = %f\n",f);
#endif // CONFIG_EJEMPLO__XI_PRINTF

 f = (double)i / (double)j;
#ifdef CONFIG_EJEMPLO__XI_PRINTF
 printf("f = (double)i / (double)j = %f\n",f);
#endif // CONFIG_EJEMPLO__XI_PRINTF

 f = (double)(i / j);
#ifdef CONFIG_EJEMPLO__XI_PRINTF
 printf("f = (double)(i / j) = %f\n",f);
#endif // CONFIG_EJEMPLO__XI_PRINTF

 return 0;
}
#endif // CONFIG_EJEMPLO__XI
