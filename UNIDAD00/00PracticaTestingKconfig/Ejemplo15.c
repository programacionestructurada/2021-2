#include <stdio.h>
#include "00PracticaTestingKconfig_util.h"
#ifdef CONFIG_EJEMPLO___XV
int main(int argc,char *argv[])
{
 long big =  0;

 print_ident_data(__FILE__,argv[0]);
 printf("\"big\" is %u bytes\n", sizeof(big));
 printf("a short is %u bytes\n", sizeof(short));
 printf("a double is %u bytes\n", sizeof(double));

 return 0;
}
#endif // CONFIG_EJEMPLO___XV
