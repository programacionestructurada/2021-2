#include <stdio.h>

/* Por valor */
void swap0(int a,int b){
 int tmp;
 tmp = a;
 a = b;
 b = tmp;
}

/* Por referencia */
void swap1(int *a,int *b){
 int tmp;
 tmp = *a;
 *a = *b;
 *b = tmp;
}

int main(){
 int x = 100,y = 200;
 swap1(&x,&y);/** se pasan los par\'ametros por referencia, */
 printf("Programa que muestra paso de par\\'ametros por referencia\n");
 printf("y paso de par\\'ametros por valor");
 printf("\nx = %d, y = %d",x,y);
 swap0(x,y);/** se pasan los par\'ametros por valor. */
 printf("\nx = %d, y = %d",x,y); /** 200, 100 */

 return 0;
}/*end main()*/


