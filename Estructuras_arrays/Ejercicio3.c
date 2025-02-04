/*Programa que permita leer una cadena de caracteres y que devuelva el número de caracteres 
que tiene dicha cadena e imprimirla al revés*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    //Declaramos variables y arrays
    int i,j,largo;
    char cadena[50];  

    //Preguntamos la cadena de caracteres
    printf("Introduce una cadena de caracteres ");
    scanf("%s",cadena[50]);

    largo = strlen(cadena);
    printf("\nEl numero de caracteres indroducido es: %d ",largo);
    //printf("\nLos caracteres introducidos son: %s ",cadena[0]);

}