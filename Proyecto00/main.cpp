#include <stdio.h>
#define FACTOR  1.16      //Constante usando macro
const int num = 10;
#define PROFE 1
int main()
{
#define CTE_A   100
const float PI=3.1416;
#ifdef PROFE
 printf("PROGRAMA DE EJEMPLO QUE USA CARACTERES\n\n");
 printf("%f\n",PI);
 char c;
 unsigned int tam;
 printf("Valor entero: %4i\n",num);
 c='A';
 printf("%3c",c);
 c=c+1;
 printf("%3c",c);
 printf("\n");
 printf("%-3c",c);
 c=c+1;
 printf("%-3c",c);
 //num = 20;
 tam=sizeof(c);
 printf("\nBytes usados para un caracter: %i\n",tam);
 tam=sizeof(char);
 printf("Bytes usados para un caracter: %i\n",tam);

#else
 printf("\nSE INCLUYO LA PARTE #else\n");
 printf("PROGAMA DE EJEMPLO QUE USA CARACTERES\n\n");
char c;
unsigned int tam;
printf("Valor entero: %i\n",num);
c='A';
printf("%3c",c);
c=c+1;
printf("%3c",c);
printf("\n");
printf("%-3c",c);
c=c+1;
printf("%-3c",c);
//num = 20;
tam=sizeof(c);
printf("Bytes usados para un caracter %i\n",tam);
tam=sizeof(char);
printf("Bytes usados para un caracter %i\n",tam);
#endif
 return 0;
}
