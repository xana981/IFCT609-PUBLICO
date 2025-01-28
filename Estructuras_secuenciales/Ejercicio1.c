
/* Realizar la carga de dos números enteros por teclado e imprimir su suma y su producto.  */
#include <stdio.h>

int main(void)
{
    /* Para realizar las preguntas y definir variables*/
    int a,b,suma,producto;
    printf("\n Introduce el valor de a: ");
    scanf("%d",&a);
    printf("\n Introduce el valor de b: ");
    scanf("%d",&b);

    /* Para la suma */
    suma=a+b;
    printf("\n La suma de los dos numeros es: %d",suma);    

   /* Para la multiplicacion */
    producto=a+b;
    printf("\n El producto de los dos numeros es: %d",producto);    
}