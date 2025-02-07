/*Escriba un programa en C que pida al usuario los valores de una tabla de elementos
enteros de dimensión 4 filas por 3 columnas, y muestre en pantalla la mayor de las
sumas de sus columnas.*/


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int i,j,suma=0;
   int tabla[4][3],acumuloSuma[3];
   for (i=0;i<4;i++)
   {
        for(j=0;j<3;j++)
        {
            tabla[i][j]=rand()%1500;
            printf(" %d \t ",tabla[i][j]);   
        }
    printf("\n");
   }
   for (j=0;j<3;j++)
   {
        suma=0;
        printf("\n");
        for(i=0;i<4;i++)
        {
            suma+=tabla[i][j];
        }
        acumuloSuma[j]=suma;
        printf("\nSuma de columna %d es: %d \t ",j,acumuloSuma[j]);  
    }
    if (acumuloSuma[0]>acumuloSuma[1])
    {
        if (acumuloSuma[0]>acumuloSuma[2])
        {
            printf("\nLa mayor de las sumas de las columnas es: %d ",acumuloSuma[0]); 
        }
    }    
    if(acumuloSuma[1]>acumuloSuma[2]) 
    {
        if (acumuloSuma[1]>acumuloSuma[0])
        {
            printf("\nLa mayor de las sumas de las columnas es: %d ",acumuloSuma[1]);             
        }
    }    
    else
    {
        printf("\n\tLa mayor de las sumas de las columnas es: %d ",acumuloSuma[2]);     
    }  
}
