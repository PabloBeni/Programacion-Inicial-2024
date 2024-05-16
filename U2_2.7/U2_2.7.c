/*Se ingresa un número entero de 3 cifras. Descomponerlo en unidad, decena y centena.*/
#include <stdio.h>

int main()
{
    int num, unidad, decena, centena; 
    printf("Ingrese un numero de tres cifras: ");
    scanf("%d", &num);

    unidad = num / 100;
    decena = num / 10;
    centena = num;

    printf("%d %d %d", unidad, decena, centena);
    return 0;
}
