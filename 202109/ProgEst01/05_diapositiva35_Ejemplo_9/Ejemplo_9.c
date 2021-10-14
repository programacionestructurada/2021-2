#include <stdio.h>
union test_shortint {
 short int A;         /** sizeof(short int) devuelve 2 */
 char char_d_A[sizeof(short int)];
};

/** ("Las direcciones crecen hacia abajo")
   &b         |     00    |  <---byte alto
(char*)(&b)+1 |   0x0a    |  <---byte bajo
(char*)(&b)+2 |           |  <---Lo que sea que est\'e en estos
(char*)(&b)+3 |           |  <---bytes es lo que da origen al
                           n\'umero que observamos que
                           imprime la sentencia
        printf("a = %hi, b = %f\n",a,*((float *)(&b)));






*/
void print_hex_digits(char c); /** prototipo de funci\'on */

int main() {
 short int a = 256, b = 10; /** a = 0x100, b = 0x000a */
#if 1 //2021.09.29
 union test_shortint test_a;
 //printf("sizeof(short int)=%u\n",sizeof(short int));
 test_a.A = a;
 printf("a = %hi%c,b = %hi\n",a,a,b);//
 printf("%x:%x %x:%x\n",
        test_a.char_d_A+1,
        test_a.char_d_A[1],
        test_a.char_d_A+0,
        test_a.char_d_A[0]);
 #if 0
 scanf("%hi",&a);
 printf("a = %hi b = %hi\n",a,b);
 #else
 a = 0;

 test_a.A = a;
 printf("a = %hi %c,b = %hi\n",a,a,b);
 //printf("%x %x\n",test_a.char_d_A[1],test_a.char_d_A[0]);
 printf("%x:%x %x:%x\n",
        test_a.char_d_A+1,
        test_a.char_d_A[1],
        test_a.char_d_A+0,
        test_a.char_d_A[0]);
 a = 256;
 printf("Type a number: ");
 scanf("%c",&a);
 test_a.A = a;
 #endif
 // printf("%x %x\n",test_a.char_d_A[0],test_a.char_d_A[1]);
// /**     31  1 */
// printf("(3)*16*16 + (1)*16 + (1)*1 = %i\n",
//        (3)*16*16 + (1)*16 + (1)*1);
 //printf("%x %x\n",test_a.char_d_A[1],test_a.char_d_A[0]);
 printf("%x:%x %x:%x\n",
        test_a.char_d_A+1,
        test_a.char_d_A[1],
        test_a.char_d_A+0,
        test_a.char_d_A[0]);
 /**     0  31 */
 printf("a = %hi %c,b = %hi\n",a,a,b);
 /*printf("(1)*16*16 + (3)*16 + (1)*1 = %i\n",
        (1)*16*16 + (3)*16 + (1)*1);*/
 printf("&a=%x\n",&a);
#endif
#if 0
 char int2char[16] = { /** declaraci\'on por extensi\'on */
 /* 0*/  '0',
 /* 1*/  '1',
 /* 2*/  '2',
 /* 3*/  '3',
 /* 4*/  '4',
 /* 5*/  '5',
 /* 6*/  '6',
 /* 7*/  '7',
 /* 8*/  '8',
 /* 9*/  '9',
 /*10*/  'a',/** b=10=0x000a, (b>>8)& 0x0a00 = 0x0000 */
 /*11*/  'b',/** (0000000000001010)>>8=????????00000000 */
 /*12*/  'c',/** (????????00000000)&(0000000011111111) */
 /*13*/  'd',/** =0000000000000000  */
 /*14*/  'e',
 /*15*/  'f',/** (0000000000001010)&(0000000011111111)*/
 };          /** = 0000000000001010 = 0x000a */
 printf("Contenido de b (byte 1): %d\n",(b>>8)&0x00ff);// 0
 printf("Contenido de b (byte 0): %d\n",(b)&0x00ff);//0x000a
 char tmp = (char)((b>>8)&0x00ff);/*byte 1 = 0x00 */
 printf("%c%c ",
        int2char[(tmp>>4)&0x0f],int2char[(tmp)&0x0f]);// 00
    /** 0x00>>4=?0, 0x?0 & 0x0f = 0x00, int2char[0] es '0' */
    /**(tmp)&0x0f= 0x00 & 0x0f =0x00, int2char[0] es '0' */
 tmp = (char)((b)&0x00ff);        /*byte 0 = 0x0a */
 printf("%c%c \n",
        int2char[(tmp>>4)&0x0f],int2char[(tmp)&0x0f]);// 0a
/** (tmp>>4)&0x0f = (0x?0)&0x0f = 0x00, int2char[0] es '0' */
/** (tmp)&0x0f = 0x0a, int2char[0x0a] es 'a' */


 printf("a = %hi, b = %f\n",a,
        *((float *)(&b)));
#endif

 return 0;
}/*end main()*/

void print_hex_digits(char c){
  char i2c[]={'0','1','2','3','4','5','6','7'
              '8','9','a','b','c','d','e','f' };
  printf("%c%c ",
        i2c[(c>>4)&0x0f],int2char[(c)&0x0f]);
}
