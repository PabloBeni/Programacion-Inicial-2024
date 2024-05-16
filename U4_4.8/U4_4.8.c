/*Realizar un programa que ingrese dos números e indique si el primer número es divisible por el segundo.*/
#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Ingrese un numero entero: ");
    scanf("%d", &n1);

    printf("Ingrese otro numero entero: ");
    scanf("%d", &n2);

    if (n1 % n2 == 0) printf("El primer numero ingresado es divisible por el segundo");
    else printf("El primer numero NO es divisible por el segundo.");

    return 0;
}
