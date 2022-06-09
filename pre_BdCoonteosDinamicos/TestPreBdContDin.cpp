#include <iostream>
#include <math.h>
#define NDEBUG
#include <assert.h>
#define LENGHT(A)	(sizeof((A))/sizeof(((A)[0])))
#ifndef NDEBUG
#define PRINT_INTERVALS(arr,sep,tdd) for(i=0;i<LENGHT(arr)-1;i++)\
{if(i<LENGHT(arr)-2){\
printf("i=%3lu (%.2f,%.2f]%c",i,(arr)[i],(arr)[i+1],sep);}\
else{printf("i=%3lu (%.2f,%.2f]",i,(arr)[i],(arr)[i+1]);}}
#else
#define PRINT_INTERVALS(arr,sep,tdd) for(i=0;i<LENGHT(arr)-1;i++)\
{if(i<LENGHT(arr)-2){\
printf("(%.2f,%.2f]%c",(arr)[i],(arr)[i+1],sep);}\
else{printf("(%.2f,%.2f]",(arr)[i],(arr)[i+1]);}}
#endif // NDEBUG
double round(double,int);

int main(int argc, char** argv) {
 int p_1 = 500;
 unsigned int N;        /*Cantidad de clases*/
 size_t i;
 double M;     /*Longitud de intervalos de las clases*/

#ifndef NDEBUG
 round(3.2,0);
 round(4.6,0);
 round(8.5,0);
 double arg = 3.2;
 printf("Testing library function round()...\n");
 printf("round(%.2f) = %.2f\n",arg,round(arg));
 arg = 4.6;
 printf("round(%.2f) = %.2f\n",arg,round(arg));
 arg = 8.5;
 printf("round(%.2f) = %.2f\n",arg,round(arg));
 printf("Testing function log10()...\n");
 printf("log10(100) = %.1f\n\n",log10(100));
#endif // NDEBUG
 printf("%s\n",__FILE__);
 printf("DATOS PARA CONTEO DINAMICO\n\n");
 N = (int)round(1+3.33*log10(p_1));
 double r[N+1];
 M = (double)p_1 / N;
 for (i=1;i<N+1;i++) {
   r[i] = M * i;
 };r[0] = 0;
 printf("Cantidad de clases: N = %i\n\n",N);
 printf("Longitud de intervalos: M = %.2f\n\n",M);
 printf("En este conteo din\\'amico se usar\\'an los siguientes %u intervalos de clase:\n",
        N);
 PRINT_INTERVALS(r,'\n','f')
 getchar();
 return 0;
}/*end main()*/

double round(double real_v,int dumm)
{
#ifndef NDEBUG
 printf("%i < %.1f < %d\n",(int)floor(real_v),real_v,(int)(1+floor(real_v)));
#endif //NDEBUG
 double pre_result = floor(real_v);
 if ((real_v - pre_result) > 0.5) {
   return pre_result + 1;
 }
 return pre_result;
}



