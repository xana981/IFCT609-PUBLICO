/*Realizar un programa que lea cuatro valores numéricos e informar su suma y promedio*/
#include <stdio.h>

int main(void)
{
    /*Pide los números y asigna variables*/
    int num1,num2,num3,num4;
    float promedio,suma;
    printf("\n Introduce el valor 1: ");
    scanf("%d",&num1);
    printf("\n Introduce el valor 2: ");
    scanf("%d",&num2);
    printf("\n Introduce el valor 3: ");
    scanf("%d",&num3);
    printf("\n Introduce el valor 4: ");
    scanf("%d",&num4);
       
    /*Calcula la suma de los números*/
    suma=num1+num2+num3+num4;
    printf("\n El resultado de la suma de los valores es: %.0f",suma);

    /*Calcula el promedio*/
    promedio = suma/4; 
    printf("\n El resultado del promedio de los 4 valores: %.2f",promedio);
    return 0;

}