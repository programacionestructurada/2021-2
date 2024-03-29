#include <stdio.h>

void print_hex_digits(char c); /** prototipo de funci\'on */

int main() {
 //short int a = 256;
 short int  b = 10; /** a = 0x100, b = 0x000a */
 char *cP;
 printf("C\'odigo fuente: Ejemplo9v1.c\n");
 printf("Imprime en hexadecimal, bytes que est\'an en el ");
 printf("address space del proceso.\n");
 printf("\nSe imprimen los bytes alto y bajo del short int b.\n");
/*Se imprimen los bytes alto y bajo del short int b. */
 print_hex_digits((char)((b>>8)&0x00ff));
 printf(" ");
 print_hex_digits((char)((b)&0x00ff));
 /*----------------------------------------------------*/
 printf("\n\nSe imprimen los bytes en: \
(char*)(&b)+2, (char*)(&b)+1, y (char*)(&b)+0.");
/**Se imprimen en hexadecimal, los bytes en las direcciones
 * (char*)(&b)+2, (char*)(&b)+1, y (char*)(&b)+0.
 */
 cP = (char*)(&b)+2;/**dir del byte "que sigue" a 0x0a */
 printf("\n");
 print_hex_digits((char)((*cP)&0x00ff)); // ??
 printf(" ");
 print_hex_digits((char)((b>>8)&0x00ff));// 00
 printf(" ");
 print_hex_digits((char)((b)&0x00ff));   // 0a

 return 0;
}/*end main()*/

/**
 * Funci\'on que imprime el valor num\'erico de
 * un caracter en hexadecimal.
 */
void print_hex_digits(char c){
  char i2c[]={'0','1','2','3','4','5','6','7',\
              '8','9','a','b','c','d','e','f' };
  printf("%c%c",
        i2c[(c>>4)&0x0f],i2c[(c)&0x0f]);
}

