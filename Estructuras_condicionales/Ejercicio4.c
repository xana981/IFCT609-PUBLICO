/*Se ingresa por teclado un número positivo de uno o dos dígitos (1...99) mostrar
un mensaje indicando si el número tiene uno o dos dígitos.
(Tener en cuenta que condición debe cumplirse para tener dos dígitos un
número entero)*/

#include <stdio.h>

int main(void)
{
    /*Inicializamos variable y preguntamos por el valor*/
    int num;
    
    printf("\n Introduce un numero de (1-99) ");
    scanf("%d",&num);

    /*Condicionamos*/
    if (num<10)
        {
        printf("\n\t El numero tiene 1 digito");
        }
    else
        {
        printf("\n\t El numero tiene 2 digitos");
        }
    return 0;

}    
