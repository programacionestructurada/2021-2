#include<stdio.h>

int sum; /*variable global, accesible desde cualquier
           parte del programa*/
//void funcion_en_file();
void intercambio(int*,int*);
void suma(int);
int main(void){
    int contador, a=9, b=0;
    sum=0;        /** a = 9, b = 0, sum = 0 */
    //intercambio();
    intercambio(&a,&b);     /** call intercambio */
    suma(a);/** suma(0); */ /** call suma */
                        /** a = 0, b = 9, sum = 0 */
    for(contador=a;contador<=b;contador++){
        suma(contador);
    }
/** contador=0, 0 <= 9, entonces suma(0), entonces sum=0
contador=1, 1 <= 9, entonces suma(1), entonces sum=(0)+1=1
contador=2, 2 <= 9, entonces suma(2), entonces sum=(1)+2=3
contador=3, 3 <= 9, entonces suma(3), entonces sum=(3)+3=6
   .
   .
   .
contador=9, 9 <= 9, entonces suma(9), entonces sum=(36)+9=45
1+2+3++4+...+n=(n*(n+1)/2), para n=9, (9*(9+1)/2=45)
    */
    float f = 1.23;
    double d = 1e-7;
    printf("%d", sum);  /*sum=45*/
    printf("\nsizeof(int) = %u\n",sizeof(int));
    printf("\nsizeof(float) = %u\n",sizeof(float));
    printf("\nsizeof(f) = %u\n",sizeof(f));
    printf("\nsizeof(3.5F) = %u\n",sizeof(3.5F));
    printf("\nsizeof(double) = %u\n",sizeof(double));
    printf("\nsizeof(d) = %u\n",sizeof(d));
    printf("\nsizeof(1e-7) = %u\n",sizeof(1e-7));
    printf("\nsizeof(long int) = %u\n",sizeof(long int));
    printf("\nsizeof(long long) = %u\n",sizeof(long long));

    return 0;
}
////////////////
void suma(int x) /*Variable local declarada como parámetro*/
                    /*accecible solo por la función suma*/
{
    sum=sum + x;  /** sum = 0 + 0 = 0 (la prmera vez)*/
    return;
}
/**"Speaking is cheap, give me the code.", Linus Torlvalds.*/
void intercambio(int *a,int *b) /** *a=9, *b=0 */
{
    if(*a > *b)  /** 9 > 0 */
    {

        int inter;

        inter=*a;     /** inter = 9 */
        *a=*b;   /** *a = 0 entonces a = 0, la a de main */
        *b=inter;/** *b = 9 entonces b = 9, la b de main */
    }
    return;
}
