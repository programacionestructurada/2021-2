#include <stdio.h>
#include <float.h>

#ifdef CONFIG_EJEMPLO__VI
int main(void)
{
 double f = 3.1416, g = 1.2e-5, h = 5000000000.0;

 printf("f=%lf\tg=%lf\th=%lf\n", f, g, h);
 printf("f=%le\tg=%le\th=%le\n", f, g, h);
 printf("f=%lg\tg=%lg\th=%lg\n", f, g, h);

 printf("f=%7.2lf\tg=%.2le\th=%.4lg\n", f, g, h);
 return 0;
}
#endif
