#include <stdio.h>
//#include <conio.h>
/** Add 00CommonFiles/ to compiler's search directories */
#include <conio2.h>
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
 * de hasta 10 filas y 10 columnas.
 */
 int m1[renglon][columna],m2[renglon][columna],m3[renglon][columna];
 int i,j,col_1,ren_1,col_2,ren_2,posX,posY;
 int band_1;
 clrscr();/** Add conio.c to your project's target */
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


 textcolor(5);
 gotoxy(6,7);
 /*Llenar la primera matriz*/
 cprintf("matriz 1");
 posX = 5; posY = 9;
 for (i = 0; i < ren_1; i++){
   for (j = 0; j < col_1; j++){
    printf(" ");
    gotoxy(posX,posY);
    scanf("%d",&m1[i][j]);
    posX += 2;
   }
   posX = 5;
   posY += 2;
 }

 gotoxy(40,7);
 /*Llenar la segunda matriz*/
 cprintf("matriz 2");
 posX = 40; posY = 9;
 for (i = 0; i < ren_1; i++){
   for (j = 0; j < col_1; j++){
    gotoxy(posX,posY);
    printf(" ");
    scanf("%d",&m2[i][j]);
    posX += 2;
   }
   posX = 40;
   posY += 2;
 }
 /*suma*/
 for (i = 0; i < ren_1; i++){
   for (j = 0; j < col_1; j++){
    m3[i][j] = m1[i][j] + m2[i][j];
   }
 }
 posX = 30; posY = 30;
 gotoxy(28,28);
 textcolor(5);
 /*mostrar suma*/
 cprintf(" Resultado");
 for (i = 0;i < ren_1;i++){
  for (j = 0; j < col_1;j++){
   gotoxy(posX,posY);
   printf("%d\t",m3[i][j]);
   posX += 3;
  }
  posX = 30;
  posY += 3;
 }
 getch();
#endif // BIDIM

 return 0;
}/*end main*/
//C:\Users\LMC\2021\Proyecto04\11ArreglosBidimensionales\ABidimensionales.c|27|aviso: declaración implícita de la función 'srandom'; ¿quiso decir 'srand'? [-Wimplicit-function-declaration]|
