/**
 * REF. P\'ag. 34, Chapter 7 Strings
 * Mikael Olsson - Modern C Quick Syntax Reference_
 * A Pocket Guide to the Language, APIs, and
 * Library-Apress (2019).pdf
 */
#include <stdio.h>
#include <string.h>
#ifndef __unix__
#include <conio2.h>
#endif // __unix__
#include <common.h>
#include <assert.h>

int main(){

 char s1[64] = "Hello";
 char s2[64] = "World";
 /**concatenar s1 y s2*/
 strcat(s1," ");      /** "Hello " */
 strcat(s1,s2);       /** "Hello World" */
 print_str(s1);
 //static_assert(SIZE_ARR(s2) >= SIZE_ARR(s1),
 //              "size of s2 must be greater than size of s1");
 /**Copiar s1 a s2*/
 strcpy(s2,s1);
 print_str(s2); /** "Hello World" */
 /**comparar cadenas con strcmp()*/
 cmp_str(s1,s2);
 /**Obtener la longitud de cadena con strlen() */
 printf("Longitud de la primera cadena: %d\n",
        str_length(s1));
 printf("Longitud de la segunda cadena: %d\n",
        str_length(s2));

 return 0;
}/*end main()*/




