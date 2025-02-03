/*Crear un programa que escriba en pantalla los números del 1 al 50 que sean
múltiplos de 3.*/

#include <stdio.h>

int main(void)
{
    //Inicializamos variables
    int num,i;
    for (i=3;i<=50;i+=3)
    {
        printf("%d - ",i);
    }
}