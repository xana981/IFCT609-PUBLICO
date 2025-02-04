/*Programa que permita a un usuario introducir 6 numeros en forma de tabla 3x2. 
Mostrara los valores maximo y minimo de cada fila y da toda la tabla*/



#include <stdio.h>

int main(void)
{
    //Declaramos variables y arrays
    int i,j,fila;
    int num[3][2];  
    int mayor[3],menor[3];

    //Bucle para preguntar los números
    for (i=0;i<=2;i++)
    {
        for (j=0;j<=1;j++)
        {
            printf("\nIntroduce numero %d ",j);
            scanf("%d",&num[i][j]);
        }

    }
    
    /*Escribimos los valores     
        printf(" 0-0 %d / ",num[0][0]);
        printf(" 0-1 %d / \n",num[0][1]);
   
        printf(" 1-0 %d / ",num[1][0]);     
        printf(" 1-1 %d / \n",num[1][1]);

        printf(" 2-0 %d / ",num[2][0]);
        printf(" 2-1 %d /\n",num[2][1]); */

    //Calculamos el mayor y el menos de cada fila y asignamos valores para saber cual es el mayor de casa fila
    for (int fila = 0;fila < 3;fila++)
    {
        if (num[fila][0] > num[fila][1])
        {
            printf("\n%d es el mayor y %d el menor de la fila %d",num[fila][0],num[fila][1],fila);
            mayor[fila]=num[fila][0];
            menor[fila]=num[fila][1];           
        }
        else 
        {
            printf("\n%d es el mayor y %d el menor de la fila %d",num[fila][1],num[fila][0],fila);  
            mayor[fila]=num[fila][1];
            menor[fila]=num[fila][0];           
        }
    }

    //condicionamos para sacar el mayor
    if (mayor[0]>mayor[1])
    {
        if (mayor[0]>mayor[2])
        {
            printf("\nEl MAYOR de la tabla es %d ",mayor[0]);     
        }
    }
    else if (mayor[1]>mayor[2])
    {
        printf("\nEl MAYOR de la tabla es %d ",mayor[1]);    
    }
     else
    {
        printf("\nEl MAYOR de la tabla es %d ",mayor[2]);    
    }       

    //condicionamos para sacar el menor
    if (menor[0]<menor[1])
    {
        if (menor[0]<menor[2])
        {
            printf("\nEl MENOR de la tabla es %d ",menor[0]);     
        }
    }
    else if (menor[1]<menor[2])
    {
        printf("\nEl MENOR de la tabla es %d ",menor[1]);    
    }
     else
    {
        printf("\nEl MENOR de la tabla es %d ",menor[2]);    
    }       
    return 0;
}
