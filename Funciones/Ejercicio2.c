/*Escribe una función que, dado un vector y su tamaño, calcule el promedio de
todos los valores dentro de ese vector pero que sean mayores que un numero
dado que introducirá el usuario por teclado. Ese número de referencia podrá ser
un argumento o una variable local a la función. Comprueba su ejecución
integrando la función en un programa principal.*/

#include <stdio.h>
#include <stdlib.h>

int promedio(int numero)
{
    int valores[10],i,suma=0,contador=0;

    for (i=0;i<10;i++)
    {
        valores[i] = rand()%100; //introducimos valores en tabla aleatorios y los imprimimos por pantalla
        printf(" %d - ",valores[i]);

        //condicionamos el promedio debe de ser mayor que el numero que pedimos por teclado
        if (valores[i]>=numero)
        {
            suma = suma + valores[i];
            contador++;
        }    
    } 
    //Calculamos el promedio
    //promedio=suma/contador;

    return suma/contador;
}

int main ()
{
    int a,minimo;
        
    //preguntamos el valor minimo desde el cual hacer el promedio
    printf("\nIntroduce el numero desde el que quieres hacer el promedio ");
    scanf("%d",&minimo);
    
    //introducimos los valores de la funcion
    a=promedio(minimo);
    printf("\nEl promedio de todos los valores es: %d ",a);
}


