/** tipo.h */
#ifndef TIPO_H_INCLUDED
#define TIPO_H_INCLUDED
/** Obtiene la cantidad de elementos de un arreglo unidimensional
 *  Debe ser posible conocer en tiempo de compilac\'on
 *  sizeof(a[0])
 */
#define SIZE_ARR(a) ((sizeof(a))/(sizeof(a[0])))

/** Estructuras */
struct point {
 int x;     /** abscisa */
 int y;     /** ordenada */
};
typedef struct point POINT;
typedef struct point point;

void print_point(struct point P);
void init_point(point *a,int X,int Y);

struct conjunto_dints {
 unsigned int n;        /** cardinalidad del conjunto */
 int *N;                /** apunta a n enteros */
};                      /** Se crea el tipo de dato
                            struct conjunto_dints */


/** Inicializa una struct conjunto_dints */
void init_conjunto_dints(struct conjunto_dints *p);

/** Muestra los enteros de una struct conjunto_dints */
void print_conjunto_dints(struct conjunto_dints *p);
#endif // TIPO_H_INCLUDED
