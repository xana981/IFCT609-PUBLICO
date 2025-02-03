/*Escribir un programa que simule el lanzamiento simultáneo de dos dados y
finalice cuando ambos dados obtengan un 6 (no es necesario que sea de manera
simultánea). Se tendrá que decir al finalizar el programa, en cuantos intentos se
ha obtenido el 6 en ambos dados, o se dará por finalizado cuando en cualquiera
de los dos dados se alcance el límite de 12 intentos. Se mostrará un mensaje cada
vez que se realice una tirada, diciendo en que número de tirada estamos*/


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //Inicializamos variables
    int dado1,dado2,i;

    //For para los 12 intentos
    for (i=1;i<=12;i++)
    {
        dado1=1+rand() % 6;
        dado2=1+rand() % 6;
        printf("\n Intento %d : Dado 1: %d  -  Dado 2: %d",i,dado1,dado2);
        if (dado1==6 || dado2==6)
        {
        break;
        }
    }
}
