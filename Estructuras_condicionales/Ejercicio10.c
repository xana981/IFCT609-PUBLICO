/*Programa en c que pida 3 numeros e indique si se han metido en forma creciente*/

#include <stdio.h>

int main(void)
{
    /*Inicializamos variables*/
    int num1,num2,num3;
  

    /* preguntamos por los valores*/
    printf("\n Introduce primer numero ");
    scanf("%d",&num1);
    printf("\n Introduce segundo numero ");
    scanf("%d",&num2);
    printf("\n Introduce tercer numero ");    
    scanf("%d",&num3);

    /*Comprobamos que los 2 primeros numeros sean crecientes*/
    if (num1>num2)
    {
        printf("Los numeros NO son crecientes");
    }
    else
    {
        if (num2>num3)
        {
            printf("Los numeros NO son crecientes");
        }
        else
        {
            printf("Los numeros SI son crecientes");           
        }
    }
}