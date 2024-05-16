/*Conociendo la cantidad de tarros de pintura que existe en un depósito de una pinturería y sabiendo que el 
50% son tarros de 1Lt, el 30% tarros de 4Lts. y el resto tarros de 20Lts. Determinar la cantidad de tarros de 
1Lt., 4Lts. Y 20 Lts.*/
#include <stdio.h>

int main()
{
    int cnt, lts_1, lts_2, lts_3;

    printf("Ingresar cantidad de tarros: ");
    scanf("%d", &cnt);


    lts_1 = cnt * 0.5;
    lts_2 = lts_1 * 0.30;
    lts_3 = cnt - (lts_1 + lts_2);
    printf("La cantidad de tarros de 1Lts es del 50%, es decir: %d\n", lts_1);
    printf("La cantidad de tarros de 4Lts es del 30%, es decir: %d\n", lts_2);
    printf("La cantidad de tarros de 20Lts es el resto de los demas, es decir: %d", lts_3);

    return 0;
}
