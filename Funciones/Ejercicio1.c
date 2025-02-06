/*Escribir una función que, dado un array y su longitud, calcule el mayor de los
elementos de ese array. El vector lo construiremos como un array de 10
elementos. Integra esa función en un programa y comprueba su ejecución*/


#include <stdio.h>
#include <stdlib.h>

int longitud(int *m)
{
    int longitudes[10],i,mayor;
    mayor = 0;
    for (i=0;i<10;i++)
    {
        longitudes[i] = rand()%50;
        printf(" %d - ",longitudes[i]);
        if (longitudes[i]>mayor)
        {
            mayor=longitudes[i];
        }
    } 
    *m=mayor;
    //printf("\nLa mayor de las longitudes es: %d ",mayor);
    return mayor;
}

int main ()
{
    int a=0;
    longitud(&a);
    printf("\nLa mayor de las longitudes es: %d ",a);
}


