/*Escribir un programa que solicite el año y el número de mes y nos informe cuantos días tiene dicho mes. 
Debemos considerar que el año puede ser bisiesto. Un año es bisiesto cuando es divisible por 4 y no por 
100 o el año es divisible por 400. */
#include <stdio.h>

int main(){
    int anio, mes;

    printf("Ingrese un año: ");
    scanf("%d", &anio);
    printf("Ingrese un mes: ");
    scanf("%d", &mes);

    if(mes == 2){
        if((anio % 4 == 0 || anio % 400 == 0) && anio % 100 != 0){
            printf("El mes tiene 29 dias");
        }else{
            printf("El mes tiene 28 dias");
        };
    }else if(mes % 2 != 0 || mes == 8 || mes == 10 || mes == 12){
        printf("El mes tiene 31 dias");
    }else{
        printf("El mes tiene 30 dias");
    };

    return 0;
}