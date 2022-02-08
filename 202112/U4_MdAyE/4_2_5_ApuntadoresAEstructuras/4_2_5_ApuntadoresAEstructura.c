/** 4_2_5_ApuntadoresAEstructura.c */
#include <stdio.h>
#include <string.h>
struct {
 char buf[256];
 unsigned int longitud;
} b,*bp = &b;

int main()
{
 strcpy(bp->buf,"Ejemplo de una cadena");
 bp->longitud = strlen(bp->buf);
 printf("%-32s%u\n",bp->buf,bp->longitud);
 return 0;
}/*end main()*/

