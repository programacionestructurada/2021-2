#include <stdio.h>
extern const int MAX;

void mostrar_alumno_y_promedio(char Nom[MAX][128],
                               float *Prom,
                               int A)
{
  int I,J,m,k;
  #ifdef __unix__
  m = 0,J = 0,k = 0;
  #endif
  printf("%-32s%14s\n","NOMBRE","PROMEDIO");
  for (I = 1;I<=A;I++){
    printf("%-32s",Nom[I]);
    #ifdef __unix__
    m = 0; J = 0; k = 0;
    while (Nom[I][m] != '\0') {
      /** https://www.utf8-chartable.de/
          For systems that use UTF-8.  */

      if ( /* ñ */
           ((Nom[I][m] == '\xC3') && (Nom[I][m+1] == '\xB1')) ||
           ((Nom[I][m] == '\xC3') && (Nom[I][m+1] == '\x91'))
           /* Ñ */
         ) {
        /** cad[I] == 'Ñ' produces warning. */
        J++;
        m++;
      }
      m++;
    }
    #if 0
    if (j){
      printf("j=%d\n",j);
    }
    #endif
    while (k < J) {
      printf(" ");
      k++;
    }
    #endif // __unix__
    printf("%14.1f\n",Prom[I]);
  }
}/*end mostrar_alumno_y_promedio()*/


