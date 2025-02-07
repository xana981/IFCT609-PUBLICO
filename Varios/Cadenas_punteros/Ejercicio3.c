/*Escriba un programa en el que se declare una variable de tipo entero y se le asigne un
valor. El programa debe mostrar el valor de la variable y la dirección de memoria en la
que se almacena*/


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //Se define variable y un puntero a una variable de tipo entero y se le asigna valor:
    int variable=15;
    int *puntero;

    printf ("\nLa variable tiene como valor: %d\n",variable);
    
    
    /*Se almacena en puntero la dirección de memoria en la que se
    almacena la variable num.*/ 
    puntero=&variable;

    /*Se muestra por pantalla el valor almacenado en puntero y el
    valor almacenado en num. Para el puntero se usa el descriptor de
    formato %p, específico para punteros*/
    printf ("\nLa direccion de memoria donde se encuentra la variable es: %p",puntero);
    printf ("\nLa variable en puntero es: %d",*puntero);
    return 0;
}