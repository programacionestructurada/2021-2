#include <stdio.h>
#include <stdlib.h>
#include "consts.h"
#if 0 //LMC 2022.07.12 Removing ceyd.c from project,
extern char CEYD[][NUMDCOLS];//because it is being hashtag included
#else //at precompilation time.
#include "ceyd.c"
#endif
int main()
{
 unsigned int i,j;
 printf("Printing Encryption Table!\n\n");
 for (i=0;i<ARRAY_SIZE(CEYD);i++) {
   for (j=0;j<NUMDCOLS;j++) {
     printf("%c&",CEYD[i][j]);
   }
   printf("\n");
 }
 return 0;
}
