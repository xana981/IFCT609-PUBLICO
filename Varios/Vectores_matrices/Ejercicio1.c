/*Escriba un programa que realice la lectura consecutiva, por teclado, de números
enteros hasta que se introduzca el valor 0 (cero) o se hayan introducido 20 números, y
los almacene en un vector, en orden inverso al de su introducción*/


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j=19;
    int num[50];
    printf("Introduce numeros (20 posibilidades - 0 (salir)\n");
    for (i=1;i<=20;i++)
    {
        scanf("%d",&num[j]);
        //printf("**j: %d/ i: %d ** /  celda: %d  ",j,i,num[j]);     
        if (num[j]==0)
        {
            printf("\nHas dado a salir\n");
            break;  
        }
        if (i==20)
        {
            printf("\nHas acabado los intentos\n");
        }
        j--;
    }
    for (j;j<20;j++)
    {
        printf(" %d - ",num[j]);
    }
}


