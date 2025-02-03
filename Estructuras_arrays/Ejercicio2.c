/*Programa que permita a un usuario introducir 6 numeros en forma de tabla 3x2. 
Mostrara los valores maximo y minimo de cada fila y da toda la tabla*/



#include <stdio.h>

int main(void)
{
    int i,fila;
    int num[3][2]={{10,11},{12,13},{14,15}};

        printf(" 0-0 %d / ",num[0][0]);
        printf(" 0-1 %d / ",num[0][1]);
        printf(" 0-2 %d \n",num[0][2]);     

        printf(" 1-0 %d / ",num[1][0]);
        printf(" 1-1 %d / ",num[1][1]);
        printf(" 1-2 %d \n",num[1][2]); 

    for (int fila = 0; fila < 2; fila++)
    {
   
        if (num[fila][0] > num[fila][1])
        {
            if (num[fila][0] > num[fila][2])
                {
                    printf("\n%d es el mayor de la fila %d",num[fila][0],fila);
                }

        }
        else if (num[fila][1] > num[fila][2])
        {
            if (num[fila][1] > num[fila][0])
                {
                    printf("\n%d es el mayor de la fila %d",num[fila][1],fila);
                }
        }
        else
        {
              printf("\n%d es el mayor de la primera fila %d",num[fila][2],fila);
        }
    }

    //printf("El valor 2 de la fila 2 es %d ",num[0][1]);
    return 0;
}
