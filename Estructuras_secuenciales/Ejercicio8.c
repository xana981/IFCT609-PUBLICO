/*Programa que lea segundos y no los pase a horas minutos y segundos*/
#include <stdio.h>

int main(void)
{
    /*Incicalizamos variables y preguntamos segundos*/
    int seg;
    float hora,minuto;

    printf("\n Introduce el numero de segundos que ha tardado ");
    scanf("%d",&seg);

    /*Calculamos las horas*/
    if(seg>=60)
    {
        hora=seg/3600;
        printf("\n %.0f",hora);    
    }
    else
    {
        printf("00");
        hora=0;
    }    

    /*Calculamos los minutos*/
    seg=seg-(hora*3600);
    if(seg>=60)
    {
        minuto=seg/60;       
        printf(":%.0f",minuto);    
    }
    else
    {
        printf(":00");
        minuto=0;
    }    


    /*Calculamos los segundos que quedan*/
    seg=seg-(60*minuto);
    printf(":%d",seg);   

}