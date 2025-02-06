/*Programa llamado vendedores que cree un array de 18x10. Indicando que poseemos una empresa de 18 vendedores 
cada uno de los cuales vende 10 productos.
El array almacena los ingresos obtenidos por cada vendedor en cada producto de modo que un un menu permite
almacenar los ingresos, revisar el total de cada vendedor y obtener los ingresos totales*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ingresos[18][10];
    int i,j,sumatotal,sumavendedor,vendedor;

    //Imprimimos cabecera
    printf(" Vendedor \t V1 \t V2 \t V3 \t V4 \t V5 \t V6 \t V7 \t V8 \t V9 \t V10");

    //añadimos valores aleatorios a la tabla
    for (i=0;i<=17;i++)
    {
        printf("\nVendedor %d ",i+1);
        for (j=0;j<10;j++)
        {
            ingresos[i][j]=rand()%50;
            printf("\t %d ",ingresos[i][j]);
        }    
    }

    //Preguntamos por el vendedor que queremos calcular
    printf("\nQue vendedor quieres ver el total de las ventas? ");
    scanf("%d",&vendedor);
    vendedor=vendedor-1;
    
    //Calcular la suma de las ventas de los trabajadores
    sumavendedor=0;
    sumatotal=0;
    for (i=0;i<10;i++)
    {
         sumavendedor=sumavendedor+ingresos[vendedor][i];
    }


    for (j=0;j<18;j++)
    {    
        for (i=0;i<10;i++)
        {
            sumavendedor=sumavendedor+ingresos[j][i];
        }
        sumatotal=sumatotal+sumavendedor;
    }    

    //Escribimos los totales de las sumas
    printf("\nLa suma de las ventas del vendedor %d es: %d ",vendedor+1,sumavendedor);
    printf("\nLa suma de TODAS las ventas es: %d ",sumatotal);    
}