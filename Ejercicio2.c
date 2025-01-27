/*Realizar la carga del lado de un cuadrado, mostrar por pantalla el perímetro de
este (El perímetro de un cuadrado se calcula multiplicando el valor del lado por
cuatro)*/
#include <stdio.h>

int main(void)
{
   /*Hacer pregunta*/
    int lado,perimetro;
    printf("\n Introduce el tamaño de un lado: ");
    scanf("%d",&lado);

    /*Calcular perimetro*/
    perimetro=lado*4;
    printf("\n El perimetro del cuadrado es: %d",perimetro);    
 
}