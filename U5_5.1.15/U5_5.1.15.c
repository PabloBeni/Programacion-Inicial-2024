/*Se realizó un concurso de tiro al blanco. Existen 5 participantes y cada uno de ellos efectúa 3 disparos,
registrándose las coordenadas X-Y de cada disparo. Determinar:
a. Cuantos disparos se efectuaron en cada cuadrante por cada participante
b. Cuantos disparos se efectuaron en total en el centro.
NOTA: no considere disparos sobre los ejes. */
#include <stdio.h>

int main(){
    int i, j, corx, cory, cuadrante_1 = 0, cuadrante_2 = 0, cuadrante_3 = 0, cuadrante_4 = 0, disparo_centro = 0;

    for (i = 1; i <= 5; i++)
    {
        printf("\nParticipante n %d:", i);
        for(j = 1; j <= 3; j++)
        {
            printf("\nDisparo %d", j);
            printf("\nIngrese cordenaa X del disparo: ");
            scanf("%d", &corx);
            printf("Ingrese cordenaa Y del disparo: ");
            scanf("%d", &cory);

            if(corx > 0 && cory > 0) cuadrante_1++;
            else if(corx < 0 && cory > 0) cuadrante_2++;
            else if(corx < 0 && cory < 0) cuadrante_3++;
            else if(corx > 0 && cory < 0) cuadrante_4++;

            if(corx == 0 && cory == 0) disparo_centro++;
        }      
        printf("Efectuo:\n%d en el cuadrante 1\n%d en el cuadrante 2\n%d en el cuadrante 3\n%d en el cuadrante 4", cuadrante_1, cuadrante_2, cuadrante_3, cuadrante_4);

        cuadrante_1 = 0;
        cuadrante_2 = 0;
        cuadrante_3 = 0;
        cuadrante_4 = 0;
    }
    
    printf("Cantidad de disparos en el centro: %d", disparo_centro);
    return 0;
}