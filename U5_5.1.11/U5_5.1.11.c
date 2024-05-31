/*Ingresar 18 valores de temperatura distintos de cero. Se pide determinar e informar cuantas ternas (tres
valores seguidos) de valores positivos y cuantas de negativos hay. */
#include <stdio.h>

int main(){
    int i, temperatura, num_mayor = 0, num_menor = 0; 

    for (i = 1; i <= 12; i++)
    {   
        printf("Ingrese una temperatura distinto de cero: ");
        scanf("%d", &temperatura);

        if(temperatura > 0) num_mayor++;
        else if(temperatura < 0) num_menor++; 
    }

    printf("Terna valores positivos: %d\nTerna valores negativos: %d", num_mayor / 3, num_menor / 3);

    return 0;
}