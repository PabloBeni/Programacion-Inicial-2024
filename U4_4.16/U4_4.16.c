/* Un negocio vende distintos artículos identificados por un código, según se muestra:
• código 1; 10; 100: 10 pesos la unidad.
• código 2; 22; 222: 7 pesos la unidad. La caja de 10 unidades vale 65 pesos.
• código 3; 33: 3 pesos la unidad. Si la compra es por más de 10 unidades se hace un descuento del
10% sobre el total de la compra.
• código 4; 44: 1 peso la unidad.
Confeccionar un programa que ingrese como dato el código de un artículo y la cantidad a comprar y se
informe el importe de la compra, con las siguientes leyendas:

ARTÍCULO xxxxx CANTIDAD xxxx IMPORTE A PAGAR $ xxxx.xx */
#include <stdio.h>

int main(){
    int codigo_articulo, cantidad, precio_unidad;
    float descuento = 0, precio_final;

    printf("Ingrese codigo de articulos: ");
    scanf("%d", &codigo_articulo);
    printf("Ingrese cantidad de compra: ");
    scanf("%d", &cantidad);

    if(codigo_articulo == 100 || codigo_articulo == 10 || codigo_articulo == 1){
        precio_unidad = 10;
    }else if(codigo_articulo == 2 || codigo_articulo == 22 || codigo_articulo == 222){
        if(cantidad >= 10) precio_unidad = 7;
        else precio_unidad = 65;
    }else if(codigo_articulo == 3 || codigo_articulo == 33){
        precio_unidad = 3;
        if(cantidad >= 10) descuento = 0.1;
    }else if(codigo_articulo == 4 || codigo_articulo == 44){
        precio_unidad = 1;
    }else{
        printf("El producto no existe");
    }

    precio_final = (cantidad * precio_unidad) - (cantidad * precio_unidad) * descuento;

    printf("Articulo: %d, Cantidad: %d, Importe a pagar: $%.2f", codigo_articulo, cantidad, precio_final);

    return 0;
}