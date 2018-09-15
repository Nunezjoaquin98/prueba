#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 1

int main()
{
    int legajos[TAM] ;
    int primerParcial[TAM] ;
    int segundParcial[TAM] ;
    char sexo[TAM] ;
    float promedio[TAM] ;
    char nombres[TAM][20] ;

    for(int i=0;i<TAM;i++)
    {
        printf("Ingrese el legajo: \n") ;
        scanf("%d",&legajos[i]) ;

        //primer parcial
        printf("Ingrese la nota del primer parcial: \n") ;
        fflush(stdin);
        scanf("%d",&primerParcial[i]);
        //segundo parcial
        printf("Ingrese la nota del segundo parcial: \n") ;
        fflush(stdin);
        scanf("%d",&segundParcial[i]);
        //promedio
        promedio[i] = (float) (primerParcial[i]+segundParcial[i])/2 ;
        //sexo
        printf("Ingrese el sexo, si es M o F: \n");
        fflush(stdin);
        scanf("%c",&sexo[i]);
        // nombre
        printf("Ingrese el nombre del alumno: \n");
        fflush(stdin);
        gets(nombres[i]);
    }

    system("cls");
    printf("LEGAJO   NOMBRE   SEXO   PRIMER PARCIAL   SEGUNDO PARCIAL   PROMEDIO\n") ;
    for(int i=0;i<TAM;i++)
    {

    printf("%d      %s      %c      %d      %d      %.2f\n",legajos[i],nombres[i],sexo[i],primerParcial[i],segundParcial[i],promedio[i]) ;
    }

    return 0;
}
