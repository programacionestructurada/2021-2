/** 4_1_9_apuntadoresYCadenas.c */
#include <stdio.h>

int main()
{
 char *ptr = "Hi";
 printf("Apuntadores y cadenas\n");
 printf("%s\n",ptr);
#if 0
 *ptr = 'S';
 printf("%s\n",ptr);      /** Segmentation fault */
#else
 ptr = "Si";
 printf("%s\n",ptr);      /** OK */
#endif // 1
 return 0;
}

