/*Confeccionar un programa que permita ingresar un carácter alfanumérico y determine e informe si lo 
ingresado corresponde a una vocal, con el mensaje “VOCAL”. y su correspondiente valor numérico en ASCII.*/
#include <stdio.h>
#include <ctype.h>

int main() {
	char caracter;

	printf("Ingrese un caracter alfanumerico: ");
	scanf("%c", &caracter);

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