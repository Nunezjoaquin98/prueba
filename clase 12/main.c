#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define TAM 100

typedef struct
{
    int id;
    char descripcion[20];
}eComida ;

typedef struct
{
    int dia;
    int mes;
    int anio;
}eFecha;

typedef struct
{
    int id;
    int idComida;
    int idEmp;
    eFecha fecha;
} eAlmuerzo ;

void cargarComidas(eComida comidas[]);
void listarComidas(eComida c[],int tam) ;
//void altaAlmuerzo(eAlmuerzo a[],int tamA,eComida c[],int tamC;eEmpleado e[],int tamE,eSector s[],int tamS,int* pId) ;

int main()
{
    char seguir;
    eComida comidas;
    eSector sectores[TAM];
   eEmpleado empleados[TAM];
    inicializarEmpleados(empleados,TAM);
    harcodearEmpleados(empleados);

    do
    {
        switch(menu())
        {
        case 1:
            altaEmpleado(empleados, TAM, sectores, 5);
            break;
        case 2:
            bajaEmpleado(empleados,TAM);
            break;
        case 3:
            ModificarEmpleado(empleados, TAM);
            system("pause");
            break;
        case 4:
            mostrarEmpleados(empleados, TAM, sectores, 5);
            break;
        case 5:
            ordenarEmpleadosXlegajo(empleados, TAM);
            system("pause");
            break;

        case 6:
            printf("Salir");
            system("pause");
            seguir = 'n';
            break;
        }
    }
    while(seguir == 's');

    return 0;
}


void cargarComidas(eComida comidas[])
{
    eComida food[]=
    {
        {1, "MILANESAS"},
        {2,"PIZZA"},
        {3,"ENSALADA"},
        {4,"UN BUEN ASADITO"},
        {5, "CHIPA"}
    };
for(int i = ;i < 5; i++)
    {
        comidas[i] = food[i];
    }
}

void listarComidas(eComida c[],int tam)
{
    printf("\n Lista de comidas\n\n");
    for(int i = 0;i<tam;i++)
    {
        printf(" %d  %10s\n",c[i].id,c[i].descripcion) ;
    }
}


//void altaAlmuerzo(eAlmuerzo a[],int tamA,eComida c[],int tamC;eEmpleado e[],int tamE,eSector s[],int tamS,int* pId)
