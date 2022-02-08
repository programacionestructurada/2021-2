#include <stdio.h>
#include <stdlib.h>
#include "../include/tipo.h"

void print_conjunto_dints(struct conjunto_dints *p)
{
 int i;
 for(i = 0;i < p->n; i++){
 #if 0 //LMC 2021.12.03
   printf("%7i",*(p->N + i));
 #else
   printf("%7i",p->N[i]);
 #endif // 0
 }
}


/** Inicializa una struct conjunto_dints
 * pre: p apunta a una estructura struct conjunto_dints
 */
void init_conjunto_dints(struct conjunto_dints *p)
{
  //ESCRIBA SU CODIGO AQUI
  //Pedir la cantidad de enteros (p->n) en tiempo de ejecuci\'on
  //Inicializar el apuntador p->N
  //Leer la cantidad p->n de enteros y almacenarlos en las
  //localidades correspondientes (si k es un \'indice v\'alido,
  //en la variable p->N[k] (equivalentemente, en *(p->N + k))
  #if 1 //LMC 2021.12.08
  /** Stub (provisional para prueba r\'apida)*/
  unsigned int i;
  p->n = 2;    /** <--- Un entero no negativo */
  p->N = (int *)malloc(p->n * sizeof(int));
  for(i = 0;i < p->n;i++){
    printf("Entero %u: ",i);
   #if 0
    scanf("%d",p->N + i);
   #else
    scanf("%d",&p->N[i]);
   #endif
  }
  #endif
}

void print_point(struct point P){
 printf("(%5d,%5d)",P.x,P.y);
}

void init_point(point *a,int X,int Y){
#if 0
 (*a).x = X;
 (*a).y = Y;
#else
 a->x = X;
 a->y = Y;
#endif
}
