/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int hrs, sueldo;
    
    printf("Ingrese horas y sueldo por hr:");
    scanf("%d%d", &hrs, &sueldo);
    
    printf("El sueldo total es de: %d", hrs * sueldo);

    return 0;
}
