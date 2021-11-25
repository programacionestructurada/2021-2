/** Test_inverse_matrix.c */
#include <stdio.h>
#include <stdlib.h>
#include "struct_matriz.h"

int main()
{
 int i,j;
 float A[3][3]={{0,3,5},{7,9,11},{13,15,17}};
 float **Apt = (float **)malloc(sizeof(float *));
 for(i = 0;i < 3;i++){
   *(Apt + i) = (float *)malloc(sizeof(float));
 }
 struct matriz *MA = (struct matriz *)malloc(sizeof(*MA));
 MA->m = MA->n = 3;
 MA->A = Apt;
 set_entries_of_A(MA,A,i,j);

 printf("PROGRAMA QUE OBTIENE LA INVERSA DE UNA MATRIZ\n");
 printf("(utiliza la funci\\'on \
struct matriz *inv(struct matriz *),\n");
 printf("que est\\'a resuelta en el archivo inverse_matrix.c)\n");
 printf("A =\n");
 print_matriz(MA);
 /** obtener la matriz inversa */
 struct matriz *MAinv = inv(MA);
 printf("\nA^{-1} =\n");
 print_matriz(MAinv);

 struct matriz *M_AxAinv = Mult(MA,MAinv);
 printf("Multiplicaci\\'on de A por su inversa\nAA^{-1} =\n");
 print_matriz(M_AxAinv);
 struct matriz *M_AinvxA = Mult(MAinv,MA);
 printf("Multiplicaci\\'on de la inversa de A por A\nA^{-1}A =\n");
 print_matriz(M_AinvxA);

 free(MA->A);
 free(MA);
 free(MAinv->A);
 free(MAinv);
 free(M_AxAinv->A);
 free(M_AxAinv);
 free(M_AinvxA->A);
 free(M_AinvxA);
 return 0;
}/*end main()*/
