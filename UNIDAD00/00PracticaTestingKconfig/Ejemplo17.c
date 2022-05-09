#include <stdio.h>
#include "00PracticaTestingKconfig_util.h"
#ifdef CONFIG_EJEMPLO_XVII
int main(int argc,char *argv[])
{
 short ms = 15,s = sizeof(short);
 print_ident_data(__FILE__,argv[0]);
 printf("El n\\'umero %i en binario:\n",ms);
 s = 8*s;
label1:
 s--;
 printf("%i",(ms >> s)&0x1);
 if (s)
   goto label1;
 return 0;
}/**/
#endif // CONFIG_EJEMPLO_XVII
