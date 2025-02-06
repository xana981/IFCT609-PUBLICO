/*Escribir un programa que, dado un numero en decimal, me lo convierta en binario
o hexadecimal.
Tras introducir el número, se mostrará un menú con las dos opciones (“B” o “H”)
donde el usuario indicará a que sistema quiere hacer la conversión.
Para obtener el binario de un número decimal, iremos dividiendo el numero entre
2. Si el resto de la división es impar, colocaremos un “1”, si es par, colocaremos un
“0”. La división finaliza cuando el resultado es 1. Se tendrán que imprimir los
resultados en orden inverso*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //Inicializamos variables y preguntamos por el numero
    int numdec,n,i,k,numdec1;
    float resto;
    int caso;
    printf("Introduce un numero decimal ");
    scanf("%d",&numdec);

    //Creamos un switch para escoger entre b y h 
    printf("\nEscoge una opcion (1 (BINARIO) o 2 (HEXADECIMAL)) ");
    scanf("%d",&caso);
    switch(caso)
    {
        case 1: printf("%d en binario es: ",numdec);
            numdec1=numdec;
            for (i=7;i>=0;i--)
	        {
		        k=numdec>>i;
		        if (k&1)
		        {
		        printf("1");
		        }
		        else 
		        {
		            printf("0");
		        }   
	        }	
            break;
        case 2: printf("%d en hexadecimal es: %x\n",numdec,numdec);
            break;
        default: printf("No has pulsado el caso corrento");
            break;
    }    
}