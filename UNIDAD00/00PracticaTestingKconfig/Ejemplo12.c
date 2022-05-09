#include <stdio.h>
#include "00PracticaTestingKconfig_util.h"
#ifdef CONFIG_EJEMPLO_XII
int main(int argc,char *argv[])
{
 int i, j = 5;
 i = ++j; //Prefijo
 print_ident_data(__FILE__,argv[0]);
 printf("i = %d, j = %d\n",i,j);// 6, 6
 j = 5;
 i = j++;//Postfijo
 printf("i = %d, j = %d\n",i,j);// 5, 6

 return 0;
}/*end main()*/
#endif // CONFIG_EJEMPLO_XII
