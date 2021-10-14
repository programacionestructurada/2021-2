#include <stdio.h>

void funcion_valor(int a);
void funcion_referencia(int *p);

int main(){
 int x = 50;
 printf("LLAMADO POR VALOR\n");
 printf("x = %d\n",x);
 funcion_valor(x);
 printf("x = %d\n",x);

 printf("\nLLAMADO POR REFERENCIA\n");
 printf("x = %d\n",x);
 funcion_referencia(&x);
 printf("x = %d\n",x);

 return 0;
}/*end main()*/

void funcion_valor(int a){
 a = 100;
 printf("\nfuncion_valor(): %i\n",a);
}

void funcion_referencia(int *p){
 *p = 100;
 printf("\nfuncion_referencia(): %i\n",*p);
}
