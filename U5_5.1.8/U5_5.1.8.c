/*Dadas las edades y estaturas de 45 alumnos de un curso. Determinar:
a. Edad promedio.
b. Estatura promedio.
c. Cantidad de alumnos mayores de 10 años.
d. Cantidad de alumnos que miden menos de 1.40 cm. */
#include <stdio.h>

int main(){
    const int alumnos = 45;
    int i, edad, mayores_10 = 0, menos_140 = 0;
    float estatura, acum_estatura = 0, promedio_estatura;

    for (i = 1; i <= alumnos; i++)
    {
        printf("Ingrese edad del alumno %d: ", i);
        scanf("%d", &edad);
        printf("Ingrese estatura del alumno %d: ", i);
        scanf("%f", &estatura);

        acum_estatura += estatura;
        if(edad > 10) mayores_10++;
        if(estatura < 1.40) menos_140++;
    }   

    promedio_estatura = acum_estatura / alumnos;

    printf("Estatura promedio es de: %.2f\nCantidad de alumnos mayores de 10 años: %d\nCantidad de alumnos que miden menos de 1.40cm: %d", promedio_estatura, mayores_10, menos_140);

    return 0;
}
