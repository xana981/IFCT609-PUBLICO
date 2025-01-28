/*Realizar calculo del cambio a devolver, multiplo de 5cents. El programa devolverá en pantalla la cantidad de monedas (50,20,10 y 5 cents) 
Se debe devolver el menos número de monedas posible*/

#include <stdio.h>

int main(void)
{
   /*Hacer preguntas y asignamos las variables*/
    int cantidad,moneda50,moneda20,moneda10,moneda5;
    float precio,cambio;
    printf("\n Introduce el precio del articulo ");
    scanf("%f",&precio);
    printf("\n Introduce la cantidad que metes en la maquina: ");
    scanf("%d",&cantidad);

    /*Calcular el coste*/
    cambio=cantidad-precio;
    printf("\n El cambio es: %.2f",cambio);    

    /*Calcular la cantidad de monedas de 50cents*/
    if(cambio>=0.50)
    {
        moneda50=cambio/0.50;
        printf("\n El numero de monedas de 50 cents es: %d",moneda50);    
    }
    else
    {
        printf("\n No hay monedas de 50 cents");
        moneda50=0;
    }    

   /*Calcular la cantidad de monedas de 20cents*/
    cambio=cambio-(moneda50*0.50);
    /*printf("\n****El cambio despues de los 50cents es %f",cambio);*/
    if(cambio>=0.20)
    {
        moneda20=cambio/0.20;
        printf("\n El numero de monedas de 20 cents es: %d",moneda20);    
    }
    else
    {
        printf("\n No hay monedas de 20 cents");
        moneda20=0;
    }  

 /*Calcular la cantidad de monedas de 10cents*/
    cambio=cambio-(moneda20*0.20);
    /*printf("\n*********El cambio despues de los 50 y 20cents es %f",cambio);*/
    if(cambio>=0.10)
    {
        moneda10=cambio/0.10;
        printf("\n El numero de monedas de 10 cents es: %d",moneda10);    
    }
    else
    {
        printf("\n No hay monedas de 10 cents");
        moneda10=0;
    }  
 /*Calcular la cantidad de monedas de 5cents*/
    cambio=cambio-(moneda10*0.10);
    /*printf("\n*****************El cambio despues de los 50, 20 y 10cents es %f",cambio);*/
    if(cambio>=0.050)
    {
        moneda5=cambio/0.050;
        printf("\n El numero de monedas de 5 cents es: %d",moneda5);    
    }
    else
    {
        printf("\n No hay monedas de 5 cents");
        moneda5=0;
    }  
return(0);
}
