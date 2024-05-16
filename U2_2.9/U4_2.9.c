/*Confeccionar un programa que ingrese un valor expresado en Kibibyte (KiB)1
y lo informe expresado en: 
TiB, GiB, MiB, con leyendas aclaratorias. (1MiB = 1024 KiB; 1GiB = 1024 MiB; 1TiB = 1024 GiB)*/
#include <stdio.h>

int main()
{
    float kb, mb, tb, gb;

    printf("Ingrese un valor en KiB :");
    scanf("%f", &kb);

    mb = kb / 1024;
    gb = mb / 1024;
    tb = gb / 1024;

    printf("El valor en Megabytes es: %.2f\n", mb);
    printf("El valor en Gigabytes es: %f\n", gb);
    printf("El valor en Terabytes es: %f", tb);

    return 0;
}
