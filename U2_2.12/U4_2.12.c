/*Una farmacia vende algunos artículos sin descuento y a otros con descuento del 20%. Confeccionar un 
programa que recibiendo el precio original y un código que indica si es o no con descuento, informe el 
precio final (0 no aplica el descuento y 1 aplica el descuento).*/
#include <stdio.h>

int main()
{
	const float descuento = 0.2;
	float precio_final, precio_original;
	int aplica_descuento;

	printf("Ingrese precio de producto: $");
	scanf("%f", &precio_original);
	printf("�El producto tiene descuento? (1/0): ");
	scanf("%d", &aplica_descuento);

	precio_final = precio_original - ((precio_original * descuento) * aplica_descuento);

	printf("El precio final del producto es de: $%.2f", precio_final);

	return 0;
}