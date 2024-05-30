/*Se ingresan 50 números enteros. Determinar el promedio de los números pares.*/
#include <stdio.h>

int main(){
    int i, prom, cantidad_pares = 0, acum = 0;

    for (i = 1; i <= 50; i++)
    {
        if(i % 2 == 0){
            acum += i;
            cantidad_pares++;
        }
    }
    
    prom = acum / cantidad_pares;

    printf("Promedio es: %d", prom);
    return 0;
}