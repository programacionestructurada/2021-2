#include <stdio.h>
const float PI = 3.1416;

int main(){

 printf("EJERCICIO: Deducir comportamiento de scanf\n");
#if 0
 float radio,perimetro;
 printf("Introducir\n un valor real\n un valor entero");
 printf(" una letra\n una palabra\n\n");
 /** Valor real */
 printf("Radio (un valor real): ");
 scanf("%f",&radio);
 perimetro = PI*(2*radio);
 printf("valor leido en radio = %.4f\n",radio);
 printf("perimetro = %.4f\n",perimetro);

 /** Valor entero */
 printf("Radio (un valor entero): ");
 scanf("%f",&radio);
 perimetro = PI*(2*radio);
 printf("valor leido en radio = %.4f\n",radio);
 printf("perimetro = %.4f\n",perimetro);
#endif
#if 0
 int a;
 float b;
 printf("Teclear <valor entero> <valor real>: ");
 scanf("%d %f",&a,&b);
 printf("a = %d\tb = %f\n",a,b);
#endif // 0

#if 0
 int ret,ter;
 /** Una letra */
 printf("Radio (una letra): ");
 ret = scanf("%f%*c",&radio);
 if (ret == 1) {
   perimetro = PI*(2*radio);
   printf("perimetro = %.4f\n",perimetro);
 }
 printf("valor leido en radio = %.4f\tconversiones=%d\n",
        radio,ret);

 fflush(stdin);
 /** Una palabra */
 printf("Radio (una palabra): ");
 ter = scanf("%f",&radio);
 if (ter == 1) {
   perimetro = PI*(2*radio);
   printf("perimetro = %.4f\n",perimetro);
 }
 printf("valor leido en radio = %.4f\tconversiones=%i\n",
        radio,ter);
#endif // 0
#if 1
 int c;
 float d;
 int ret1,ret2;
 printf("Teclea valor entero: ");
 ret1 = scanf("%i%*c%*c",&c);
 if (ret1 == 1) {
   printf("c = %d\tconversiones=%d\n",c,ret1);
 }
 /**************/
 if (ret1 == 0) {
   fflush(stdin);
 }
 printf("Teclea valor real: ");
 ret2 = scanf("%f",&d);
 if (ret2 == 1) {
   printf("d = %f\tconversiones=%d\n",d,ret2);
 }
#endif // 1

 return 0;
}/*end main()*/





