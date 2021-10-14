#include <stdio.h>

void print_hex_digits(char c); /** prototipo de funci\'on */

/** print_four_bytes_in_hex() imprime los cuatro bytes
 *  menos significativos (del m\'as significativo al menos
 *  significativo) de la variable de tipo entero que se le
 *  pasa como argumento.
 */
void print_four_bytes_in_hex(int si);
void print_four_bytes_in_hex1(short int si);

int main() {
// short int a = 256;
 short int b = 10; /** a = 0x100, b = 0x000a */
 char *cP;/** En print_four_bytes_in_hex(b); 0x000a se
              promover\'a a 0x0000000a */
 /*******************************************************/
 print_hex_digits((char)((b>>8)&0x00ff));
 printf(" ");
 print_hex_digits((char)((b)&0x00ff));
 /*******************************************************/
 cP = (char*)(&b)+2;/**dir del byte "que sigue" a 0x0a */
 printf("\n");
 print_hex_digits((char)((*cP)&0x00ff));
 print_hex_digits((char)((b>>8)&0x00ff));
 printf(" ");
 print_hex_digits((char)((b)&0x00ff));
 /********************************************************/
 /** 2021.10.01 */
 cP = (char*)(&b)+3;                       /** Reescribir */
 printf("\n");                             /** estas */
 print_hex_digits((char)((*cP)&0x00ff));   /** l\'ineas */
 printf(" ");                              /** como */
 cP = (char*)(&b)+2;                       /** una */
 print_hex_digits((char)((*cP)&0x00ff));   /** funci\'on */
 printf(" ");                              /** */
 print_hex_digits((char)((b>>8)&0x00ff));  /** */
 printf(" ");                              /** */
 print_hex_digits((char)((b)&0x00ff));     /** */
 /*******************************************************/
 printf("\nprint_four_bytes_in_hex(b):\n");
 print_four_bytes_in_hex(b);

 //printf("a = %hi, b = %f\n",a,
 //       *((float *)(&b)));

 return 0;
}/*end main()*/

void print_hex_digits(char c){
  char i2c[]={'0','1','2','3','4','5','6','7',\
              '8','9','a','b','c','d','e','f' };
  printf("%c%c",
        i2c[(c>>4)&0x0f],i2c[(c)&0x0f]);
}

void print_four_bytes_in_hex(int b){
// char *cP;
 //cP = (char*)(&b)+3;
 //printf("\n");
 print_hex_digits((char)((b>>24)&0x000000ff));
 printf(" ");
// cP = (char*)(&b)+2;
 print_hex_digits((char)((b>>16)&0x000000ff));
 printf(" ");
 print_hex_digits((char)((b>>8)&0x000000ff));
 printf(" ");
 print_hex_digits((char)((b)&0x000000ff));
}

