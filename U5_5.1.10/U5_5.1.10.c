/* Confeccionar un programa que solicite el ingreso de un valor entero N < 12 y luego una lista de N números
reales sobre la cual debe calcular:
a. el promedio de los positivos.
b. el promedio de los negativos.
c. la cantidad de ceros.
Si el valor ingresado N es mayor que 12 informar 'VALOR EXCEDIDO” y si es menor o igual a 0 informar
“CANTIDAD INVALIDA”. */
#include <stdio.h>

int main(){
    int i, iter, cantidad_ceros = 0, cantidad_pos = 0, cantidad_neg = 0;
    float num, acum_pos = 0, acum_neg = 0; 

    printf("Ingrese un numero menor a 12: ");
    scanf("%d", &iter);

    if(iter > 12){
        printf("VALOR EXCEDIDO");
    }else if(iter <= 0){
        printf("CANTIDAD INVALIDA");
    }else{
        for (i = 1; i <= iter; i++)
        {
            printf("Ingrese un numero real: ");
            scanf("%f", &num);

            if(num > 0){
                acum_pos += num;
                cantidad_pos++;
            }else if(num < 0){
                acum_neg += num;
                cantidad_neg++;
            }else{
                cantidad_ceros++;
            }
        }
    }
    printf("Promedio de positivos: %.2f\nPromedio de negativos: %.2f\nCantidad de ceros: %d", acum_pos / cantidad_pos, acum_neg / cantidad_neg, cantidad_ceros);

    return 0;
}