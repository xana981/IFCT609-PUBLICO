/*Se debe desarrollar un programa que pida el ingreso del precio de un artículo y
la cantidad que lleva el cliente. Mostrar lo que debe abonar el comprador.
Definir una variable de tipo float para el precio del artículo*/

#include <stdio.h>

int main(void)
{
   /*Hacer preguntas y asignamos las variables*/
    int cantidad;
    float precio,total;
    printf("\n Introduce el precio del articulo ");
    scanf("%f",&precio);
    printf("\n Introduce la cantidad: ");
    scanf("%d",&cantidad);

    /*Calcular el coste*/
    total=precio*cantidad;
    printf("\n El comprador debe abonar: %.2f",total);    
    return(0);
}