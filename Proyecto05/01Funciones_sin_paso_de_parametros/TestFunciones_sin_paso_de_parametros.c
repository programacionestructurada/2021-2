#include <stdio.h>
#include <stdlib.h>
#include <common.h> /** Add ../00CommonFiles/ to search dirs*/
                    /** Add -I../00CommonFiles/ to CFLAGS */
//#define FUNC_SIN_PARAMETROS 1
#define FUNC_SIN_PARAMETROS 2
int main()
{
 printf("Ejemplo de funciones sin paso de par\\'ametros\n");
#if FUNC_SIN_PARAMETROS == 1
 suma1();
#endif // FUNC_SIN_PARAMETROS
#if FUNC_SIN_PARAMETROS == 2
 int resp;
 do {
  prom();
  printf("Si deseas promediar otro alumno teclea 1: ");
  scanf("%i",&resp);
 }while(resp == 1);
#endif // FUNC_SIN_PARAMETROS
 return 0;
}/*end main()*/
