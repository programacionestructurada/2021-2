#include <stdio.h>
#include "00PracticaTestingKconfig_util.h"
#ifdef CONFIG_EJEMPLO_XIII
int main(int argc,char *argv[])
{
 short a = 0x6eb9;
 short b = 0x5d27;
 unsigned short c = 7097;

 print_ident_data(__FILE__,argv[0]);
 printf("\n0x%x, ", a & b);
 printf("0x%x, ", a | b);
 printf("0x%x\n", a ^ b);

 printf("%u, ", c << 2);
 printf("%u\n", c >> 1);

 return 0;
}
#endif
