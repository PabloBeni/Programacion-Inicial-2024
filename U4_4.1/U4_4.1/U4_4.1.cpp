#include <stdio.h>

int main()
{
    int l1, l2, l3; 

    printf("Ingrese tres numeros reales positivos: ");
    scanf_s("%d %d %d", &l1, &l2, &l3);

    if (l1 + l2 > l3 || l1 + l3 > l2 || l3 + l2 > l1) printf("Si cumple con el teorema del triangulo.");
    else printf("No cumple con el teorema del triangulo.");

    return 0;
}
