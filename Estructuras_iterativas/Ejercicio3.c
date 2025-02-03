/*Elaborar un programa que lea un numero N no primo y me dé como resultado el
menor divisor para N que me dé como resultado una división exacta (el 1 no
cuenta como divisor)*/

#include <stdio.h>

int main(void)
{
    //Inicializamos variables
    int num,i;
    i=2;
    printf("\nIntroduce un numero ");
    scanf("%d",&num);

    while (num%i!=0)
    {
        i++;
    }
    
    printf ("\nEl menor divisor de %d " " es %d",num,i);
      
    return 0; 
}    