#include <iostream>

int main()
{
    float kb, mb, tb, gb;

    printf("Ingrese un valor en KiB :");
    scanf_s("%f", &kb);

    mb = kb / 1024;
    gb = mb / 1024;
    tb = gb / 1024;

    printf("El valor en Megabytes es: %.2f\n", mb);
    printf("El valor en Gigabytes es: %f\n", gb);
    printf("El valor en Terabytes es: %f", tb);

    return 0;
}
