#include <iostream>

int main()
{
    int num, unidad, decena, centena; 
    printf("Ingrese un numero de tres cifras: ");
    scanf_s("%d", &num);

    unidad = num / 100;
    decena = num / 10;
    centena = num;

    printf("%d %d %d", unidad, decena, centena);
    return 0;
}
