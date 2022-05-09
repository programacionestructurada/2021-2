/** fun_print_array_color.c */
#include <stdio.h>
#define USO_DE_ALMCENAMIENTO_EXTERN
#ifndef USO_DE_ALMCENAMIENTO_EXTERN
#if 1
char color[4]; /** Error definiciones m\'ultiples de color */
#else
//char color[4];/**Error color indefinido*/
#endif // 1
#else
extern char color[4];/**La soluci\'on: usar almacenamiento externo*/
#endif // USO_DE_ALMCENAMIENTO_EXTERN
short global_var = 100;
short count = 10;

void print_array_color()
{
 static short count = 0;
 putchar(color[0]);
 putchar(color[1]);
 putchar(color[2]);
 putchar(color[3]);
 count++;
 printf("\nprint_array_color() has been called %d times",
         count);
}

void f()
{
 //printf("\nglobal_var = %i\n",global_var);
 printf("\ncount = %i\n",count++);//10
}
