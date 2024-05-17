// PROGRAMACION INICIAL  -  Ejercicio tipo  1er parcial
/*Se procesan las altas de ingresantes a Ingeniería.
Por cada inscripto se ingresa:
- DNI (7 u 8 dígitos)
- Carrera (char: I informática, E electrónica, C civil, M mecánica)
- Edad (>=15 y <=85)
- 10 notas correspondiente a las notas de evaluaciones obtenidas en el curso de ingreso (cada una entre 0 y 10)
 
La carga de inscripciones finaliza con un DNI igual a 0.
Todos los datos de ingreso deben estar validados.
Se pide:
    a) Mostar la cantidad de inscriptos separados por rango etario:
        • < a 18
        • entre 18 y <25
        • entre 25 y <40
        • >= a 40
    b) Indicar si alguna carrera no tuvieron inscriptos.
    c) Mostrar el mayor promedio obtenido, con el DNI del alumno.
    d) Mostrar para cada alumno el DNI y el promedio de sus notas. */
#include<stdio.h>
#include <ctype.h>

main ()
{
int DNI, edad, nota, i, sum, MayorDNI;
int aux18=0, aux18_25=0, aux25_40=0, aux40=0;
int bandI=0, bandE=0, bandC=0, bandM=0,band=0;
float prom, Mayorprom=0;
char carrera;
int bandera=1;

do
    {
     printf("\n Ingrese el DNI: ");
     scanf("%d",&DNI);
    }
while (( DNI <1000000 || DNI>99999999) && DNI!=0);

while (DNI !=0)
{
    do
    {
     printf(" Ingrese la carrera: ");
     scanf("%c",&carrera);
     carrera=toupper(carrera);
     fflush(stdin);
    }
    while ( carrera!='I' && carrera!='E' && carrera!='C' && carrera!= 'M');

    do
    {
     printf(" Ingrese la edad: ");
     scanf("%d",&edad);
    }
    while ( edad <15 || edad>85);

    sum=0;
    for(i=0;i<10;i++)
        {
            band=0;
         do{
            if (band==0) band=1;
            else printf("Nota invalida\n");
            printf(" Ingrese la nota: ");
            scanf("%d",&nota);
         }
         while (nota<0 || nota>10);


        sum+=nota;
        }

    if(edad<18)
        {
        aux18 ++;
        }
    else
        {
         if(edad>=18&&edad<25)
            aux18_25 ++;
         else
            if(edad>=25&&edad<40)
                aux25_40 ++;
            else
                aux40 ++;
        }

    switch(carrera)
        {
        case 'I': bandI ++;
                  break;
        case 'E': bandE ++;
                  break;
        case 'C': bandC ++;
                  break;
        case 'M': bandM ++;
                  break;
        }

     prom=sum/10.0;
     printf("\n\n PUNTO D");
     printf("\n DNI del alumno %d", DNI);
     printf("\n Promedio del alumno %.2f", prom);

     if(bandera==1|| prom>Mayorprom)
        {bandera=0;
         Mayorprom=prom;
         MayorDNI=DNI;
        }

    do
        {
        printf("\n\n Ingrese el DNI: ");
        scanf("%d",&DNI);
        }
    while (( DNI <1000000 || DNI>99999999) && DNI!=0);
} //Llave de cierre while (DNI !=0)


printf("\n\n PUNTO A");
printf("\n Cantidad de alumnos menores a 18 anios: %d",aux18);
printf("\n Cantidad de alumnos entre 18 anios y menores a 25 anios: %d",aux18_25);
printf("\n Cantidad de alumnos entre 25 anios y menores a 40 anios: %d",aux25_40);
printf("\n Cantidad de alumnos mayores o igual a 40 anios: %d",aux40);

printf("\n\n PUNTO B");
if (bandI==0)
    printf("\n No hubo inscriptos en la carrera de Informatica");
if (bandE==0)
    printf("\n No hubo inscriptos en la carrera de Electronica");
if (bandC==0)
    printf("\n No hubo inscriptos en la carrera de Civil");
if (bandM==0)
    printf("\n No hubo inscriptos en la carrera de Mecanica");

printf("\n\n PUNTO C");
printf("\n El DNI del alumno con mayor promedio fue: %d",MayorDNI);
printf("\n El mayor promedio fue: %.2f",Mayorprom);

return(0);

}