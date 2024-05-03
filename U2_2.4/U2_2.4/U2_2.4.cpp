#include <iostream>

int main()
{
	float yardas, cm, mt, pies, pulgadas;

	printf("Ingresar una medida en PIES: ");
	scanf_s("%f", &pies);

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
