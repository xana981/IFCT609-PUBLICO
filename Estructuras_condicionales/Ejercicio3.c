/*Realizar un programa que solicite la carga por teclado de dos números, si el
primero es mayor al segundo informar su suma y diferencia, en caso contrario
informar el producto y la división del primero respecto al segundo*/

#include <stdio.h>

int main(void)
{
    /*Inicializamos variables y preguntamos por los valores*/
    int num1,num2;
    
    printf("\n Introduce el primer valor ");
    scanf("%d",&num1);
    printf("\n Introduce el segundo valor ");
    scanf("%d",&num2);   

    /*Condicionamos dependiendo del valor*/
    if (num1>num2)
    {
        printf("El valor mayor es el primero \n La suma de los numeros es %d""\n y la resta es %d",num1+num2,num1-num2);
    }
    else
    {
       printf("El valor mayor es el segundo \n La multiplicacion de los numeros es %d""\n y la division es %.2f",num1*num2,(float)num1/num2);
    }   
    return 0;
    
}