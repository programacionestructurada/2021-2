#include <stdio.h>
#include <stdlib.h>
char global_c;      /**Variable global*/
void funcion_en_file(); /** prototipo de la funci\'on
                            funcion_en_file */

int main()
{
    /**Variable local, tipo almacenamiento autom\'atico */
    //auto short local_s;
    short local_s;
    global_c = 'A';
    int i = 15;
    local_s = 0xAA55;  /** 1010 1010 0101 0101*/
    printf("valor entero = %i\n",global_c);
    printf("valor char = %c\n",global_c);
    printf("Para almacenar una variable de tipo short se utilizan\n");
    printf("%u bytes\n",sizeof(short));
    printf("\n");
    printf("valor entero sin signo de local_s = %i\n",0x0000ffff&local_s);
/** 0000 0000 0000 0000  1111 1111 1111 1111  <-- 0x0000ffff
  & ???? ???? ???? ????  0000 0000 1111 1111  <-- local_s
    0000 0000 0000 0000  0000 0000 1111 1111  <-- 65535   */
/** Representacion en complemento a 2 para los n\'umeros negativos */

    /** Operador de corrimiento a nivel de bits >> */
    /** Imprimir los bits de la variable local_s */
    printf("%d",(local_s >> i) & 1);i = i - 1; /** i--; */
    printf("%d",(local_s >> i) & 1);i = i - 1;
    printf("%d",(local_s >> i) & 1);i = i - 1;
    printf("%d",(local_s >> i) & 1);i = i - 1;
    printf("%d",(local_s >> i) & 1);i = i - 1;
    printf("%d",(local_s >> i) & 1);i = i - 1;
    printf("%d",(local_s >> i) & 1);i = i - 1;
    printf("%d",(local_s >> i) & 1);i = i - 1;
    printf("%d",(local_s >> i) & 1);i = i - 1;
    printf("%d",(local_s >> i) & 1);i = i - 1;
    printf("%d",(local_s >> i) & 1);i = i - 1;
    printf("%d",(local_s >> i) & 1);i = i - 1;
    printf("%d",(local_s >> i) & 1);i = i - 1;
    printf("%d",(local_s >> i) & 1);i = i - 1;
    printf("%d",(local_s >> i) & 1);i = i - 1;
    printf("%d",(local_s >> i) & 1);i = i - 1;

    printf("\nPara almacenar una variable de tipo char se utilizan\n");
    printf("%u bytes\n",sizeof(global_c));
    funcion_en_file();

    return 0;
}
