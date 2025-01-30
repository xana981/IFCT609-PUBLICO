/*Escribir un programa en C que pida 3 números y los muestre en pantalla de mayor
a menor en líneas distintas. En caso de haber números iguales se pintan en la
misma línea.*/


#include <stdio.h>

int main(void)
{
    /*Inicializamos variables*/
    int a,b,c;
    int num1,num2,num3;
  

    /* preguntamos por los valores*/
    printf("\n Introduce primer numero ");
    scanf("%d",&num1);
    printf("\n Introduce segundo numero ");
    scanf("%d",&num2);
    printf("\n Introduce tercer numero ");    
    scanf("%d",&num3);

    /*Calculamos el numero mayor*/
    if (num1>num2 && num1>num3)
    {
        a=num1;
        if (num2>num3)
        {
            b=num2;
            c=num3;
        }
        else 
        {
            b=num3;
            c=num2;
        }
    }
    else if (num2>num3)
    {
        a=num2;
        if (num1>num3)
        {
            b=num1;
            c=num3;
        }
        else 
        {
            b=num3;
            c=num1;
        }
    }    
    else
    {
        a=num3;
        if (num2>num1)
        {
            b=num2;
            c=num1;
        }
        else 
        {
            b=num1;
            c=num2;
        }
    }
   
    /*Comprobamos si a y b son iguales para cambiar o no de linea*/
    if (a==b)
    {
        printf ("%d - " " %d ",a,b);
    }    
    else
    {
        printf ("%d" "\n%d",a,b);
    }
    
    
      /*Comprobamos si b y c son iguales para cambiar o no de linea*/  
    if (b==c)
    {
        printf (" - " " %d ",c);
    }    
    else
    {
        printf ("\n%d",c);
    } 
}    