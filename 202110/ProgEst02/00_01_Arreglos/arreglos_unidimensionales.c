#include <stdio.h>
#include <string.h>
#define sa  saludo
/** Arreglo declarado como variable global */
char saludo[32]; /** \'indices 0,1,2,3,4,...,31 */
char otarr[] = "WXYZ"; /*Una cadena en C*/
              /* {'W','X','Y','Z','\0'} */
int main(){
 char *cPt; /**cPt es de tipo apuntador a char */
 saludo[0] = 'H';saludo[1] = 'O';saludo[2] = 'L';
 saludo[3] = 'A';saludo[4] = ',';saludo[5] = ' ';
 saludo[6] = 'B';saludo[7] = 'U';saludo[8] = 'E';
 saludo[9] = 'N';saludo[10] = 'A';saludo[11] = 'S';
 saludo[12] = ' ';saludo[13] = 'T';saludo[14] = 'A';
 saludo[15] = 'R';saludo[16] = 'D';saludo[17] = 'E';
 saludo[18] = 'S';saludo[19] = ' ';saludo[20] = '%';
 saludo[21] = '/';saludo[22] = '\0';saludo[23] = '*';
 /** saludo[23] equivale a *(saludo+23) */

 printf("%c",sa[0]);printf("%c",sa[1]);
 printf("%c",sa[2]);printf("%c",sa[3]);/** HOLA */
 printf("\n(*************************)\n");
 cPt = saludo;
 printf("En la direcci\\'on %p se tiene:%c, %d\n",
        cPt,*cPt,*cPt); // <Un n\'umero> H, 72
 cPt++;
 printf("En la direcci\\'on %p se tiene:%c, %d\n",
        cPt,*cPt,*cPt); // <Un n\'umero> O, < >
 cPt++;
 printf("En la direcci\\'on %p se tiene:%c, %d\n",
        cPt,*cPt,*cPt); // <Un n\'umero> L, < >
 cPt++;
 printf("En la direcci\\'on %p se tiene:%c, %d\n",
        cPt,*cPt,*cPt); // <Un n\'umero> A, 65
 cPt++;
 printf("En la direcci\\'on %p se tiene:%c, %d\n",
        cPt,*cPt,*cPt); // <Un n\'umero> ' ' < >
 cPt++;
 printf("En la direcci\\'on %p se tiene:%c, %d\n",
        cPt,*cPt,*cPt); // <Un n\'umero> ' ' < >
 cPt++;
 for (;cPt <= saludo+23;cPt++) {
   printf("En la direcci\\'on %p se tiene:%c, %d\n",
        cPt,*cPt,*cPt);
 }
 printf("\n(*************************)\n");
 printf("%s",saludo);printf("|");// HOLA, BUENAS TARDES|
 cPt = otarr;
 printf("\nDirecci\\'on del primer elemento de otarr:%p\n",
        otarr);
 puts(saludo);//puts("\n");
 char otarr[] = "ABCD";
 puts(otarr);puts("|");
 char str[128];
 sprintf(str,"En la direcci\\'on %p se tiene:%c, %d\n",
         saludo+8,*(saludo+8),*(saludo+8));
 printf("\n/*************************/\n");
 printf("%s",str);
 puts(str);
 sprintf(str,"En la direcci\\'on %p se tiene:%c, %d\n",
         saludo+9,saludo[9],*(saludo+9));
 puts(str);
 unsigned int tam = strlen(saludo);
 printf("La cadena \"saludo\" tiene %u bytes.\n",tam);
 strcpy(str,saludo);
 tam = strlen(str);
 printf("La cadena \"str\" tiene %u bytes.\n",tam);
 printf("%s\n",str);
 if (!strcmp(str,saludo)){
  puts("Las cadenas str y saludo son iguales");
 }
 if (strcmp(str,otarr) > 0){
    puts("La cadena str es mayor que la cadena otarr");
 }
 return 0;
}/*end main()*/

