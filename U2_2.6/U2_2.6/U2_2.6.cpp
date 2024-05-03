#include <iostream>

int main()
{
    const float precio = 8800;
    float turista, primera_clase, total_turista, total_primera;

    printf("Ingrese cantidad de pasajes vendidos en clase turista: ");
    scanf_s("%f", &turista);
    printf("Ingrese cantidad de pasajes vendidos en primera clase: ");
    scanf_s("%f", &primera_clase);

    total_turista = turista * precio;
    total_primera = primera_clase * (precio + (precio * 0.3));

    printf("Las ganancias totales de los pasajes de clase turista son de: $%.2f\n", total_turista);
    printf("Las ganancias totales de los pasajes de primera clase son de: $%.2f\n", total_primera);
    printf("La recaudacion total del vuelo es de: $%.2f", total_turista + total_primera);

    return 0;
}
