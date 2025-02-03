/*Escribe un programa que muestre por pantalla todos los números de 4 cifras en
los cuales se cumpla la condición de que la suma de las cifras pares sea igual a la
suma de las cifras impares.*/

#include <stdio.h>

int main(void)
{
    //Inicializamos variables
    int restopar,restoimpar,i,i1,j,j1,sumapar,sumaimpar;
   
    //sumamos las cifras de los numeros pares y nos da la variable sumapar    
    for (j=1000;j<=9999;j+=2)
    {
        j1=j;
        sumapar=0;
        while(j1!=0)
        {
            restopar=(j1%10);  
            sumapar=(sumapar+restopar);
            j1=(j1/10);
        }
        //printf("\t%d - la suma de los PARES es %d",j,sumapar);
    }

    for (i=1001;i<=9999;i+=2) //bucle para que pase por todos los numeros
        {
           
            i1=i;
            sumaimpar=0;       
            while(i1!=0) //Realizamos la suma de los numeros impares y nos da el resultado en sumaimpar
            {
                restoimpar=(i1%10);   
                sumaimpar=(sumaimpar+restoimpar);
                i1=(i1/10);
            }   
            //printf("\t%d - la suma de los IMPARES es %d",i,sumaimpar);
            if (sumapar==sumaimpar)
            {
                printf("*%d* - ",i);
            }
            else
            {
                printf("");
            }
        }    
    return (0);
}