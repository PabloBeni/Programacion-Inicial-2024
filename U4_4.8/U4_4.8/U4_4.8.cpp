#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Ingrese un numero entero: ");
    scanf_s("%d", &n1);

    printf("Ingrese otro numero entero: ");
    scanf_s("%d", &n2);

    if (n1 % n2 == 0) printf("El primer numero ingresado es divisible por el segundo");
    else printf("El primer numero NO es divisible por el segundo.");

    return 0;
}
