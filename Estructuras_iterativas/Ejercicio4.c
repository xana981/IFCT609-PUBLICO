/*Realizar un programa que imprima en pantalla los números del 1 al 100, utilizando
las tres estructuras de control que conocemos (while..do, do..while, for)*/

#include <stdio.h>

int main(void)
{
    //Inicializamos variables
    int num,i;
    
    //Estructura 'for'
    printf("Con la estructura 'for'\n");
    for (i=1;i<=100;i++)
    {
        printf(" %d -",i);
    }

     //Estructura 'while'
    printf("\nCon la estructura 'while'\n");   
    i=1;
    while (i<=100)
    {
        printf(" %d -",i);
        i++;
    }
     //Estructura 'while'
    printf("\nCon la estructura 'do while'\n");  
    i=1;
    do
    {
        printf(" %d -",i);
        i++;
    } while (i<=100);
            
}    