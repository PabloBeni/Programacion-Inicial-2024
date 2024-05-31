/*Calcular el factorial de un número ingresado por teclado. El factorial se calcula como el producto de todos
los enteros positivos desde 1 hasta el número. En matemática el factorial se expresa con el símbolo. Por
ejemplo, el factorial de 5 es 120 ya que 5! = 1 x 2 x 3 x 4 x 5 =120 */
#include <stdio.h>

int main(){
    int i, factorial, resultado = 1;
    
    printf("Ingrese un numero para calcular un factorial: ");
    scanf("%d", &factorial);

    for (i = 1; i <= factorial; i++)
    {
        resultado *= i;
    }
    printf("El factorial de %d, es: %d", factorial, resultado);    

    return 0;
}