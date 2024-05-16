/*Confeccionar un programa que solicite e ingrese 3 valores reales positivos, mayores que cero y determine 
e informe si forman o no triángulo. Para ello utilizar el teorema de la desigualdad del triángulo que establece 
que la suma de las longitudes de cualesquiera de dos lados de un triángulo es mayor que la longitud del 
tercer lado.*/
#include <stdio.h>

int main()
{
    int l1, l2, l3; 

    printf("Ingrese tres numeros reales positivos: ");
    scanf("%d %d %d", &l1, &l2, &l3);

    if (l1 + l2 > l3 || l1 + l3 > l2 || l3 + l2 > l1) printf("Si cumple con el teorema del triangulo.");
    else printf("No cumple con el teorema del triangulo.");

    return 0;
}
