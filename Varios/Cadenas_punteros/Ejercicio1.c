/*Escriba un programa que pida una temperatura en grados Farenheit y la pase a Celsius.
NOTA: celsius = (farenheit -32)*5/9 */


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int temCel,temFar;
    
    printf("Introduce una temperatura en grados Farenheit ");
    scanf("%d",&temFar);
 
    temCel=(temFar-32)*5/9;

    printf("La temperatura en Celsius es: %d ",temCel);
}    