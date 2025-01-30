/*Escribir un programa que pida una letra y detecte si es vocal*/


#include <stdio.h>

int main()
{
    /*Inicializamos variables*/
    char letra;

    /* preguntamos por la letra*/
    printf("\n Introduce una letra ");
    scanf("%c",&letra);

    if (letra=='a'||letra=='e'|| letra=='i'||letra=='o'||letra=='u'||letra=='A'||letra=='E'|| letra=='I'||letra=='O'||letra=='U')
    {
        printf("la letra %c es una vocal",letra);
    }
    else
    {
        printf("la letra %c es una consonante",letra);
    }    
    return 0;
}