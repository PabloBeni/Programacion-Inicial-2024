/*Dadas 20 notas y legajos de alumnos de un curso. Determinar:
a. Cantidad de alumnos aplazados.
b. Cuando la nota sea mayor a 7, mostrar el mensaje: “El alumno con legajo xxx ha Promocionado” */
#include <stdio.h>

int main(){
    const int cantidad_notas = 20;
    int i, legajo, nota, aplazados = 0;

    for (i = 0; i < cantidad_notas; i++)
    {
        printf("Ingrese lagajo de alumno: ");
        scanf("%d", &legajo);
        printf("Ingrese nota de alumno: ");
        scanf("%d", &nota);

        if(nota < 4) aplazados++;
        if(nota >= 7) printf("El alumno con legajo %d ha promocionado.", legajo); 
    }
    
    printf("Cantidad de alumnos aplazados: %d", aplazados);
    
    return 0;
}