/* Conversión de número decimal a número binario */

#include <stdio.h>

void Fibonacci(int a[],int n)
{
a[0]=0;
a[1]=1;
for (int i=2;i<n;i++)
a[i]=a[i-1]+a[i-2];
}