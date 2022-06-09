#include <stdio.h>

#ifdef CONFIG_EJEMPLO___V
int main(void)
{
 int dec = 20, oct = 020, hex = 0x20;

 printf("dec=%d, oct=%d, hex=%d\n",dec,oct,hex);
 printf("dec=%d, oct=%o, hex=%x\n",dec,oct,hex);

 return 0;
}
#endif
