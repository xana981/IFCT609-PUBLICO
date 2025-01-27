/*Escribir un programa en el cual se ingresen cuatro números, calcular e informar
la suma de los dos primeros y el producto del tercero y el cuarto.*/
#include <stdio.h>

int main(void)
{
    /*Pide los números y asigna variables*/
    int num1,num2,num3,num4,suma,producto;
    printf("\n Introduce el valor 1: ");
    scanf("%d",&num1);
    printf("\n Introduce el valor 2: ");
    scanf("%d",&num2);
    printf("\n Introduce el valor 3: ");
    scanf("%d",&num3);
    printf("\n Introduce el valor 4: ");
    scanf("%d",&num4);
       
    /*Calcula la suma del primero y del segundo número*/
    suma=num1+num2;
    printf("\n El resultado de la suma del primer y segundo valor es: %d",suma);

    /*Calcula el producto del tercer y del segundo número*/
    producto=num3*num4;
    printf("\n El resultado del producto del tercer y cuarto valor es: %d",producto);


}