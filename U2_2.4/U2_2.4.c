/*Confeccionar un programa que ingrese una medida en ‘pies’ y la exhiba convertida a yardas, pulgadas, cms.
y mts. NOTA: 1 pie = 12 pulgadas; 1 yarda = 3 pies; 1 pulgada = 2,54 cms.*/
#include <stdio.h>

int main()
{
	float yardas, cm, mt, pies, pulgadas;

	printf("Ingresar una medida en PIES: ");
	scanf("%f", &pies);

	pulgadas = pies * 12;
	yardas = pies / 3;
	cm = pulgadas * 2.54;
	mt = cm / 100;

	printf("Pulgadas: %.2f\n", pulgadas);
	printf("Yardas: %.2f\n", yardas);
	printf("Cm: %.2f\n", cm);
	printf("Mt: %.2f\n", mt);

	return 0;
}
