#include <stdio.h>
/**Add 00CommonFiles to compiler search directories*/
#ifndef __unix__
#include <conio2.h>
#endif //__unix__
#include <ctype.h>

int main(){
 char car;
 printf("\nCapture un caracter\n");
 scanf("%c",&car);
 if (isdigit(car))
  printf("\nEl caracter capturado es un d\\'igito\n");
 else {
  if (isalpha(car)) {
   printf("\nEl caracter capturado es una letra del afabeto");
   if (isupper(car))
    printf(" y es may\\'uscula\n");
   else
    printf(" y es min\\'uscula\n");
  } else {
//#ifdef __unix__
//#error __unix__ si esta definida!
//#endif // __unix__
#ifndef __unix__
   getch();/**Add conio.c to Project's target*/
#endif //__unix__
  }
 }
#ifndef __unix__
 getch();/**Add conio.c to Project's target*/
#endif //__unix__
 return 0;
}/*end main()*/

