/*Programa que crea un array unidimansional de tipo entero. Inicialo en la propia declaracion. 
Despues debe de copiar el contenido de ese array en otro similar mediante un bucle y mostrar 
por pantalla los valores de ambos array para comprobar la copia*/

#include <stdio.h>

int main(void)
{
    int i;
    int num[5]={10,11,12,13,14};
    int otronum[5];

    for (i=0;i<5;i++)
    {
        otronum[i]=num[i];
        printf("\n el valor del primer vector es %d y del segundo vector es %d ",num[i],otronum[i]);
    }

}
