/*Ingresar 3 valores reales y: 
a. Si los dos primeros son mayores al tercero informar “MAYORES AL TERCERO”.
b. Si los tres son iguales informar “TRES IGUALES .
c. Si alguno de los dos primeros es menor al tercero informar “ALGUNO ES MENOR”.*/
#include <stdio.h>

int main()
{
    int n1, n2, n3;

    printf("Ingresar tres numeros enteros: ");
    scanf("%d%d%d", &n1, &n2, &n3);

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