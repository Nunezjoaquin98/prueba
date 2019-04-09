#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ELEMENTOS 5
int main()
{
    ///ORDENAMIENTO POR UN CRITERIO
    /*
    int i,j;
    char nombre[ELEMENTOS][50] = {"Pedro","Carlos","Juan","Ernesto","Mario"};
    char apellido[ELEMENTOS][50]= {"Gomez","Fernandez","Paz","Perez","Lopez"};
    char auxiliar[50];
    for(i=0; i< ELEMENTOS-1; i++)
    {
        for(j=i+1; j<ELEMENTOS; j++)
        {
            if(strcmp(apellido[i],apellido[j])>0)
            {
                strcpy(auxiliar,nombre[i]);
                strcpy(nombre[i],nombre[j]);
                strcpy(nombre[j], auxiliar);

                strcpy(auxiliar,apellido[i]);
                strcpy(apellido[i],apellido[j]);
                strcpy(apellido[j], auxiliar);
            }
        }
    }
    for(i=0; i<ELEMENTOS; i++)
    {
        printf("\nApellido: %s \tNombre: %s",apellido[i],nombre[i]);
    }
    return 0; */

    /// ORDENAMIENTO CON DOS CRITERIOS



    int legajo[ELEMENTOS]  = {1,2,3,4,5} ;
    int legajoAux, i, j;
    float salario[ELEMENTOS] = {15000,20000,35500,10000,5000} ;
    float salarioAux;
    char nombre[ELEMENTOS][31]  = {"Joaquin Nunez","Tomi Zorzi","Renzo","Chicho","Lauti"} ;
    char nombreAux[31];


    for(i=0; i<ELEMENTOS-1; i++)
    {
        for(j=i+1; j<ELEMENTOS; j++)
        {
            if(salario[i] < salario[j])
            {
                strcpy(nombreAux, nombre[i]);
                strcpy(nombre[i], nombre[j]);
                strcpy(nombre[j], nombreAux);
                legajoAux = legajo[i];
                legajo[i] = legajo[j];
                legajo[j] = legajoAux;
                salarioAux = salario[i];
                salario[i] = salario[j];
                salario[j] = salarioAux;
            }
            if(salario[i] == salario[j])
            {
                if(strcmp(nombre[i],nombre[j])>0)
                {
                    strcpy(nombreAux, nombre[i]);
                    strcpy(nombre[i], nombre[j]);
                    strcpy(nombre[j], nombreAux);
                    legajoAux = legajo[i];
                    legajo[i] = legajo[j];
                    legajo[j] = legajoAux;
                    /*salarioAux = salario[i];
                    salario[i] = salario[j];
                    salario[j] = salarioAux;*/
                }
            }
        }
    }
    system("cls");
    printf("\nLegajo\tNombre\t\t\tSalario ");
    for(i=0; i<ELEMENTOS; i++)
    {
        printf("\n%d\t%s\t\t\t%.2f", legajo[i], nombre[i], salario[i]);
    }
    return 0;
}

