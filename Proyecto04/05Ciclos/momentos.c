/**Calcula la varianza de X*/
#include <stdio.h>
#include <conio.h>

int main(){
 int n,i;
 float ex,fx,x,prod,sum;
 printf("Calcula la varianza de X\n");
 printf("Dame el n\\'umero de valores que se tomaron para X ");
 scanf("%d",&n);
 sum = 0;
 printf("Dame el valor de la esperanza de X ");
 scanf("%f",&ex);
 for (i = 1; i <= n; i++){
  printf("Dame el valor %d de X ",i);
  scanf("%f",&x);
  printf("Dame el valor %d de la funci\\'on de probabilidades: ",i);
  scanf("%f",&fx);
  prod = (x - ex)*(x - ex)*fx;
  sum += prod;
 }
 printf("La varianza de X es de: %.4f",sum);
 getch();

 return 0;
}/*end main()*/
