
extern char global_c;
static char my_char = 'y';

int printf(char *,...);
#if 0
void funcion_en_file()
#else
void funcion_en_file(unsigned int a)
#endif
{
 static unsigned int x = 0;
 float f = 2.7;      /** x = 0 (1/a vez), x = 1 (2/a vez) */
 printf("(******************** x = %u *******************)\n",++x);
 printf("funcion_en_file(): valor de global_c = %c\n",
        global_c++);  /** a (1/a vez), A (2/a vez) */
 printf("f = %4.2f\t a = %u\n",f,a);f=7.2;
        /** 2.7\t 0 (1/a vez), 2.7\t 10 (2/a vez) */
 {
   char mc;
   mc = 'B';
   printf("funcion_en_file(): valor de mc = %c\nmy_char = %c\n",
          mc,my_char++); /** y (1/a vez), z (2/a vez) */
 }      /**  B (1/a vez), B (2/a vez) */
 #if 0 /** La variable mc no es accesible fuera del
           bloque en el que fue declarada. */
 printf("funcion_en_file(): valor de mc = %c\n",mc);
 #endif
     //printf("Valor de local_s = %i\n",0x0000ffff&local_s);
}

