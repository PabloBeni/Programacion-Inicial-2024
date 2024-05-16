/**Confeccionar un programa que permita convertir grados sexagesimales a radianes y viceversa, según el
valor de un código que se ingresa junto al valor. Si código = 1 se ingresan grados, si es 2 se ingresan radianes. **/
#include <stdio.h>

int main(){
    int codigo, grados, radianes;
    float result;
    const float PI = 3.1415;

    printf("Ingrese que quiere convertir\n");
    printf("Grados a Radianes...........................1\n");
    printf("Radianes a Grados...........................2\n");
    printf("Ingrese un codigo: ");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 1:
        printf("Ingrese un valor en grados: ");
        scanf("%d", &grados);

        result = grados * (PI/180);
        printf("%d° son %.2f", grados, result);
        break;
    case 2:
        printf("Ingrese un valor en radianes: ");
        scanf("%d", &radianes);

        result = radianes * (180/PI);
        printf("%d° son %.2f°", radianes, result);
        break;
    default:
        printf("Opcion no existe.");
        break;
    }

    return 0;
}