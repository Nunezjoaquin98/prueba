#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 20
typedef struct {
int legajo;
char nombre[20];
char apellido[20];
char sexo ;
float sueldo;
int isEmpty;
}eEmpleado;
int menu ( ) ;
void inicializarEmpleado (eEmpleado lista[], int tam) ;
void mostrarEmpleados(eEmpleado lista[],int tam) ;
void mostrarEmpleado (eEmpleado unEmpleado) ;
int buscarLibre(eEmpleado lista[],int tam) ;

int main()
{
char seguir = 's' ;
eEmpleado empleados[TAM];
inicializarEmpleado(empleados)
do{
switch(menu())
{
    case 1:
}





   while (seguir == 's')
 }


    return 0;
}



 int menu ( )
 {
     int opcion;


    str
     system("cls") ;
     printf("\n*** Menu de Opciones ***\n\n");
     printf("1-Alta \n");
     printf("2-Baja \n") ;
     printf("3-Modificar \n");
     printf("4-Listar Empleados");
     printf("5-O")
     printf("Ingrese opcion: " ) ;
     scanf("&d",&opcion) ;
     return opcion ;
}
void inicializarEmpleado (eEmpleado lista[], int tam)
{
    int i ;
    for(i= 0;i<tam;i++)
    {
        lista[i].isEmpty = 1; // Esta vacio, por eso el 1(true)
    }
}
void mostrarEmpleado (eEmpleado unEmpleado)
{

    printf("%d   %s   %c   %2.f\n",unEmpleado.legajo,unEmpleado.nombre,unEmpleado.sexo);
}
void mostrarEmpleados(eEmpleado lista[],int tam)
{
    system("cls") ;
    printf("Legajo Nombre Sexo Sueldo\n\");

    for(int i=0;i < tam;i++)
    {
        if(lista[i].isEmpty == 0)
        {
            mostrarEmpleado(lista[i]) ;
        }
    }
}
int buscarLibre(eEmpleado lista[],int tam)
{
    int indice = -1;
    for(i=0;i< tam;i++)
    {
        if( lista[i].isEmpty == 1)
        {
            indice = i ;
            break;
        }
    }
    return indice;
}
int buscarEmpleado (eEmpleado lista[],int legajo,int tam)
{
    int indice ;
    int legajoBuscado;

    for(i=0;i<tam;i++)
    {
        if(lista[i].legajo == legajo && lista[i].isEmpty == 0)
            indice= i ;
        break ;
    }
    return indice;
}

void altaEmpleado (eEmpleado lista[],int tam)
{
    if(buscarLibre(lista[],tam) != -1)
    {
        printf("Ingrese nombre del empleado: \n") ;
        gets(lista.nombre);
        printf("Ingrese apellido del empleado: \n");
        gets(lista.apellido) ;
    }
}
