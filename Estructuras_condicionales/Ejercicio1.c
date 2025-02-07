/*Ingresar el sueldo de una persona, si supera los 3000 pesos mostrar un
mensaje en pantalla indicando que debe abonar impuestos*/
#include <stdio.h>

int main(void)
{
    //Inicializamos variable y preguntamos
    int sueldo;
    
    printf("\n Introduce el sueldo ");
    scanf("%d",&sueldo);
   
    //Condicionamos
    if (sueldo>3000)
    {
        printf("\n\t Debe de abonar impuestos");
    }
    else
    {
        printf("\n\t NO debe de abonar impuestos");
    }
    return 0;

}