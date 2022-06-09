#include <stdio.h>
#include <limits.h>

#ifdef CONFIG_EJEMPLO__IV
int main(void)
{
 char lower_a = 'a';
 char lower_m = 'm';

 printf("minimum char = %i, ",CHAR_MIN);
 printf("maximum char = %i\n",CHAR_MAX);

 printf("after '%c' comes '%c'\n",lower_a,lower_a+1);
 printf("uppercase is '%c'\n",lower_m-'a'+'A');

 return 0;
}
#endif
