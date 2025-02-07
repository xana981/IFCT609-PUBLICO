/*Escriba un programa que muestre en la pantalla un mensaje de presentación, pregunte
al usuario su nombre y le salude con un mensaje personalizado que use el nombre que
se acaba de leer*/


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char nombre[50],i;
    printf("Introduce tu nombre ");
    scanf("%s",nombre);

    for (i=0;i<15;i++)
    {
        printf ("%c",nombre[i]);
    }  

}    