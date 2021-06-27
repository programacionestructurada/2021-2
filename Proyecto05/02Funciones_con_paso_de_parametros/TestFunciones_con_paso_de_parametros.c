#include <stdio.h>
#include <stdlib.h>
#ifndef __unix__
#include <conio2.h>
#endif // __unix__
#include <common.h> /** Add ../00CommonFiles/ to search dirs*/
                    /** Add -I../00CommonFiles/ to CFLAGS */
//#define FUNC_CON_PARAMETROS 0
//#define FUNC_CON_PARAMETROS 1
#define FUNC_CON_PARAMETROS 2
int main(){
#ifndef __unix__
 clrscr();
#endif // __unix__
 float v, d, t;
 int f;
 char op = 's';
 while(op=='s' || op=='S'){
  printf("Indica la funci\\'on que deseas llevar a cabo\n\
1 velocidad\n2 tiempo\n3 distancia\n");
  scanf("%d",&f);
  switch(f){
    case 1:{
      printf("Velocidad\n");
      printf("Dame la distancia: ");
      scanf("%f",&d);
      printf("Dame el tiempo: ");
#if FUNC_CON_PARAMETROS == 0
      scanf("%f",&t);
#endif // FUNC_CON_PARAMETROS
#if FUNC_CON_PARAMETROS == 1
      scanf("%f",&t);
#endif // FUNC_CON_PARAMETROS
#if FUNC_CON_PARAMETROS == 2
      scanf("%f%*c",&t);
#endif // FUNC_CON_PARAMETROS
      v = vel(d,t);
      printf("La velocidad es %7.2fm/s\n",v);
      break;
    }
    case 2:{
      printf("Tiempo\n");
      printf("Dame la velocidad: ");
      scanf("%f",&v);
      printf("Dame el distancia: ");
#if FUNC_CON_PARAMETROS == 0
      scanf("%f",&d);
#endif // FUNC_CON_PARAMETROS
#if FUNC_CON_PARAMETROS == 1
      scanf("%f",&d);
#endif // FUNC_CON_PARAMETROS
#if FUNC_CON_PARAMETROS == 2
      scanf("%f%*c",&d);
#endif // FUNC_CON_PARAMETROS
      t = tiempo(d,v);
      printf("El tiempo es %7.2fs\n",t);
      break;
    }
    case 3:{
      printf("Distancia\n");
      printf("Dame la velocidad: ");
      scanf("%f",&v);
      printf("Dame el tiempo: ");
#if FUNC_CON_PARAMETROS == 0
      scanf("%f",&t);
#endif // FUNC_CON_PARAMETROS
#if FUNC_CON_PARAMETROS == 1
      scanf("%f",&t);
#endif // FUNC_CON_PARAMETROS
#if FUNC_CON_PARAMETROS == 2
      scanf("%f%*c",&t);
#endif // FUNC_CON_PARAMETROS
      d = dist(v,t);
      printf("La distancia es %7.2fm\n",d);
      break;
    }
    default:{
      printf("Error de caso\n");
#if FUNC_CON_PARAMETROS == 0
      //Vacio
#else
      fflush(stdin);
#endif // FUNC_CON_PARAMETROS
      //scanf("%c%*c",&op);
    }
  }/*end switch()*/
#if FUNC_CON_PARAMETROS == 1
  fflush(stdin);
#endif // FUNC_CON_PARAMETROS
  printf("Deseas calcular nuevamente vel, dist, tiempo: s/n?\n");
  scanf("%c",&op);/** Si FUNC_CON_PARAMETROS == 0
                      aparentemente el llamado a esta funci\'on
                      NO se hace/realiza. En realidad si se
                      realiza, solo que se lee un '\n'. */
#ifndef __unix__
  clrscr();
#endif // __unix__
 }/*end while()*/

 return 0;
}/*end main()*/

