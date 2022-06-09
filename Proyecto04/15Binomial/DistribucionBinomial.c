#include <stdio.h>
#include <math.h>
#define NDEBUG
#include <assert.h>
#include <conio2.h>  /** Add -I../00CommonFiles/ to CFLAGS */
typedef unsigned int uint;

static float distribucion[11][11];

/**Funci\'on factorial*/
uint fac(uint m){
 if ((m == 0)||(m == 1))
   return 1;
 else
   return m*fac(m - 1);
}
/**STUB*/
float pow1(float a,float b){
 return 1.0;
}

float Binomial(uint n,uint k,float p){
 float result,num,den,f1,f2;
 num = (float)fac(n);
 den = (float)(fac(k)*fac(n - k));
#ifndef NDEBUG
 f1 = pow1(p,k);
 f2 = pow1(1-p,n-k);
#else
 f1 = pow(p,k);
 f2 = pow(1-p,n-k);
#endif // NDEBUG
 result = (num/den)*f1*f2;
#ifndef NDEBUG
 printf("Binomial: k=%5d n-k=%5d\n",k,n-k);
 printf("f1= %7.4f f2=%7.4f n=%d num=%d, den=%d, num/den=%d\n",
        f1,f2,n,(int)num,(int)den,(int)(num/den));
 printf("\n");
 /*
 2!/((1!)((2-1)!))=(2)/((1)(1))=2

 */
#endif // NDEBUG

 return result;
}

int main(){
 uint i,j;
 float p;
 printf("\nDISTRIBUCION DE UNA VARIABLE ALEATORIA BINOMIAL\n");
 printf("\nCaptura la probabilidad de \\'exito de un ensayo \
de Bernoulli:");
 scanf("%f",&p);
 printf("\n");

 for (i = 1;i <= 10; i++){
  for (j = 0;j <= i; j++){
    distribucion[i-1][j] = Binomial(i,j,p);
    printf("%7.4f",distribucion[i-1][j]);
  }
  printf("\n");
 }
 float ads[10] = {0};
 for (i = 1;i <= 10; i++){
  for (j = 0;j <= i; j++){
    ads[i-1] += distribucion[i-1][j];
  }
 }
 printf("\n");
 for (i = 0;i < 10;i++)
  printf("ads[%i]=%7.4f\n",i,ads[i]);
#ifndef __unix__
 getch();
#endif // __unix__

 return 0;
}/*end main()*/
