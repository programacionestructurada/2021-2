#include <stdio.h>
#include <stdlib.h>
#ifndef __unix__
#include <conio2.h>
#endif // __unix__
#include <common.h> /** Add ../00CommonFiles/ to search dirs*/
                    /** Add -I../00CommonFiles/ to CFLAGS */
#define FUNC_CON_PARAMETROS 1
//#define FUNC_CON_PARAMETROS 2
int main(){
#ifndef __unix__
 clrscr();
#endif // __unix__
 float f, m, a;
 int index;
 char op = 's';
 while(op=='s' || op=='S'){
  printf("Indica la funci\\'on que deseas llevar a cabo\n\
1 Fuerza\n2 Masa\n3 Aceleraci\\'on\n");
  scanf("%d",&index);
  switch(index){
    case 1:{
      printf("Fuerza\n");
      printf("Dame la masa: ");
      scanf("%f",&m);
      printf("Dame la aceleraci\\'on: ");
#if FUNC_CON_PARAMETROS == 1
      scanf("%f",&a);
#endif // FUNC_CON_PARAMETROS
#if FUNC_CON_PARAMETROS == 2
      scanf("%f%*c",&a);
#endif // FUNC_CON_PARAMETROS
      f = fuerza(m,a);
      printf("La fuerza es %7.2fN\n",f);
      break;
    }
    case 2:{
      printf("Masa\n");
      printf("Dame la fuerza: ");
      scanf("%f",&f);
      printf("Dame la aceleraci\\'on: ");
#if FUNC_CON_PARAMETROS == 1
      scanf("%f",&a);
#endif // FUNC_CON_PARAMETROS
#if FUNC_CON_PARAMETROS == 2
      scanf("%f%*c",&a);
#endif // FUNC_CON_PARAMETROS
      m = masa(f,a);
      printf("La masa es %7.2fkg\n",m);
      break;
    }
    case 3:{
      printf("Aceleraci\\'on\n");
      printf("Dame la fuerza: ");
      scanf("%f",&f);
      printf("Dame la masa: ");
#if FUNC_CON_PARAMETROS == 1
      scanf("%f",&m);
#endif // FUNC_CON_PARAMETROS
#if FUNC_CON_PARAMETROS == 2
      scanf("%f%*c",&m);
#endif // FUNC_CON_PARAMETROS
      a = aceleracion(f,m);
      printf("La aceleracion es %7.2fm/s^{2}\n",a);
      break;
    }
    default:{
      printf("Error de caso\n");
      fflush(stdin);
    }
  }/*end switch()*/
#if FUNC_CON_PARAMETROS == 1
  fflush(stdin);
#endif // FUNC_CON_PARAMETROS
  printf("Deseas calcular nuevamente fuerza, masa, \
aceleraci\\'on: s/n?\n");
  scanf("%c",&op);
#ifndef __unix__
  clrscr();
#endif // __unix__
 }/*end while()*/

 return 0;
}/*end main()*/
