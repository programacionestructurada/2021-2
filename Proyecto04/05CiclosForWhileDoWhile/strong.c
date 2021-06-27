#include <stdio.h>

void mostrar(float x[],unsigned int tam){
 //Utilizando un cliclo do-while, imprimir los
 //valores del arreglo x[] (en forma horizontal,
 //es decir en la forma:
 // x0  x1  ... x<tam-1>), mostrando 4 decimales
 unsigned int i = 0;
 do {
  printf("%8.4f",x[i++]);
 }while (i < tam);
}

void mostrar_densidad(float x[],float p[],unsigned int tam) {
 unsigned int i;
 printf("(    x    ,  f(x)  )\n");
 for (i = 0; i < tam; i++) {
  printf("(%9.4f,%8.4f)\n",x[i],p[i]);
 }
 printf("(otherwise,  0.0000)\n");
}

void
eval(float (*g)(float),float x[],float y[],unsigned int tam)
{
 unsigned int i;
 for (i = 0; i < tam; i++) {
  //y[i] = g(x[i]);
  y[i] =(*g)(x[i]);
 }
}

