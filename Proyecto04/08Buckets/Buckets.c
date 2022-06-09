/** Buckets.c - Muestra la t\'ecnica de buckets
 *  (cubetas) para contar en este ejemplo, caracteres
 *  que se encuentran presentes en una cadena.
 *  Por simplicidad, se buscar\'a utilizar solo caracteres
 *  con c\'odigo ASCII de 7 bits.
 */
#include <stdio.h>
typedef unsigned int uint;
#define USE_BUCKET  1
#define SIZE_ARR(a) (sizeof(a)/sizeof(a[0]))

/** Por ser una variable global, los elementos del
 *  arreglo Bucket son inicializados a 0.
 */
uint Bucket[128];

int main(){
#if USE_BUCKET == 1
 uint i;
#endif // USE_BUCKET
 char str[] = "Pauca set matura";  /*C.F. Gauss*/
 printf("La cadena str es de tama\\~no: %u\n",SIZE_ARR(str));
 /**El tama\~no de str es 17 porque al final de la cadena,
    i.e, despu\'es del char 'a' de la palabra matura, el
    compilador agrega el caracter nulo  ('\0')*/
 /**T\'ecnica de buckets:
  * Contar los caracateres contenidos en la cadena str, y
  * los resultados quedar\'an guardados en el arreglo Bucket.
  */
#if USE_BUCKET == 1
 printf("str:\n%s\n",str);
 for (i = 0;i < SIZE_ARR(str);i++) { /**Buckets*/
   Bucket[(uint)str[i]]++;
 }
 for (i = 0;i < SIZE_ARR(Bucket);i++) {
   if (Bucket[i])
     printf("Bucket[%3u] = %3u %3c\n",i,Bucket[i],(char)i);
 }
#endif // USE_BUCKET
 /**Si i = 0, str[i] = str[0] = 'P'
  * Entonces Bucket[str[0]]=Bucket[80], y tmb
  * Bucket[80]++; va a provocar que Bucket[80] se
  * se incremente de 0 a 1.
  */
#ifndef USE_BUCKET
 printf("\'P\'=%i\n",'P');
 Bucket[(uint)str[0]]++; /** Bucket[80]++; */
 printf("Bucket[%u] = %u\n",
        (uint)str[0],Bucket[(uint)str[0]]);/**Bucket[80] = 1*/
#endif // USE_BUCKET

 return 0;
}/*end main()*//

