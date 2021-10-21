/*
 * debugme.c
 */
#include <stdio.h>
#include <stdlib.h>
#define BIGNUM	5000

void index_to_the_moon(int ary[]);

int main(void)
{
  int intary[100];
  index_to_the_moon(intary);
  exit(EXIT_SUCCESS);
}

void index_to_the_moon(int ary[])
{
  int i;
 #if 0
  for(i = 0; i < BIGNUM; ++i)
 #else
  for(i = 0; i < 100; ++i)
 #endif
    ary[i] = i;
}


