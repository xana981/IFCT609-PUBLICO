/*Elabora un programa que escriba la serie de Fibonacci 0,1,1,2,3,5,8,13... (n-1)+(n-2) */

#include <stdio.h>

int main()
{

    int n,i,j;
    
    printf("Indica cuantos números de la serie Fibonacci quieres calcular ");
    scanf("\n%d",&n);
    int a[n];

    a[0]=0;
    a[1]=1;
    for (int i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for (int j=0;j<n;j++)
    {
        printf(" %d - ",a[j]);
    }
    return 0;
}

