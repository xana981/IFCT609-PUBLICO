/*Escriba una función que devuelva el resultado de elevar un número (declarado como
entero) a cualquier potencia (valor entero). El resultado de este cálculo debe ser de
tipo long. */


#include <stdio.h>
#include <stdlib.h>

//funcion que calcula la potencia
int funPotencia(int numero,int potencia)
{
    int i,resultado;
    resultado=numero;
    for (i=1;i<potencia;i++)
    {
        resultado=resultado*numero;
        printf(" %d - ",resultado);
    }
    return resultado;
}

//programa que pregunta el numero y la potencia a la que lo queremos asociar
int main(void)
{
    int num,pot;
    long a;
    printf("\nIndica un numero al que le quieras elevar una potencia ");
    scanf("%d",&num);

    printf("\nIndica la potencia a la que lo quieres elevar ");
    scanf("%d",&pot);
   
    a=funPotencia(num,pot);
    printf("\nEl resultado de elevar %d ^ %d es: %d",num,pot,a);

}


