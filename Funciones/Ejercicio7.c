/*Desarrollar un programa con las siguientes opciones:
a) Introducir un valor entero impar comprendido entre 1 y 19
b) Calcular la serie numérica 1 + 3 + 5 + ··· + n
c) Calcular 1 * 3 * 5 * ··· * n
d) Salir del programa.*/
/*Elaborar la solución minimizando el código en el programa principal
Se elaborará, como mínimo, una función para cada opción entre a y b. Diseña el
menú de usuario e intentar aislarlo también en una función independiente.*/

#include <stdio.h>
#include <stdlib.h>

int funSeleccion(int numElegido)   //FUNCION para elegir una opción
{
    printf("Escoge una opcion entre las siguientes: ");
    printf("\n\t 1. Muestra la lista de impares hasta el numero elegido");
    printf("\n\t 2. Calcular la serie numerica 1 + 3 + 5 + ... + n");
    printf("\n\t 3. Calcular 1 * 3 * 5 * ... * n");
    printf("\n\t 4. Salir del programa \n");
    scanf("\n\t%d_ ",&numElegido);
    return numElegido;
}

int funEscoger(int numero)    //FUNCION calcular serie numerica e introducirla en el array
{
    int impares[20],i,j=0;
    for (i=1;i<=numero;i+=2)
    {
        impares[j]=i;
        printf (" %d - ",impares[j]);
        j++;
    }
    //return 0;
}

int funSuma(int numero) //FUNCION calcular la suma
{
    int i,sumatorio=0;
    for (i=1;i<=numero;i+=2)
    {
        sumatorio=sumatorio+i;
    }
    return sumatorio; 
}

int funMultiplicacion (int numero) //FUNCION calcular la multiplicacion
{
    int i,multiplicacion=1;
    for (i=1;i<=numero;i+=2)
    {
        multiplicacion=multiplicacion*i;
    }
    return multiplicacion;
}

int main(void)
{
    int num,i,suma,multi=1,eleccion,a;

    //preguntamos por el numero impar
    printf("\nIntroduce el valor impar entre el 1 y el 19_ ");
    scanf("%d",&num);

    eleccion=funSeleccion(num);

    switch (eleccion)
    {
    case 1:
        funEscoger(num);
        break;
    case 2:
        suma=funSuma(num);
        printf("\nLa suma de los valores es: %d",suma);
        break;
    case 3:
        multi=funMultiplicacion(num);
        printf("\nLa multiplicacion de los valores es: %d",multi);
        break;
    case 4:
        printf("Has pulsado salir");
        break;
    default:
        break;
    }    
}

