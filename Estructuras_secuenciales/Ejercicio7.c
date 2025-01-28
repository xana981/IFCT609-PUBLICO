/*Comercializa 3 productos, (cola, naranje y limon), se leera la cantidad de producto vendido y el coste unitario. Mostrará la siguiente tabla
producto - ventas - precio -total*/

#include <stdio.h>

int main(void)
{
   /*Hacer preguntas y asignamos las variables*/
    int cantcola,cantnaranja,cantlimon;
    float preciocola,precionaranja,preciolimon,totalcola,totalnaranja,totallimon;
    printf("\n Introduce el precio de COLA ");
    scanf("%f",&preciocola);
    printf("\n Introduce la cantidad vendida de COLA: ");
    scanf("%d",&cantcola);
    printf("\n Introduce el precio de NARANJA ");
    scanf("%f",&precionaranja);
    printf("\n Introduce la cantidad vendida de NARANJA: ");
    scanf("%d",&cantnaranja);
    printf("\n Introduce el precio de LIMON ");
    scanf("%f",&preciolimon);
    printf("\n Introduce la cantidad vendida de LIMON: ");
    scanf("%d",&cantlimon);

    /*Calculamos los totales */
    totalcola=preciocola*cantcola;
    totalnaranja=precionaranja*cantnaranja;
    totallimon=preciolimon*cantlimon;

    /* Diseñar tabla*/
    printf("\n   PRODUCTO     -      VENTAS        -      PRECIO     -     TOTAL");
    printf("\n_________________________________________________________________________");
    printf("\n    Cola                 %d                 %.2f            %.2f",cantcola,preciocola,totalcola);
    printf("\n   Naranja               %d                 %.2f            %.2f",cantnaranja,precionaranja,totalnaranja);
    printf("\n    Limon                %d                 %.2f            %.2f",cantlimon,preciolimon,totallimon);
}    