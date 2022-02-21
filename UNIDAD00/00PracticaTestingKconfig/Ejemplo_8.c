#include <stdio.h>

#ifdef CONFIG_EJEMPLO_VIII
int main(void)
{
 const long double pi = 3.141592653590L;
 const int days_in_week = 7;
 const int sunday = 0;
#ifdef CONFIG_EJEMPLO_VIII_ERROR_DCOMPILACION
 days_in_week = 5;
#endif
 printf("days_in_week=%i, sunday=%i, pi=%Lf\n",
        days_in_week,sunday,pi);
 return 0;
}
#endif
