/*La farmacia Sindical efectúa descuentos a sus afiliados según el importe de la compra con la siguiente
escala:
a. menor de $55 el descuento es del 4.5%
b. entre $55 y $100 el descuento es del 8%
c. más de $100 el descuento es del 10.5%
Confeccionar un programa que reciba un importe e informe: el descuento y el precio neto a cobrar, con
mensajes aclaratorios.*/
#include <stdio.h>

int main(){
    float precio, precio_final = 0;

    printf("Ingrese el precio del producto: ");
    scanf("%f", &precio);

    if(precio < 55){
        precio_final = precio - (precio * 0.045);
        printf("EL descuento aplicado es de 4.5%c", 37);
    }else if(precio >= 55 && precio <= 100){
        precio_final = precio - (precio * 0.08);
        printf("EL descuento aplicado es de 8%c", 37);
    }else if(precio > 100){
        precio_final = precio - (precio * 0.105);
        printf("EL descuento aplicado es de 10.5%c", 37);
    }

    printf("\nEl precio original es de: $%.2f \nEl precio con descuento es de: $%.2f", precio, precio_final);

    return 0;
}