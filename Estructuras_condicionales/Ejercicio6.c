/*Programa que lea un caracter de teclado e informe si es alfabetico (A-Z y a-z), numerico (entre 0-9) o puntuacion (.,;:)
Si no es ninguno de estos el programa debe mostrar "El caracter es desconocido"*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    /*Inicializamos variables y preguntamos el caracter*/
    char a;
    printf("Introduce un caracter por teclado ");
    scanf("%c",&a);
    if (a=='1'||a=='2'||a=='3'||a=='4'||a=='5'||a=='6'||a=='7'||a=='8'||a=='9'||a=='0')
    {
        printf("\nEl valor introducido es un numero");
    }
    else if (a=='a'||a=='b'||a=='c'||a=='d'||a=='e'||a=='f'||a=='g'||a=='h'||a=='i'||a=='j'||a=='k'||a=='l'||a=='m'||a=='n'||a=='o'||a=='p'||a=='q'||a=='r'||a=='s'||a=='t'||a=='u'||a=='v'||a=='w'||a=='x'||a=='y'||a=='z'||
    a=='A'||a=='B'||a=='C'||a=='D'||a=='E'||a=='F'||a=='G'||a=='H'||a=='I'||a=='J'||a=='K'||a=='L'||a=='M'||a=='N'||a=='O'||a=='P'||a=='Q'||a=='R'||a=='S'||a=='T'||a=='U'||a=='V'||a=='W'||a=='Y'||a=='X'||a=='Z')
    {
         printf("\nEl valor introducido es una letra");       
    }
    else if (a=='.'||a==','||a==':'||a==';')
    {
        printf("\nEl valor introducido es una puntuacion");
    }
    else
    {
        printf("\nEl caracter es desconocido");
    }
    return 0;
}   
