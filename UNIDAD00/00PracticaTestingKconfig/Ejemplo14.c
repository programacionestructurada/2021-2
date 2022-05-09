#include <stdio.h>
#include "00PracticaTestingKconfig_util.h"
#ifdef CONFIG_EJEMPLO__XIV
int main(int argc,char *argv[])
{
 int i =  0;

 print_ident_data(__FILE__,argv[0]);
 if (i = 0)
   printf("i is equal to zero\n");
 else
   printf("somehow i is not zero\n");
 return 0;
}
#endif
