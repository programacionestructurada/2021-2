#include <stdio.h>
//#include <conio2.h>
#include "../00CommonFiles/conio2.h"
/**Cuenta cu\'antas veces se captura/teclea el
 * car\'acter 'a'
 */
int main(){
 int CuentaCar=0;
 char Cadena;
 /**El End Of File (EOF) se puede introducir pulsando
  * <intro> ^Z <intro>
  */
 while (Cadena != EOF){
   Cadena=getchar();
   if (Cadena == 'a')
     ++CuentaCar;
   clrscr();
 }
 printf("\n Aparecieron %d veces la letra 'a' ",CuentaCar);
#ifndef __unix__
 getch();
#endif // __unix__
 return 0;
}
