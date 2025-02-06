/*Utilizando punteros y un vector tipo entero que tenga por nombre year, escribir un prgrograma que 
genere el resultado de los meses/dias*/

#include <stdio.h>

int main(void)
{
    int year[12],i;
    int *puntero;
 
    for (i=0;i<7;i+=2) year[i]=31;
    for (i=7;i<=11;i+=2) year[i]=31;

    year[1] = 28;
    
    for (i=3;i<6;i+=2) year[i]=30;
    for (i=8;i<11;i+=2) year[i]=30;   

    puntero=year;

    for (i=1;i<=12;i++)
    {
        printf("\n\tEl mes %d tiene %d dias ",i,*puntero);
        puntero++;
    }
    return 0;
}