#include <stdio.h>
#include <stdlib.h>
#include "IntroProgUnidad02_util.h"
#ifdef CONFIG_EJEMPLO__XVII
int main(int argc,char *argv[])
{
 short si = 15, s = 8*sizeof(short);
 print_ident_data(__FILE__,argv[0]);
label1:
 s--;
 printf("%i",(si>>s)&0x1);
 if (s){
   goto label1;
 }else{
   printf("\ns = %i\n",s);// 0
 }
 return 0;
}
#endif
