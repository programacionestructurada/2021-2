#include <stdio.h>
//Tipos de variables, globales locales static etc.
int sum;
/*
int main()
{
    sum = 0;
    sum = sum + 1;
    printf("sum = %d\n",sum);
    return 0;
}
*/
/** Funci\'on que cuenta cuantas veces ha sido
    llamada
*/
void contar_veces()
{/**Aqu\'i se usa una var local static*/
 static unsigned int count = 0;
 count = count + 1;
 printf("\n\"contar_veces()\" ha sido llamada %u veces\n",
count);
}



