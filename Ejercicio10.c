/* Deberá solicitar código del articulo (max 6 cifras) a vender, su precio en euros, la cantidad 
de articulos que desean y el dto aplicar sobre la cantidad inicial*/



#include <stdio.h>

int main(void)
{

 /*Incicalizamos variables y preguntamos por las variables*/
    int codigo,cant;
    float precioud,porce10,porce16,preciototal;

    printf("\n Introduce el codigo de la prenda ");
    scanf("%d",&codigo);
    printf("\n Introduce el precio ");
    scanf("%f",&precioud);
    printf("\n Introduce cantidad ");
    scanf("%d",&cant);

   /*Calcular precio total*/
    preciototal = precioud * cant;

    /*Calcular porcentajes 15*/
    porce10=(preciototal*10)/100;

    /*Calcular porcentaje 16*/
    porce16=(preciototal*16)/100;

    /*Presentamos el ticket*/
    printf("\n\t---------RAZA---------");
    printf("\n \t%d  ""\t %.2f",codigo,precioud);
    printf("\n \t%d"" \t\t%.2f",cant,preciototal);
    printf("\n \t10%%\t\t -%.2f ",porce10);
    printf("\n \t16%% IVA\t\t +%.2f ",porce16);

    /*Calculamos el total a pagar*/
    preciototal=preciototal-porce10+porce16;
    printf("\n\t TOTAL A PAGAR  \t%.2f ",preciototal);

}
