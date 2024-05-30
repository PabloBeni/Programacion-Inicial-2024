/*Confeccionar un programa para calcular la suma de los primeros N números naturales. El valor de N lo
solicita por teclado el programa.*/
#include <stdio.h>

int main(){
    int i, num, acum = 0;

    printf("Ingrese numero natural: ");
    scanf("%d", &num);

    for (i = 1; i < num; i++)
    {
        acum += i;
    }
    
    printf("%d", acum);
    return 0;
}