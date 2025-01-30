/* Escribir un programa que, dado los lados de un triangulo a, b, y c, indique si es equilatero (tres lados iguales)
isosceles (solo 2 lados iguales) o escaleno (tres lados diferentes) y calcule su area*/

#include <stdio.h>

int main(void)
{
    /*Inicializamos variables y preguntamos por los lados*/
    float area;
    int lado1,lado2,lado3;
    
    printf("\n Introduce el primer lado ");
    scanf("%d",&lado1);
    printf("\n Introduce el segundo lado ");
    scanf("%d",&lado2);   
    printf("\n Introduce el tercer lado ");
    scanf("%d",&lado3);

    /*Condicionamos para saber si hay lados iguales*/
    if (lado1==lado2&&lado2==lado3)
    {
        printf("\n\tEl triangulo es equilatero");
    }
    else if (lado1==lado2||lado1==lado3||lado2==lado3)
    {
        printf("\n\tEl triangulo es isosceles");
    }
    else
    {
        printf("\n\tEl triangulo es escaleno");
    }

    /*Calcular perímetro*/
    area=(float)(lado1+lado2+lado3)/2;
    printf(" y el area es %.2f",area);
    return 0;
}