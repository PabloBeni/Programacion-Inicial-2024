/*Una pizzería vende empanadas por unidad o por docena, la docena cuesta $300 pero si se compra 
individualmente se cobra $30 la unidad. Si se compran más empanadas que no se agrupen en docenas las 
adicionales se cobran como por unidad. Indicar el precio total a abonar.*/
#include <stdio.h>

int main()
{
    const int docena = 300;
    const int unidad = 30;
    float precio_final;
    int cant, precio;

    printf("Ingrese cantidad de empanadas que desea comprar: ");
    scanf("%d", &cant);

    precio_final = ((cant % 12) * unidad) + ((cant / 12) * docena);

    printf("El precio final es de : $%.2f", precio_final);

    return 0;
}