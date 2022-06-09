#include <stdio.h>
#include <stdlib.h>

int main(){
 //Angel Fuenleal
 //Angel Fuenleal Morales14:01
float ft,cm,metros,yarda,pulgadas;
//Carolina Pérez
 printf("Ingrese la cantidad de pies que desea convertir\n");
    scanf("%f", &ft);
 //Enrique Salvador Soto
 //pulgadas= ft/12 pulgadas
 pulgadas= ft*12;//Correcci\'on de Angel Fuenleal
 //Elias Isaac Eustaquio
 yarda= ft/3;
 //Estefania Sanchez Blanco
 cm=2.54*ft;//No genera error, pero no hac e loque sse pide
 //Sofía Janice Morales Tinajero14:14
 cm= ft/2.54;//No genera error, perp no calcula lo que se pide
 //Estefania Sanchez Blanco
 cm=pulgadas*2.54;
 //Jazmin Guadalupe Martínez
 metros=cm/100;
 //Jesus Cerecedo
 printf("\n Pulgadas: %0.2f",pulgadas);
 printf("\n Yardas: %0.2f",yarda);
 printf("\n Centimetros: %0.2f",cm);
 printf("\n Metros: %0.2f",metros);
 return 0;
}
