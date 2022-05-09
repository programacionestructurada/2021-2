#include <stdio.h>
#include <stdlib.h>

int main()
{
 int boleta = 1234567890;
 int *bolPtr;
 bolPtr = &boleta;
 *bolPtr = 2022641234;// 1234567090
 printf("\n\n\n\nboleta = %d\n",boleta);// 2022641234
 int intVec[] = {1,2,3,4,5,6,7,8};
 intVec[7] =0;
 printf("\n\nintVec[7] = %i\n",intVec[7]);
 for(boleta=0;boleta<(sizeof(intVec)/sizeof(intVec[0]));boleta++)
   printf("%i",intVec[boleta]);
 int A=10,B=20;
 void swap0(int x,int y);
 swap0(A,B);
 printf("\n\nA=%d\tB=%d\n",A,B);// 10  20
 void swap1(int *x,int *y);
 swap1(&A,&B);
 printf("\n\nA=%d\tB=%d\n",A,B);// 20  10
 return 0;
}

void swap0(int x,int y)/**Paso de argumentos por valor*/
{
 int tmp=x;
 x = y;
 y = tmp;
}


void swap1(int *x,int *y)/**Paso de argumentos por referencia*/
{
 int tmp=*x;
 *x = *y;
 *y = tmp;
}
