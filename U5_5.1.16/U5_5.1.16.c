/* Se ingresan DNI y la nota promedio de 10 alumnos. Determinar el DNI del alumno de mayor nota
promedio (considerar único). */
#include <stdio.h>

int main(){
    int i, DNI, nota, acum_nota = 0, DNI_mayor;

    for(i = 1; i <= 10; i++)
    {
        printf("Ingresar DNI del alumno: ");
        scanf("%d", &DNI);
        printf("Ingrese nota promedio del promedio: ");
        scanf("%d", &nota);

        if(acum_nota <= nota){
            acum_nota = nota;
            DNI_mayor = DNI;
        }
    }

    printf("\nEl alumno con mayor nota tiene el DNI %d y un %d de promedio.", DNI_mayor, acum_nota);

    return 0;
}