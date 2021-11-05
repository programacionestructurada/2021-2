#include <stdio.h>
int A = 200;
int B = 300;
int C = 250;

int main(){
 int max_de_A_y_B;
 int ndconvs;      /** nUMERO dE convERSIONEs */
 printf("PROGRAMA QUE OBTIENE EL MAXIMO DE TRES ENTEROS\n");
 #if 0
 printf("A = %15i, B = %15i, C = %15i\n",A,B,C);
 #endif
entero_A:
 printf("Valor entero A : ");
 ndconvs = scanf("%d",&A);
 if (1 == ndconvs) {
entero_B:
   printf("Valor entero B : ");
   ndconvs = scanf("%d",&B);
   if (1 == ndconvs) {
entero_C:
     printf("Valor entero C : ");
     ndconvs = scanf("%d",&C);
     if (1 == ndconvs) {
       goto go_on;
     }else{
       fflush(stdin);
       goto entero_C;
     }
   }else{
     fflush(stdin);
     goto entero_B;
   }
 }else{
   fflush(stdin);
   goto entero_A;
 }
go_on:
 max_de_A_y_B = (A > B)?A:B;
 /** if (A > B) { max_de_A_y_B=A; }else{ max_de_A_y_B=B;} */
 printf("\nmax {%d,%d,%d} = %d\n",
        A,B,C,(max_de_A_y_B < C)?C:max_de_A_y_B);
 return 0;
}/*end main()*/

