/*Un fabricante de repuestos para tractores ha descubierto que ciertos artículos identificados por los
números de catálogo 12121 al 18081; 30012 al 45565 y 67000 al 68000 son defectuosos. Se desea
confeccionar un programa al que informándole el número de catálogo indique si el artículo es o no
defectuoso. Los artículos del catálogo van desde el 1200 al 90000. Si se ingresa otro número informar
“FUERA DE CATALOGO”.*/
#include <stdio.h>

int main(){
    int nro_catalogo;

    printf("Ingrese numero de catalogo: ");
    scanf("%d", &nro_catalogo);

    if(nro_catalogo >= 1200 && nro_catalogo <= 90000){
        if(nro_catalogo == 12121 || nro_catalogo == 18081 || nro_catalogo == 30012 || nro_catalogo == 45565 || (nro_catalogo >= 67000 && nro_catalogo <= 68000)){
            printf("Producto defectuoso");    
        }else{
            printf("Producto NO defectuoso");
        }
    }else{
        printf("FUERA DE CATALOGO");
    };

    return 0;
}