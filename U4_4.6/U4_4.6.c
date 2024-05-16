/*Confeccionar un programa que permita ingresar 4 números enteros, de a uno por vez y determine el menor 
valor y su número de orden. Informe los valores ingresados e identifique al menor con mensaje aclaratorio.*/
#include <stdio.h>

int main()
{
    int n1, n2, n3, n4;

    printf("Ingrese un numero entero: ");
    scanf("%d", &n1);
    printf("Ingrese un numero entero: ");
    scanf("%d", &n2);
    printf("Ingrese un numero entero: ");
    scanf("%d", &n3);
    printf("Ingrese un numero entero: ");
    scanf("%d", &n4);

    if (n1 < n2 && n1 < n3 && n1 < n4) {
        printf("EL numero menor es %d, numeor de orden 1", n1);
    }

    if (n2 < n1 && n2 < n3 && n2 < n4) {
        printf("EL numero menor es %d, numeor de orden 2", n2);
    }

    if (n3 < n1 && n3 < n2 && n3 < n4) {
        printf("EL numero menor es %d, numeor de orden 2", n3);
    }

    if (n4 < n1 && n4 < n2 && n4 < n3) {
        printf("EL numero menor es %d, numeor de orden 4", n4);
    }
    
    return 0;
}