#include <iostream>

int main()
{
    int n1, n2, n3;

    printf("ingrese un lado: ");
    scanf_s("%d", &n1);

    printf("ingrese un lado: ");
    scanf_s("%d", &n2);

    printf("ingrese un lado: ");
    scanf_s("%d", &n3);

    if (n1 + n2 > n3) {
        printf("Cumple con el teorema.");
    }
    else 
    {
        printf("No cumple con el teorema del triangulo.");
    }

    return 0;
}