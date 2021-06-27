#include <stdio.h>
#include <limits.h>
extern int sum;
void contar_veces();/*prototipo de la funci\'on contar_veces*/
int main()
{
 printf("minimun int = %i, ",INT_MIN);
 printf("maximun int = %i\n",INT_MAX);
 printf("Total bits for an int = %u\n",8*sizeof(int));
 printf("/-----------------------------------------/\n");
 sum=100;
 printf("sum = %d\n",sum);
 printf("/-----------------------------------------/\n");
 contar_veces();// <-------Primer llamado a contar_veces()
 contar_veces();// <-------Segundo llamado a contar_veces()
 contar_veces();// <-------Tercer llamado a contarveces()

 return 0;
}/*end main()*/




