#include <iostream>

int main()
{
    int dd = 01, mm = 01, aa = 1999;

    printf("Ingrese Dia, Mes y Año: ");
    scanf_s("%d%d%d", &dd, &mm, &aa);

    printf("En formato mmddaa es: %d %d %d", mm, dd, aa);

    return 0;
}
