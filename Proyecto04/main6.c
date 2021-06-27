#include <stdio.h>
//Arreglo de caracteres
char carr[2];
unsigned char zona[6];

//Ejemplo de un tipo de dato compuesto: una union
typedef
union ucarr2ushort {   /** el arreglo de char c */
 unsigned char c[2];   /** y el entero short Limit */
 unsigned short Limit; /** estan almacenados en */
}uc2us;                /** los mismos dos bytes de la */
                       /** memoria*/
typedef union ucarr2uint {
 unsigned char c[4];
 unsigned int Base;
} ucarr2uint;

int main(){
 carr[0] = 'a';/*En este caso, estamos formando */
 carr[1] = '\0';/*char po char una cadena de C */
                /*terminada en \0 */
 printf("sizeof(carr) = %u\n",sizeof(carr));
 printf("%s\n",carr);
 printf("sizeof(short) = %u\n",sizeof(short));
 printf("Con la instrucci\\'on de ensamblador SIDT \n");
 printf("Leemos el contenido del registro GDTR\n");
 printf("Este registro, contine el tam\\~no de la\n");
 printf("GDT menos 1, y la direccci\\'on de la primera\n");
 printf("entrada (el primer descriptor de la GDT) con\n");
 printf("la que est\\'a trabajando el microprocesador.\n");
 __asm__ __volatile__ ("sidt %0" : : "m" (zona)) ;
 uc2us u1;  /** instanciamos una uni\'on de tipo uc2us */
 u1.c[0] = zona[0];
 u1.c[1] = zona[1];
 printf("size - 1 = %d\n",u1.Limit);
 printf("Por lo tanto el valor size de la tabla GDT\n");
 printf("(Global Descriptor Table) del sistema es:\n");
 printf("size = %d\n",u1.Limit + 1);
 printf("El valor de Limit en la uni\\'on es tambi\\'en:\n");
 printf("u1.Limit = 0x%X\n",u1.Limit);
 printf("Sin embargo, al imprimir los bytes \n");
 printf("contenidos en el arreglo c de la uni\\'on\n");
 printf("obrenemos los siguiente:\n");
 printf("u1.c[0] = 0x%X\tu1.c[1] = 0x%X\n",u1.c[0],u1.c[1]);
 printf("Si el tama\\~no de la GDT es %d,\n",u1.Limit + 1);
 printf("y cada entrada de la GDT es de 8 bytes,\n");
 printf("Cu\\'antas entradas tiene esta GDT?");
 printf("Respuesta = %d/8 = %d\n",u1.Limit + 1,(u1.Limit + 1)/8);
 printf("Es decir, esta GDT tiene %d descriptores de segmento\n",
        (u1.Limit + 1)/8);
 printf("\n\nAhora imprimiremos la direcci\\'on de la primera\n");
 printf("entrada de la GDT --el descriptor nulo\n");
 ucarr2uint u2;
 u2.c[0] = zona[2];
 u2.c[1] = zona[3];
 u2.c[2] = zona[4];
 u2.c[3] = zona[5];
 printf("u2.c[0]=0x%X\tu2.c[1]=0x%X\tu2.c[2]=0x%X\tu2.c[3]=0x%X\t",
        u2.c[0],u2.c[1],u2.c[2],u2.c[3]);
 printf("\n\nY ahora imprimimos la direcci\\'on base de la GDT:\n");
 printf("Address Base = 0x%X\n",u2.Base);



 return 0;
}/*end main()*/
