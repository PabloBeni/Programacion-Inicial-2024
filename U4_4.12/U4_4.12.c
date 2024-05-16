/*Ingresar el valor de la hora y la cantidad de horas trabajadas por un empleado. Calcular su sueldo tomando
en cuenta que recibe un premio de $500 si trabajo más de 50 horas y, además, si trabajó más de 150 horas
se le otorgan $1000 adicionales.*/
#include <stdio.h>

int main(){
    int valor_hora, horas_trabajadas, final;

    printf("Ingrese el valor de hora del empleado: ");
    scanf("%d", &valor_hora);
    printf("Ingrese la cantidad de horas trabajadas: ");
    scanf("%d", &horas_trabajadas);

    final = valor_hora * horas_trabajadas;

    if(horas_trabajadas >= 1000) final += 1000;
    else if(horas_trabajadas >= 500) final += 500;

    printf("El empleado cobra : %d", final);

    return 0;
}