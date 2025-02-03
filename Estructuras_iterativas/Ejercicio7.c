/*Escribe un número que escriba la tabla de multiplicar de un numero introducido
por teclado*/


#include <stdio.h>

int main(void)
{
    //Inicializamos variables
    int multipli,i,num;

    printf("\n Introduce un numero para mostrar la tabla de multiplicar ");
    scanf ("%d",&num);

    for (i=0;i<=10;i++)
    {
        multipli=i*num;
        printf("\n%d x %d = %d",i,num,multipli);
    }
}