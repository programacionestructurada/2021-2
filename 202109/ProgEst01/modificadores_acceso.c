#include <stdio.h>
const unsigned int cant_ddias = 7; /**cantidad d dias*/
volatile const unsigned long int hora;
int main(){
 /*cant_ddias = 10;*/ /**Asignacion no permitida*/
 /*hora = 12;*/       /**Asignacion no permitida*/
 float pi = 3.1416;
 printf("Especificadores de formato\n");
 printf("\npi = %f\n",pi);
 printf("\npi = %e\n",pi);
 printf("\npi = %g\n",pi);
 printf("\npi = %.4f\n",pi);
 printf("\npi = %.4e\n",pi);
 printf("\npi = %g\n",pi);
 return 0;
}
