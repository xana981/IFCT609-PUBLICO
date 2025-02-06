/*Programa que muestre la tabla con las 4 primeras potencias de los números de 1 a n de lasiguiente forma*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int num,i,j,x;

    printf("introduce el numero del cual quieres calcular las potencias: ");
    scanf("%d",&num);


    //Imprimimos la cabecera
    printf("\n\t N \t N^2 \t n^3 \t n^4 \n");

    
    for (i=1;i<=num;i++)
    {
        printf("\n\t %d ",i);
        for (j=2;j<=4;j++)
        {
            double numero = i;
	        double potencia = j;
            double total = pow(numero,potencia);
            printf("\t  %.0f ",total);
        }
    }
    return 0;
}
