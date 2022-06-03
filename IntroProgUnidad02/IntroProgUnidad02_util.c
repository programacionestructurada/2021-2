/**IntroProgUnidad02.c*/
#include <stdio.h>
#include "IntroProgUnidad02_util.h"
extern char HdG[3][100];
/** print_ident_data(__FILE__,argv[0]); en la funci\'on
 * main imprime datos de identificaci\'on: del archivo
 * fuente que contiene la funci\'on main, y el nombre
 * del archivo ejecutable.
 */
void
print_ident_data(const char *source,char *exe)
{
 printf("FUENTE: %s\n",source);
 printf("EJECUTABLE: %s\n",exe);
}

void print_hrule(void)
{
 unsigned short i;
 for (i = 0;i<ARRAY_SIZE(HdG[0])-2;i++) {
   switch(i){
   case 0:{putchar('+');break;}
   case 12:{putchar('+');break;}
   case 29:{putchar('+');break;}
   case 46:{putchar('+');break;}
   case 63:{putchar('+');break;}
   case 80:{putchar('+');break;}
   case 97:{putchar('+');break;}
   default:{putchar('-');break;}
   }
 }
}

void set_formato_i(char formato_i[],
                   short c1w,short c2w,short c3w,short c4w,short c5w,short c6w)
{
  sprintf(formato_i,"|%c%i%c|%c%i%c|%c%i%c|%c%i%c|%c%i%c|%c%i%c|\n",
         '%',c1w,'s','%',c2w,'s','%',c3w,'s','%',c4w,'s','%',c5w,'s','%',c6w,'s');
}
