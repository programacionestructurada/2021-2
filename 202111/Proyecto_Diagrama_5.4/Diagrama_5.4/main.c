#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
void mostrar_alumno_y_promedio(char Nom[MAX][128],
                               float *Prom,
                               int cant_d_alumnos);
void remove_backslash_n(char cad[128]);

int main()
{
 int I;//J;
 float *P;
 char N[MAX][128];
 int A;
 char *line = NULL;
 size_t len = 0;
 #if 0
 float PA;
 char NA[128];line
 #endif
 printf("PROMEDIOS (Diagrama 5.4)\n");
 /**ENTRADA*/
 printf("Introduce la cantidad de alumnos: ");
 scanf("%d%*c",&A);
 //fflush(stdin);
 //A=2;
 P = (float *)malloc((A+1)*sizeof(float));
 I = 1;
 while (!(I>A)) {
   printf("Nombre del alumno(a): ");
   //scanf("%s",N[I]);
   //fflush(stdin);
   getline(&line, &len, stdin);

   strcpy(N[I],line);
   remove_backslash_n(N[I]);
   line = NULL;
   len = 0;
   printf("Promedio del alumno(a): ");
   scanf("%f%*c",&P[I]);
   //fflush(stdin);
   I = I + 1;
 }
 mostrar_alumno_y_promedio(N,P,A);
 return 0;
}/*end main()*/


void mostrar_alumno_y_promedio(char Nom[MAX][128],
                               float *Prom,
                               int cant_d_alumnos)
{
  int i;
  int m = 0,j = 0,k = 0;
  printf("%-32s%14s\n","NOMBRE","PROMEDIO");
  for (i = 1;i<=cant_d_alumnos;i++){
    m = 0; j = 0; k = 0;
    printf("%-32s",Nom[i]);
    #ifdef __unix__
    while (Nom[i][m] != '\0') {
      /** https://www.utf8-chartable.de/
          For systems that use UTF-8.  */

      if ( /* ñ */
           ((Nom[i][m] == '\xC3') && (Nom[i][m+1] == '\xB1')) ||
           ((Nom[i][m] == '\xC3') && (Nom[i][m+1] == '\x91'))
           /* Ñ */
         ) {
        /** cad[i] == 'Ñ' produces warning :-( */
        j++;
        m++;
      }
      m++;
    }
    #if 0
    if (j){
      printf("j=%d\n",j);
    }
    #endif
    while (k < j) {
      printf(" ");
      k++;
    }
    #endif // __unix__
    printf("%14.1f\n",Prom[i]);
  }
}

void remove_backslash_n(char cad[128])
{
 int i = 0;//,j = 0,k = 0;
 while (cad[i] != '\n') {
   i++;
 }
 cad[i] = '\0';
}/*end remove_backslash_n()*/
