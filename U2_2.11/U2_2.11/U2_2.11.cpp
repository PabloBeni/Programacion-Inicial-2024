#include <iostream>

int main()
{
    const int docena = 300;
    const int unidad = 30;
    float precio_final;
    int cant, precio;

    printf("Ingrese cantidad de empanadas que desea comprar: ");
    scanf_s("%d", &cant);

    precio_final = ((cant % 12) * unidad) + ((cant / 12) * docena);

    printf("El precio final es de : $%.2f", precio_final);

    return 0;
}