#include <stdio.h>

int main(void)
{
    
    char *cadena= "Hola mundo";
    char *p;
    int i;
    p=cadena+1;

    for (i=0;i<5;i++)
    {
        printf("%c ",*p);
        p+=2;
    }
}