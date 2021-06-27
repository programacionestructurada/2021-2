#ifndef COMMON_H_INCLUDED
#define COMMON_H_INCLUDED
#include <stdbool.h>

#define SIZE_ARR(a) (sizeof(a)/sizeof(a[0]))

typedef unsigned int uint;

/**Funciones sin paso de parametros*/
void suma1();
void prom();

/**Funciones con paso de parametros*/
/**Calcula la velocidad: v=d/t */
float vel(float dist,float time);
/**Calcula el tiempo: t=d/v */
float tiempo(float dist,float velocidad);
/**Calcula la distancia: d=v*t */
float dist(float velocidad,float time);

float fuerza (float m,float a) __attribute__ ((weak));
float masa (float f,float a) __attribute__ ((weak));
float aceleracion (float f,float m) __attribute__ ((weak));

void mostrar_arreglo2_MxN(int **m,uint M,uint N);

void print_str(char cad[]);
int cmp_str(const char s1[],const char s2[]);
int str_length(const char s[]);

/** Estructuras */
struct point {
 int x;     /** abscisa */
 int y;     /** ordenada */
};
typedef struct point POINT;
typedef struct point point;

void print_point(struct point P);
void init_point(point *a,int X,int Y);

/** Conjunto De Integers */
typedef struct ConjDInt {
 uint N;    /** Cardinalidad del conjunto */
 int *S;    /** Set de Integers */
} ConjDInt;

void init_set(ConjDInt *A,uint n,int *s);
void print_ConjDInt(ConjDInt *pt);
bool pertenece(ConjDInt *A,int elem);
ConjDInt *union_dconj(ConjDInt *c1,ConjDInt *c2);
bool equals(ConjDInt *c1,ConjDInt *c2);


#endif // COMMON_H_INCLUDED
