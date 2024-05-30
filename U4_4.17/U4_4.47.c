/*Confeccionar un programa que pueda determinar el importe a pagar por una prestación médica según su
código. Los importes se cobran según la siguiente tabla: 
Código Importe
A 20
D 40
F 60
M 150
T 150 */

#include <stdio.h>
#include <ctype.h>

int main(){
    int num_historia;
    char cod_prestacion;
    float importe = 0;

    printf("Ingrese numero de historia del paciente: ");
    scanf("%d", &num_historia);
    fflush(stdin);
    printf("Ingrese codigo de prestación: ");
    scanf("%c", &cod_prestacion);

    cod_prestacion = toupper(cod_prestacion);

    switch (cod_prestacion)
    {
    case 'A':
        importe = 20;
        break;
    case 'D':
        importe = 40;
        break;
    case 'F':
        importe = 60;
        break;
    case 'M':
        importe = 150;
        break;
    case 'T':
        importe = 150;
        break;
    }

    printf("Ticket de Servicio \n -Numero de historia: %d \n -Codigo de prestación: %c \n -Importe a pagar: %.2f", num_historia, cod_prestacion, importe);

    return 0;
}