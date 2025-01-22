#include <stdio.h>
void incrementa(){
int a=1;
int b=1;
printf("a=%d b=%d\n", a,b);
a++;b++;
} /* fin de la función incrementa */
int main(void)
{
int cont;
for(cont=1;cont <= 3; cont++) 
{ /* Inicializo bucle en la 1a vuelta a cont=1,*/
printf("Iteracion %d\t", cont);/* incrementa en cada vuelta el cont a 1
(cont++)*/
incrementa(); /* repito el cuerpo del bucle mientras cont<=3 */
} /* fin del for */
/* El %d del printf me indica que voy a representar por pantalla un número entero
cont, si en lugar de ser cont de tipo entero, fuera de tipo float, y pusiese en el
printf un %d, me escribiría por pantalla su parte entera (todo esto de la entrada y
salida se verá mejor en el capítulo siguiente).*/
return(0);
} /* fin del main() (programa principal)*/

