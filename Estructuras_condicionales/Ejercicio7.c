/*Escribir en C un programa que pida un número del 1 al 7 y diga el día de la semana
correspondiente. Repetirlo utilizando otra estructura condicional diferente*/

#include <stdio.h>

int main(void)
{
    /*Inicializamos variables*/
    int num;
    /*iniciamos repetir*/
    do
    {
    /* preguntamos por los lados*/
    printf("\n Introduce un numero del 0 al 7 (0 para salir) ");
    scanf("%d",&num);

    /*Introducimos el condicional*/
        if (num==1)
        {
            printf("\tEs lunes");
        }
        else if (num==2)
        {
            printf("\tEs martes");
        }
        else if (num==3)
        {
            printf("\tEs miercoles");
        }
        else if (num==4)
        {
            printf("\tEs jueves");
        }
        else if (num==5)
        {
            printf("\tEs viernes");
        }
        else if (num==6)
        {
            printf("\tEs sabado");
        }
        else if (num==7)
        {
            printf("\tEs sabado");
        } 
        else if (num==0)
        {
        printf("\tHas pulsado salir");
        } 
        else
        {
            printf("\tEl numero no es correcto");
        }
    } while (num!=0);
    return 0;
}    