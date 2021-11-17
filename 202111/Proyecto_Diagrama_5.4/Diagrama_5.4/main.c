#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE_ARR(arr)   (sizeof(arr)/sizeof(arr[0]))
//#define MAX 100
const int MAX = 100;
void mostrar_alumno_y_promedio(char Nom[MAX][128],
                               float *Prom,
                               int cant_d_alumnos);
void remove_backslash_n(char cad[128],unsigned int tam);
void proceso(char N[MAX][128],float *P,int A);

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

 P = (float *)malloc((A+1)*sizeof(float));
 I = 1;
 while (!(I>A)) {
   printf("Nombre del alumno(a): ");
   getline(&line, &len, stdin);
   strcpy(N[I],line);
   remove_backslash_n(N[I],SIZE_ARR(N[I]));
   line = NULL;
   len = 0;
   printf("Promedio del alumno(a): ");
   scanf("%f%*c",&P[I]);
   I = I + 1;
 }
 mostrar_alumno_y_promedio(N,P,A);

 /**PROCESO*/
 proceso(N,P,A);

 /**SALIDA*/
 mostrar_alumno_y_promedio(N,P,A);

 return 0;
}/*end main()*/

#if 0
void mostrar_alumno_y_promedio(char Nom[MAX][128],
                               float *Prom,
                               int cant_d_alumnos)
{
  int i;
  #ifdef __unix__
  int m = 0,j = 0,k = 0;
  #endif
  printf("%-32s%14s\n","NOMBRE","PROMEDIO");
  for (i = 1;i<=cant_d_alumnos;i++){
    printf("%-32s",Nom[i]);
    #ifdef __unix__
    m = 0; j = 0; k = 0;
    while (Nom[i][m] != '\0') {
      /** https://www.utf8-chartable.de/
          For systems that use UTF-8.  */

      if ( /* ñ */
           ((Nom[i][m] == '\xC3') && (Nom[i][m+1] == '\xB1')) ||
           ((Nom[i][m] == '\xC3') && (Nom[i][m+1] == '\x91'))
           /* Ñ */
         ) {
        /** cad[i] == 'Ñ' produces warning. */
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
}/*end mostrar_alumno_y_promedio()*/
#endif // 0

void remove_backslash_n(char cad[128],unsigned int tam)
{
 unsigned int i = 0;
 while ((cad[i] != '\n') && (i < tam)) {
   i++;
 }
 cad[i] = '\0';
}/*end remove_backslash_n()*/
