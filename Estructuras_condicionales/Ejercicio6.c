/*Programa que lea un caracter de teclado e informe si es alfabetico (A-Z y a-z), numerico (entre 0-9) o puntuacion (.,;:)
Si no es ninguno de estos el programa debe mostrar "El caracter es desconocido"*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    /*Inicializamos variables y preguntamos el caracter*/
    char a;
    printf("Introduce un caracter por teclado ");
    scanf("%c",a);
    if (a=="0"||a=="1"||a=="2"||a=="3"||a=="4"||a=="5"||a=="6"||a=="7"||a=="8"||a=="9")
    {
        printf("El valor introducido es un número");
    }
    else
    {
        printf("El caracter es desconocido");
    }
    return 0;
}   
