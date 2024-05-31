/*Confeccionar un programa que determine e informe los números perfectos comprendidos entre 1 y 9000.
Un número es perfecto cuando es igual a la suma de sus divisores positivos menores que él. */
#include <stdio.h>

int main(){
    int i, j, acum = 0; 

    for (i = 1; i <= 9000; i++)
    {
        for(j = 1; j < i; j++){
            if(i % j == 0) acum += j;
        }
        if(acum == i) printf("%d es un numero perfecto.\n", i);
        acum = 0;
    }
    
    return 0;
}