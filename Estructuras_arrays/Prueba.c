#include <math.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
	double numero = 5;
	double potencia = 2;
	double elevado = pow(numero, potencia);
	printf("%.0f elevado a la potencia %.0f es %.0f\n", numero, potencia, elevado);
	return 0;
}