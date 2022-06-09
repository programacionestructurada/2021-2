#include <stdio.h>
#include <stdlib.h>
#include <common.h>
#ifndef __unix__
#include <conio2.h>
#endif // __unix__

int main(){
 int A,B;
 int *intPt;     /**Integer Pointer*/
 intPt = &A;     /**Hacemos que intPt apunte a la variable A*/
 A = 100;
 printf("A = %i\n",A); /** v-- derreferenciaci\'on del apuntador*/
 printf("*intPt = %d\n",*intPt);/** Aqu\'i * es un operador */
                                /** es el operador indireccion*/
 *intPt = 200;   /** A = 200 */
 intPt = &B;
 *intPt = A+300; /** B = (200)+300 = 500 */

 printf("A = %i, B = %d\n",A,B);

 /** Obteniendo memoria del mont\'iculo (heap) */
 intPt = malloc(2*sizeof(int));
 *(intPt + 0) = A;/** intPt[0] = A */
 *(intPt + 1) = B;/** intPt[1] = B */
 printf("contenido de A = %d contenido de B = %d\n",
        *intPt,*(intPt + 1));/**Aritm\'etica de apuntador*/
 /**Imprimir las direcciones*/
 printf("Direccion de A:%X Direccion de B: %X\n",
        (unsigned int)&A,(unsigned int)&B);

 printf ("intPt = %p intPt+1= %p\n",intPt,intPt+1);
 printf ("sizeof(A) = %d\n",sizeof(A));
 printf ("sizeof(int) = %d\n",sizeof(int));
 free(intPt);

#ifndef __unix__
 getch();
 clrscr();
#endif // __unix__
 int **m; /** el tipo de dato de m es int**,
            el tipo de dato de *m es int*, y el tipo de dato de
            **m  es int */
 m = malloc(2*sizeof(int*));
 m[0] = malloc(3*sizeof(int));
 m[1] = malloc(3*sizeof(int));

 /**Col 1 */   /**Col 2*/    /**Col 3*/
 m[0][0] = 10; m[0][1] = 15; m[0][2] = 20; /**Primera fila*/
 m[1][0] = 22; m[1][1] = 33; m[1][2] = 44; /**Segunda fila */
 mostrar_arreglo2_MxN(m,2,3);



 free(m[0]);
 free(m[1]);
 free(m);

 return 0;
}/*end main()*/

