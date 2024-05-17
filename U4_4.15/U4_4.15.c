/*Un negocio de artículos de computación vende DVDs según la siguiente escala de precios:
• sueltos, entre 1 y 9 a $15 c/u.
• la caja de 10 cuesta $120.
• la caja de 50 cuesta $500.
Si la compra excede las 100 unidades se efectúa un descuento del 10%.
NOTA: se aceptan compras entre 1 y 500 DVDs.
Se pide que se ingrese una cantidad de DVDs que se quiere comprar y calcule e informe el importe a pagar. */
#include <stdio.h>

int main(){
    int cantidad_de_dvd;
    float costo_final;
    const float consto_unidad = 15;

    printf("Ingrese cantidad de DVDs comprados: ");
    scanf("%d", &cantidad_de_dvd);

    if(cantidad_de_dvd <= 9){
        costo_final = consto_unidad;
    }else if(cantidad_de_dvd == 10){
        costo_final = 120;
    }else if(cantidad_de_dvd == 50){
        costo_final = 500;
    }else{
        costo_final = (consto_unidad * cantidad_de_dvd) - ((consto_unidad * cantidad_de_dvd) * 0.1);
    }

    printf("El precio final es de %.2f: ", costo_final);

    return 0;
}