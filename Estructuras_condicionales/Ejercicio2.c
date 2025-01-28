/*Realizar un programa que solicite al operador ingresar dos números y muestre
por pantalla el mayor de ellos.*/

#include <stdio.h>

int main(void)
{
    /*Inicializamos variable y preguntamos por los valores*/
    int num1,num2;
    
    printf("\n Introduce el primer valor ");
    scanf("%d",&num1);
    printf("\n Introduce el segundo valor ");
    scanf("%d",&num2);   

    /*Realizamos condicional*/
    if (num1>num2)
        {
            printf("El valor mayor es el primero_ %d",num1);
        }
    else
        {
            printf("El valor mayor es el segundo_ %d",num2);
        }   
    return 0;   
} 