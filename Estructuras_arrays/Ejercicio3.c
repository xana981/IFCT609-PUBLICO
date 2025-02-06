/*Programa que permita leer una cadena de caracteres y que devuelva el número de caracteres 
que tiene dicha cadena e imprimirla al revés*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    //Declaramos variables y arrays
    int i,largo;
    char cadena[20];  
    
    //Preguntamos la cadena de caracteres
    printf("Introduce una cadena de caracteres sin espacios ");
    scanf("%s",&cadena);

    largo = strlen(cadena);
    printf("\nEl numero de caracteres indroducido es: %d \n",largo);
   
    for (i=largo;i>=0;i--)
    {
       printf("%c",cadena[i]); 
    }
    //

}