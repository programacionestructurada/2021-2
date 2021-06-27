#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Ejercicio C\\'alculo del I.V.A.\n");
    //Angel Fuenleal Morales
    float venta, iva, total;
    //Carolina Perez Iturbe
    printf("Ingrese el costo sin Iva del producto\n");
    scanf("%f", &venta);
    //Elias Isaac  Eustaquio
    iva= (venta*0.16);
    //Enrique Salvador Soto
//for (venta -iva) resta(venta-iva)iva=1venta*0.16;
    //Jazmin Guadalupe Martínez Garcia
//    iva=1venta*0.16;
    total=venta+iva;

    printf("Precio con aumento: %f\n", total);
    //Estefania Sanchez Blanco
    printf("\n El I.V.A del producto es de: %f\n", iva);
    printf("/****************************************/\n");
    //Jesus Cerecedo Gallegos
    //printf("Ingresa el precio con IVA: ",total);
    //scanf("%f",&total);
    //Josue Antonio Jimenez Astorga
    //printf ("ingrese el precio con iva\n:);
    //scanf(el precio con iva es: %f.2", total);
    //Julio Cesar Gutierrez Meza
    //printf ("ingrese el precio con iva\n":);
    //scanf("el precio con iva es: %f.2", total);
    //Miicxitl Kin Garcia Ledezma
    //printf("Precio con iva:\n", venta,iva,venta + iva);
    //Kelly Allison Hernandez
    printf ("Ingrese el precio con IVA");
    //Leonardo Bazan
    //scanf ("El precio con iva es %f", total) ;
    //Lisania Amador
    scanf("%f",&total);
    //Mariana Anahi Gutierrez
    //printf("\nEl precio sin IVA es de: %f\n\n",venta);
    //precio=total-venta ;//NO error, pero no calcula lo pedido.

    //Elìas Isaac Eustaquio Avila14:31
    total=(total/1.16);
    //Ricardo Araujo Becerra13:10
    printf("El precio sin iva es %.2f\n", total);
    return 0;
}
