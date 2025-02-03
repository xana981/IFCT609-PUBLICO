/*Realizar un programa que lea 10 notas de alumnos y nos informe cuántos tienen
notas mayores o iguales a 7 y cuántos menores.*/


#include <stdio.h>

int main(void)
{
    //Inicializamos variables
    int i,sumamas,sumamenos;
    int nota;
    sumamenos=0;

    //Preparamos el for para hacer las 10 preguntas
    for (i=1;i<=10;i++)
    {
        printf("Introduce las 10 notas de los alumnos ",i);
        scanf ("%d",&nota);
        if (nota>=7)
        {
            sumamas++;
        }
        else if (nota<7)
        {
            sumamenos++;
        }
    }
printf("\nLos alumnos que han sacado una nota MAS de 7 es %d",sumamas);
printf("\nLos alumnos que han sacado una nota MENOS de 7 es %d",sumamenos);  
}    