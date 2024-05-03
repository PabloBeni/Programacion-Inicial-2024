#include <iostream>

int main()
{
    int n1, n2, n3;

    printf("Ingresar tres numeros enteros: ");
    scanf_s("%d%d%d", &n1, &n2, &n3);

    if (n1 > n3 && n2 > n3)
    {
        printf("Mayores al tercero");
    }
    else if (n1 == n2 && n2 == n3 && n1 == n3)
    {
        printf("Tres iguales");
    }
    else if (n1 < n3 || n2 < n3)
    {
        printf("Alguno es menor");
    }

    return 0;
}