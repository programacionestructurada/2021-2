/** main4.c
   Incluir tambi\'en este ejemplo,en el album
   de programas --y en el archivo make--.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int value = 20;
  int sizeofint = sizeof(int);/**Cantidad de bytes usados
                                 para almacenar un entero*/
  sizeofint *=8;  /** sizeofint=sizeofint*8*/
  int i;
  printf("El n\\'umero %d de base 10, en binario es:\n",
         value);
#include "incnmain4.c"/**En este archivo se usan dos
                         operadores a nivel de bits*/

  return 0;
}/*end main()*/

