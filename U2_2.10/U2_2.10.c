/*Confeccionar un programa que solicite el ingreso del valor del radio (r) de un círculo y con dicho valor calcule
la superficie del círculo, la longitud de la circunferencia (perímetro) y el volumen de la esfera. */
#include <stdio.h>

int main()
{
	const float PI = 3.1415;
	float radio, superficie, perimetro, volumen;
	printf("Ingrese el radio de una circunferencia: ");
	scanf("%f", &radio);

	superficie = PI * (radio * radio);
	perimetro = 2 * PI * radio;
	volumen = (4 * PI * (radio * radio * radio))/3;
	
	printf("El radio del circulo es de: %.2f\n", radio);
	printf("La superficie de la circunferencia es de: %.2f\n", superficie);
	printf("El perimetro de la circunferencia es de : % .2f\n", perimetro);
	printf("El volumen de la circunferencia es de: %.2f", volumen);

	return 0;
}