/*Se ingresa un número entero que representa una fecha con formato (ddmmaa). Se pide transformarlo a un 
número con formato (aammdd).*/
#include <stdio.h>

int main()
{
    int dd = 01, mm = 01, aa = 1999;

    printf("Ingrese Dia, Mes y A�o: ");
    scanf("%d%d%d", &dd, &mm, &aa);

    printf("En formato mmddaa es: %d %d %d", mm, dd, aa);

    return 0;
}
