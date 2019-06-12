#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"
#include "funciones.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/


int main()
{
    int salir = 0;
    LinkedList* listaEmpleados = ll_newLinkedList();
    do
    {
        switch(menu())
        {
        case 1:
            if(controller_loadFromText("data.csv",listaEmpleados))
            {
                system("cls");
                printf("Se cargo correctamente...\n");
                system("pause");
            }
            else
            {
                system("cls");
                printf("No se pudo cargar correctamente...\n");
                system("pause");
            }
            break;
        case 2:
            if(controller_loadFromBinary("data.csv",listaEmpleados))
            {
                system("cls");
                printf("Se cargo correctamente...\n");
                system("pause");
            }
            else
            {
                system("cls");
                printf("No se pudo cargar correctamente...\n");
                system("pause");
            }
            break;
        case 10:
            printf("\nSaliendo...\n\n");
            salir = 1;
            break;
        default:
            printf("\nERROR - Debe ingresar un numero del 1 al 10.\n");
            system("pause");
            system("cls");
            break;
        }
    }while(salir == 0);
    return 0;
}
