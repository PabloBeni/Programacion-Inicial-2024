#include <iostream>
#include <stdio.h>

int main()
{
	const float descuento = 0.2;
	float precio_final, precio_original;
	int aplica_descuento;

	printf("Ingrese precio de producto: $");
	scanf_s("%f", &precio_original);
	printf("¿El producto tiene descuento? (1/0): ");
	scanf_s("%d", &aplica_descuento);

	precio_final = precio_original - ((precio_original * descuento) * aplica_descuento);

	printf("El precio final del producto es de: $%.2f", precio_final);

	return 0;
}