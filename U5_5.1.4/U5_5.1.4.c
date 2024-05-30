/*Se ingresan 100 letras. Determinar la cantidad de vocales ingresadas*/
#include <stdio.h>
#include <ctype.h>

int main(){
    int i, cant = 0;
    char letra;

    for (i = 1; i <= 100; i++)
    {
        printf("Ingrese una vocal: ");
        scanf("%c", &letra);
        fflush(stdin);
        letra = toupper(letra);
        if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') cant++;
    }
    printf("La cantidad de vocales que ingreso es de: %d", cant);

    return 0;
}