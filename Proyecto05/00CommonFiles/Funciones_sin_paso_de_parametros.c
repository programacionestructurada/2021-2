#include <stdio.h>

void suma1(){
 float a,b,c;
 printf("Teclea el primer operando: ");
 scanf("%f",&a);
 printf("Teclea el segundo operando: ");
 scanf("%f",&b);
 c = a + b;
 printf("El resultado es %10.4f\n",c);
}

void prom(){
 int n,i;
 float c,p = 0;
 printf("Cu\\'antas materias se le van a promediar al alumno: ");
 scanf("%i",&n);
 for (i = 1; i<= n;i++){
  printf("Teclea calificaci\\'on: ");
  scanf("%f",&c);
  p += c; /** p = p + c */
 }
 p=p/n;
 printf("El promedio del alumno es %9.1f\n",p);
}
