/*Se ingresan la cantidad de horas trabajadas y el valor por hora de un empleado. Determinar el sueldo.*/
#include <stdio.h>

int main()
{
    int hrs, sueldo;
    
    printf("Ingrese horas y sueldo por hr:");
    scanf("%d%d", &hrs, &sueldo);
    
    printf("El sueldo total es de: %d", hrs * sueldo);

    return 0;
}
