/**Funciones para calcular velocidad,
 *  tiempo y distancia.
 */
 #include <stdio.h>
 #ifndef __unix__
 #include <conio2.h>
 #endif // __unix__
 #include <common.h>/** Add ../CommonFiles to Search dirs */
 #include <string.h>/**strcmp()*/
 #include <stdlib.h> /*malloc()*/
 #define NDEBUG

 /**Calcula la velocidad: v=d/t */
 float vel(float a,float b){
  return a/b;
 }

 /**Calcula el tiempo: t=d/v */
 float tiempo(float a,float b){
  return a/b;
 }

 /**Calcula la distancia: d=v*t */
 float dist(float a,float b){
  return a*b;
 }

 /**
  * Imprime en pantalla los elementos del arreglo
  * bidimensional de enteros m.
  * @param m: apuntador a apuntador a entero, apunta
  *           al arreglo de dos dimensiones de enteros
  *           a imprimir.
  * @param M: N\'umero de filas del arreglo bidimensional.
  * @param N: N\'umero de columnas del arreglo bidimensional.
  */
//#define VARIANTE 0
#define VARIANTE 1
 void mostrar_arreglo2_MxN(int **A,uint M,uint N){
  uint i,j;
  for(i=0; i<M; i++){
    for(j=0; j<N; j++){
#if VARIANTE == 0
      printf("%7d",A[i][j]);
#elif VARIANTE == 1
      printf("%7d",*(*(A+i)+j));
#endif // VARIANTE
    }
    printf("%c",'\x0A');
  }
 }/*end mostrar_arreglo2_MxN()*/

/** Imprime la cadena cad */
void print_str(char cad[]){
 int i = 0;
 while ( cad[i] != '\0' ) {
 //while ( cad[i] == '\0' ) {/** 'H' == '\0' */
    putchar(cad[i++]);
 }
}/*end print_str()*/

int cmp_str(const char s1[],const char s2[]){
 int rdc = strcmp(s1,s2);
 if (!rdc) {
    printf("\nCadenas iguales\n");
 }else{
    printf("\nCadenas diferentes\n");
 }
 return rdc;
}

int str_length(const char s[]){
 return strlen(s);
}

void print_point(struct point P){
 printf("(%5d,%5d)",P.x,P.y);
}

void init_point(point *a,int X,int Y){
 (*a).x = X;
 (*a).y = Y;
}

/**Inicializa un Conjunto de Integers, el conjunto
 * contendr\'a los n enteros a los que deber\'a
 * apuntar el apuntador s.
 */
void init_set(ConjDInt *A,uint n,int *s){
 A->N = n;
 A->S = s;
}

void print_ConjDInt(ConjDInt *pt){
 int i;
 for(i=0;i < pt->N;i++){
   printf("%10d",*(pt->S + i));
 }
}
/**
 * Obtiene la uni\'on de dos conjuntos de enteros
 */
ConjDInt *union_dconj(ConjDInt *c1,ConjDInt *c2){
 int i = 0;
 int j;
 ConjDInt *result = malloc(sizeof(ConjDInt));
 uint card = c1->N;
 while(i < c2->N){
  if (!pertenece(c1,c2->S[i])){
    card++;
  }
  i++;
 }
#ifndef NDEBUG
 printf("card = %4d\n",card);
#endif // NDEBUG
 result->N = card;
 result->S = malloc((result->N)*sizeof(int));
 for (i = 0;i < c1->N; i++){
   result->S[i] = c1->S[i];
 }
 for (j = 0;j < c2->N; j++){
   if (!pertenece(c1,c2->S[j])){
     result->S[i++] = c2->S[j];
   }
 }
 return result;
}/*end union_dconj()*/








/**
 * Devuelve true si el entero elem pertenece al
 * conjunto al que apunta el apuntador A. Devuelve
 * false si elem no pertenece al conjunto.
 *///Stub
bool pertenece(ConjDInt *A,int elem){
 int i;
 for(i=0;i < A->N;i++)
   if(*(A->S + i) == elem)return true;
 return false;
}

/**
 * Devuelve true si los conjuntos tienen los mismos
 * elementos, y devuelve false si los conjuntos son tales
 * que al menos uno de los elementos de *c1 no es elemento
 * de *c1, o bien si al menos uno de los elementos de *c2
 * no es elemento de *c1.
 */
bool equals(ConjDInt *c1,ConjDInt *c2){
 /** PISTA:
   Preguntar por cada elemento del conjunto *c1, si
   no pertenece al conjunto *c2. Si encontramos un
   elemento del conjunto *c1 que no perteneza al
   conjunto *c2, podemos devolver false.
   Si todos los elementos del conjunt0 *c1 si pertenecen
   al conjunto *c2 (*c1 es subconjunto de *c2).
   Entonces, proceder a realizar la misma prueba para
   todos los elementos del conjunto *c2, es decir,
   para cada elemento del conjunto *c2, revisar si no
   pertenece al conjunton *c1. Si econtramos un elemento
   del conjunto *c2 que no pertenezca al conjunto *c1,
   podemos devolver false. Si encontramos que todos los
   elementos de *c2 tambi\'en son elementos del conjunto
   *c1, entonces *c2 tambi\'en es subconjunto de *c1.
   En ese momento, dado que *c1 es subconjunto de *c2 y
   *c2 es subconjunto de *c1, esto significar\'ia que los
   dos conjuntos son iguales; y por lo tanto podemos
   devolver true.
 */
 return true;
}/*end equal*/














