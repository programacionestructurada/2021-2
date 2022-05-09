/**
 * debugme.c
 */
#include <stdio.h>
#include <stdlib.h>
#define BIGNUM	5000

void index_to_the_moon(int ary[]);
#ifdef CONFIG_EJEMPLO_DEBUGME
int main(void)
{
  int intary[100];
  index_to_the_moon(intary);
  exit(EXIT_SUCCESS);
}
#endif // CONFIG_EJEMPLO_DEBUGME

void index_to_the_moon(int ary[])
{
  int i;
#ifdef CONFIG_DEBUGME_CON_ERROR_EN_INDICE
  for(i = 0; i < BIGNUM; ++i)
#endif // CONFIG_CON_ERROR_EN_INDICE
#ifdef CONFIG_DEBUGME_SIN_ERROR_EN_INDICE
  for(i = 0; i < 100; ++i)
#endif // CONFIG_DEBUGEM_SIN_ERROR_EN_INDICE
    ary[i] = i;
}


