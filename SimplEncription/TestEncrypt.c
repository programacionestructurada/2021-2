/**TestEncrypt.c*/
#include <string.h>
#include "consts.h"
#include "ceyd.c"

char msg[] = "BUENOS DIAS ALEGRIA, BUENOS DIAS SENIOR SOL";
//char clave[] = "CANCION";
char clave[] = "AIDE";

unsigned short get_col(char letter);
unsigned short get_fil(char letter);

int main(int argc,char *argv[])
{
 unsigned short i,fil,col;
 printf("Testing Encryption:\n\n");
 printf("Mensaje original:\n");
 printf("%s\n",msg);
 printf("Mensaje codificado:\n");
 /**Encrypting original message*/
 unsigned short key_len = strlen(clave);
 for (i=0;i<ARRAY_SIZE(msg)-1;i++) {
   printf("%c",clave[i%key_len]);
 }printf("\n");
 for (i=0;i<ARRAY_SIZE(msg)-1;i++) {
   fil=get_fil(msg[i]);
   col=get_col(clave[i%key_len]);
   //printf("%c fil=%i col=%i ",msg[i],fil,col);printf("%c\n",CEYD[fil][col]);
   //printf("fil=%i col=%i ",fil,col);printf("%c\n",msg[i]);
   //printf("%c fil=%i col=%i CEYD[%i][%i]=%c\n",msg[i],fil,col,fil,col,CEYD[fil][col]);
   printf("%c",CEYD[fil][col]);
 }
 printf("\n");
 return 0;
}/*end main()*/

unsigned short get_fil(char letter)
{
 unsigned short i;
 for(i=0;i<ARRAY_SIZE(CEYD);i++){
   if (CEYD[i][0]==letter){
     return i;
   }
 }
 return -1;
}

unsigned short get_col(char letter)
{
 unsigned short i;
 for(i=0;i<ARRAY_SIZE(CEYD[0]);i++){
   if (CEYD[0][i]==letter){
     return i;
   }
 }
 return -1;
}


