/*Realizar un programa que:
a. Muestre todos los números primos entre 1 y 100. (Un nro. es primo cuando es divisible solamente
por 1 y por sí mismo)
b. Contar y mostrar la cantidad de primos encontrados. */
#include <stdio.h>

int main(){
    int i, j, cantidad_divisores = 0, cantidad_primos = 0;

    for (i = 2; i < 100; i++)
    {
        for(j = 2; j < i; j++){
            if(i % j == 0) cantidad_divisores++;  
        }
        if(cantidad_divisores == 0){
            printf("%d\n", i);
            cantidad_primos++;
        }
        cantidad_divisores = 0;
    }
    printf("Cantidad de primos es de: %d", cantidad_primos);

    return 0;
}