/*Un programador con poca experiencia nos manda la siguiente función que dice
que intercambia el valor de sus dos parámetros.
Si se llama como swap(x, y), al terminar la ejecución, las variables x e y han
intercambiado sus valores. ¿Es eso cierto? Comprueba tu respuesta creando un
programa en tu entorno de desarrollo y ejecutándolo. Puedes imprimir la variable
entera x con la línea printf("%d\n", x);*/


#include <stdio.h>
#include <stdlib.h>

int swap(int a,int b)
{
    a=5;
    b=10;
    printf("a: %d, b: %d ",a,b);
    return b;
}

int main(void)
{
    int m,x,y;
    m=swap(x,y);
    printf("\n%d\n",m);
}
