#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "ArraysEmployees.h"
#define SIZE 1000 // se define SIZE para utilizar como tamaño del array employee que se declarara mas abajo

int main()
{
    char salir = 'n';
    eEmployee empleados[SIZE]; // se crea un arrays tipo eEmployee con el tamaño de 1000

    initEmployees(empleados,SIZE); // Se inicializa todos los empleados en 1.

    do
    {
        switch(menu())
        {






        case 5:
            printf("\n\t***Saliendo***\n\n");
            salir = 's';
            system("pause");
            system("cls");
            break;
        default:
            printf("*** ERROR *** Debe ingresar un numero del 1 al 5\n\n") ; // el default se utiliza por si se ingresa un numero que no sea del 1 al 5
            system("pause");
            system("cls");
            break;
        }
    }
    while(salir == 'n');


    return 0;
}
