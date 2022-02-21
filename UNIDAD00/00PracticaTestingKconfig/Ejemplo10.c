#ifdef CONFIG_EJEMPLO___X
int main(void)
{
 int i = 5, j = 4, k;
 double f = 5.0, g = 4.0, h;

 k = i / j;
#ifdef CONFIG_EJEMPLO___X_PRINTF
 printf("k=%f\n",k);
#endif
 h = f / g;
#ifdef CONFIG_EJEMPLO___X_PRINTF
 printf("h=%f\n",h);
#endif
 h = i / j;
#ifdef CONFIG_EJEMPLO___X_PRINTF
 printf("h=%f\n",h);
#endif

 return 0;
}
#endif
