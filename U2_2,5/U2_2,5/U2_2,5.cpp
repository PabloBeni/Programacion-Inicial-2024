#include <iostream>

int main()
{
    int cnt, lts_1, lts_2, lts_3;

    printf("Ingresar cantidad de tarros: ");
    scanf_s("%d", &cnt);


    lts_1 = cnt * 0.5;
    lts_2 = lts_1 * 0.30;
    lts_3 = cnt - (lts_1 + lts_2);
    printf("La cantidad de tarros de 1Lts es del 50%, es decir: %d\n", lts_1);
    printf("La cantidad de tarros de 4Lts es del 30%, es decir: %d\n", lts_2);
    printf("La cantidad de tarros de 20Lts es el resto de los demas, es decir: %d", lts_3);

    return 0;
}
