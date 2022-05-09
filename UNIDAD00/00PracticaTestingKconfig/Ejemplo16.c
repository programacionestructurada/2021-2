#include <stdio.h>
#include "00PracticaTestingKconfig_util.h"
#ifdef CONFIG_EJEMPLO__XVI
int main(int argc,char *argv[])
{
 int i = 0, j, k = 7, m = 5, n;

 j = m += 2;

 print_ident_data(__FILE__,argv[0]);
 printf("j = %d\n", j);

 j = k++ > 7;
 printf("j = %d\n", j);

 n = !i > k >> 2;
 printf("n = %d\n", n);

 return 0;
}
#endif
