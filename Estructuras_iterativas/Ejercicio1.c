/*Calcular independientemente, el promedio de los números pares e impares del 1
al 200. Calcular también los dos sumatorios*/

#include <stdio.h>

int main(void)
{
    //Inicializamos variables
    int pares,impares,sumapar,sumaimpar,i,j;
    float mediapar,mediaimpar;

    i=0;
    j=0;
    sumapar=2;
    sumaimpar=1;


    //Calculamos los numeros pares
    for (pares=2;pares<=200;(pares=pares+2)) 
    {
        printf(" %d -",pares);
        sumapar=sumapar+pares;
        i++;
    }

    printf("\nEl SUMATORIO de los numeros pares es %d",sumapar);
    
    mediapar=sumapar/i;
    printf("\nEl PROMEDIO de los numeros pares es %.0f\n",mediapar);

    //Calculamos los numeros impares
    for (impares=1;impares<=200;(impares=impares+2)) 
    {
        printf(" %d -",impares);
        sumaimpar=sumaimpar+impares;
        j++;
    }

    printf("\nEl SUMATORIO de los numeros impares es %d",sumaimpar);
    
    mediaimpar=sumaimpar/j;
    printf("\nEl PROMEDIO de los numeros impares es %.0f",mediaimpar);       
}