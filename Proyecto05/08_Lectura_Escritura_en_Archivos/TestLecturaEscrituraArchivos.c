/** TestLecturaEscrituraArchivos.c */
#include <stdio.h>
#include <string.h>
#define SIZE_ARR(arr)   (sizeof(arr)/sizeof(arr[0]))

char line01[]=" Esta es l\\'inea 1 del archivo\n";
char line02[]="L\\'inea n\\'umero 2\n";
char line03[]="Esta es la tercera l\\'inea del archivo\n";
char buf[1024];

int main(){
 FILE *filePt;
 size_t cantidad=0,cra; /*ch_read_amount*/
 int cpa=0; /*ch_print_amount*/

 filePt = fopen("archivoprueba.txt","w");
 fwrite((void*)line01,1,SIZE_ARR(line01),filePt);
 fwrite((void*)line02,1,SIZE_ARR(line02),filePt);
 fwrite((void*)line03,1,SIZE_ARR(line03),filePt);
 fclose(filePt);

 cantidad += strlen(line01);
 cantidad += strlen(line02);
 cantidad += strlen(line03);
 cantidad++;
 filePt=fopen("archivoprueba.txt","r");
 cra = fread((void*)buf,1,cantidad,filePt);
 printf("Items leidos: %d\n",cra);
 cpa += printf("%s",buf);
 cpa++;
 cpa += printf("%s",buf+cpa);
 cpa++;
 cpa += printf("%s",buf+cpa);

 fclose(filePt);
 return 0;
}/*end main()*/

