#include <iostream>

int main()
{
    int n1, n2, n3;

    printf("Ingresar tres numeros enteros aleatorios y en cualquier orden: ");
    scanf_s("%d%d%d", &n1, &n2, &n3);

    if (n1 > n2 && n1 > n3)
    {
        if (n2 > n3)
        {
            printf("%d %d %d", n1, n2, n3);
        }else {
            printf("%d %d %d", n1, n3, n2);
        }
    }
    if (n2 > n1 && n2 > n3)
    {
        if (n1 > n3)
        {
            printf("%d %d %d", n2, n1, n3);
        }
        else {
            printf("%d %d %d", n2, n3, n1);
        }
    }
    if (n3 > n2 && n3 > n1)
    {
        if (n1 > n2)
        {
            printf("%d %d %d", n3, n1, n2);
        }
        else {
            printf("%d %d %d", n3, n2, n1);
        }
    }

    return 0;
}