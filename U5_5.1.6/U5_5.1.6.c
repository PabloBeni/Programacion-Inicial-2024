/*Ingresar N y N Números naturales. Determinar e informar:
a. La sumatoria de los valores múltiplos de 3.
b. La cantidad de valores múltiplos de 5.
c. La sumatoria de los valores que se ingresan en orden par. */
#include <stdio.h>

int main(){
    int i, num, n, acum_m3 = 0, acum_m5 = 0, acum_par = 0;
    
    printf("Ingrese un numero natural(iterador): ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        printf("Ingrese un numero natural: ");
        scanf("%d", &n);

        if(n % 3 == 0) acum_m3 += n;
        if(n % 5 == 0) acum_m5++;
        if(i % 2 == 0) acum_par += n;
    }
    
    printf("Los valores son los siguientes\n-Sumatoria de valores multiplos de 3: %d\n-Cantidad de valores multiplos de 5: %d\n-Sumatorio de los valores ingresados en orden par: %d", acum_m3, acum_m5, acum_par);
    
    return 0;
}