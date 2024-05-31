/*Ingresar N artículos (códigos) y sus correspondientes precios. Indicar el código del artículo más caro y el
precio del más barato. NOTA: todos los artículos tienen precios distintos. */
#include <stdio.h>

int main(){
    int i, iter, codigo, precio, acum_codigo = 0, acum_precio = 99999999;

    printf("Ingrese cantidad de codigos: ");
    scanf("%d", &iter);

    for (i = 1; i <= iter; i++)
    {
        printf("Ingrese codigo de articulo: ");
        scanf("%d", &codigo);
        printf("Ingrese precio del articulo: ");
        scanf("%d", &precio);

        if(acum_codigo <= precio) acum_codigo = codigo;
        if(acum_precio >= precio) acum_precio = precio;
    }
    printf("El codigo del articulo mas caro es: %d", acum_codigo);
    printf("\nEl precio del articulo mas barato es: %d", acum_precio);

    return 0;
}