#include <stdio.h>
#include "IntroProgUnidad02_util.h"
char carr[10];

#ifdef CONFIG_TEST_FOR
int main(int argc,char *argv[])
{
 carr[0] = 'U';
 carr[1] = 'P';
 carr[2] = 'I';
 carr[3] = 'I';
 carr[4] = 'T';
 carr[5] = 'A';
 carr[6] = '-';
 carr[7] = 'I';
 carr[8] = 'P';
 carr[9] = 'N';
 print_ident_data(__FILE__,argv[0]);
 putchar(carr[0]);
 putchar(carr[1]);
 putchar(carr[2]);
 putchar(carr[3]);
 putchar(carr[4]);
 putchar(carr[5]);
 putchar('\n');
 /** Ciclo for */
 short i;
#if 0
 for (i = 0;i < 6;i = i + 1){
#else
 /**
  * (sizeof(carr)/sizeof(carr[0])) es el tama\~no del arreglo carr
  */
 for (i = 0;i < (sizeof(carr)/sizeof(carr[0]));++i){
#endif
   putchar(carr[i]);
 }
 putchar('\n');

 return 0;
}
#endif // CONFIG_TEST_FOR
