#include <stdio.h>
//#include <conio.h>
#include <stdlib.h> /*long int rand(),
                      void srand(unsigned int seed)*/
#define BIDIM   3
#define renglon 10
#define columna 10

#if BIDIM == 1
int matriz[3][2]={{1,2},{3,4},{5,6}};
#endif // BIDIM

int main(){
#if BIDIM == 1
 int i,j;
#endif // BIDIM
#if BIDIM == 2
 int tabla[3][2],i,j;
#endif // BIDIM

#if BIDIM == 1
 for (i = 0;i < 3;i++){
  for (j = 0; j < 2;j++){
   printf("%3d",matriz[i][j]);
  }
  printf("\n");
 }
#endif // BIDIM
#if BIDIM == 2
/** Se crea un arreglo de 3 filas y 2 columnas
    cuyas entradas se generan pseudoaleatoriamente.
*/
 srand(0);
 for (i = 0;i < 3;i++){
  for (j = 0; j < 2;j++){
   tabla[i][j] = 1 + rand()%25;
  }
 }
 for (i = 0;i < 3;i++){
  for (j = 0; j < 2;j++){
   printf("%3d",tabla[i][j]);
  }
  printf("\n");
 }

#endif // BIDIM
#if BIDIM == 3
/**Se realiza la suma de dos matrices (arreglos de enteros)
 * de 4 filas y 4 columnas
 */
 int m1[renglon][columna],m2[renglon][columna],m3[renglon][columna];
 int i,j,col_1,ren_1,col_2,ren_2;
 int band_1;
 do {
    printf("\n\tMatriz 1, N\\'umero de renglones y de columnas ");
    scanf("%d %d",&ren_1,&col_1);
    printf("\n\tMatriz 2, N\\'umero de renglones y de columnas ");
    scanf("%d %d",&ren_2,&col_2);
    if (ren_1 == ren_2 && col_1 == col_2)
      band_1 = 0;
    else{
      band_1 = 1;
      printf("Datos no v\\'alidos\n");
    }
 } while(band_1);
 /*Llenar la primera matriz*/
 printf("\nmatriz 1\n");
 for (i = 0; i < ren_1; i++){
   for (j = 0; j < col_1; j++){
    printf("m1[%d][%d] = ",i,j);
    scanf("%d",&m1[i][j]);
   }
 }
 /*Llenar la segunda matriz*/
 printf("\nmatriz 2\n");
 for (i = 0; i < ren_1; i++){
   for (j = 0; j < col_1; j++){
    printf("m2[%d][%d] = ",i,j);
    scanf("%d",&m2[i][j]);
   }
 }
 /*suma*/
 for (i = 0; i < ren_1; i++){
   for (j = 0; j < col_1; j++){
    m3[i][j] = m1[i][j] + m2[i][j];
   }
 }
 /*mostrar suma*/
 printf("\nResultado\n");
 for (i = 0;i < ren_1;i++){
  for (j = 0; j < col_1;j++){
   printf("%3d",m3[i][j]);
  }
  printf("\n");
 }
#endif // BIDIM

 return 0;
}/*end main*/
//C:\Users\LMC\2021\Proyecto04\11ArreglosBidimensionales\ABidimensionales.c|27|aviso: declaración implícita de la función 'srandom'; ¿quiso decir 'srand'? [-Wimplicit-function-declaration]|
