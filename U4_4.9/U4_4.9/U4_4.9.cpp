#include <stdio.h>
#include <cctype>

int main() {
	char caracter;

	printf("Ingrese un caracter alfanumerico: ");
	scanf_s("%c", &caracter);

	caracter = toupper(caracter);

	if (caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U')
	{
		printf("ES VOCAL \nEl caracter en ASCII es: %d", caracter);
	}
	else 
	{
		printf("No es vocal.");
	}

	return 0;
}