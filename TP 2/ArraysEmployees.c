#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Funciones.h"
#include "ArraysEmployees.h"

int initEmployees(eEmployee list[], int len)
{
    int ret = 0;

    if(list != NULL && len > 0)
    {

        for(int i=0; i < len; i++)
        {

            list[i].isEmpty = 1;
        }
    }
    else
    {
        ret = -1;
    }

    return ret;
}

int searchEmpty(eEmployee list[],int len)
{
    int index = -1;
    for(int i=0; i<len ; i++)
    {
        if( list[i].isEmpty == 1)
        {
            index = i ;
            break;
        }
    }
    return index ;
}

int findEmployeeById(eEmployee list[], int len, int id)
{

    for(int i=0; i < len; i++)
    {

        if( list[i].id == id && list[i].isEmpty == 0)
        {
            return i;
            break;
        }
    }
    return -1;

}

void showEmployees(eEmployee list[],int len)
{
    system("cls");
    printf("\n\n\tID\t\tNOMBRE\t\tAPELLIDO\t\tSALARIO\t\tSECTOR\n");

    for(int i=0; i<len; i++)
    {
        if(list[i].isEmpty == 0)
        {
            showEmployee(list[i]) ;
        }
    }

}

void showEmployee(eEmployee list)
{
    printf("\n\t%d\t\t%s\t\t%s\t\t%.2f\t\t%d\n",list.id,list.name,list.lastName,list.salary,list.sector);
}

int addEmployee(eEmployee list[], int len)
{
    eEmployee newEmployee ;
    int ret;
    int index ;
    char auxName[21];
    char auxLastName[21];
    char auxSalary[10] ;
    char auxSector[10] ;


    if(list != NULL && len > 0)
    {
        system("cls");
        fflush(stdin);
        index = searchEmpty(list,len) ;
        printf("\n\t------- Alta empleado -------\n\n");

        if(index == -1)
        {
            printf("No hay lugar en el sistema. \n") ;
            ret = -1 ;
            system("pause");

        }
        else
        {

            index++; // se suma uno asi el primer empleado no tiene id "0"
            printf("\nNuevo empleado, ID numero %d. \n\n",index) ;
            newEmployee.id = index ;
            while(!function_getStringLetras("Ingrese nombre: ",auxName))
            {
                printf("El nombre solo debe tener letras.\n\n") ;
                system("pause");
                system("cls");

            }
            while(!function_getStringLetras("Ingrese apellido: ",auxLastName))
            {
                printf("El apellido debe tener solo letras.\n\n") ;
                system("pause");
                system("cls");

            }
            while(!function_getStringNumeros("Ingrese el salario: ",auxSalary) && auxSalary > 0)
            {
                printf("**** Error ****\n\n");
                system("pause");
                system("cls");

            }
            while(!function_getStringNumeros("Ingrese el sector: ",auxSector))
            {
                printf("Error el sector debe tener solo numeros.\n\n");
                system("pause");
                system("cls");
            }
            // se copian todos los datos del nuevo empleado.

            strcpy(newEmployee.name,auxName) ;
            strcpy(newEmployee.lastName,auxLastName) ;
            newEmployee.salary = atoi(auxSalary) ;
            newEmployee.sector = atoi(auxSector) ;
            newEmployee.isEmpty = 0;
            list[index] = newEmployee ;
            system("pause");
            system("cls");
            printf("\n\nEMPLEADO DADO DE ALTA CON EXITO:\n\n");
            showEmployee(list[index]);
            printf("\n\n\n");
            system("pause");
            ret = 0 ;
        }
    }
    else
    {
        ret = -1 ;
    }
    return ret;
}

void modifyEmployee(eEmployee list[], int len)
{
    int id;
    int index;
    char salir = 'n';

    char auxId[5];
    char newSalary[5];
    char newSector[5];
    char newName[51] ;
    char newLastName[51] ;


    system("cls");
    printf("\t\t  *** Modificar  empleado ***\n\n");
    showEmployees(list,len);
    if(!function_getStringNumeros("\nIngrese id: ",auxId))
    {
        printf("*** ERROR *** El id debe contener solo numeros.\n") ;
    }

    id = atoi(auxId) ;
    index = findEmployeeById(list, len, id);


    if( index == -1)
    {
        printf("No hay ningun empleado con id %d.\n\n", id);
        system("pause");
    }
    else
    {


        showEmployee(list[index]) ;
        do
        {

        switch(menuModificar())
        {
        case 1:
            showEmployee(list[index]) ;
            printf("\n\n");
            //modificar nombre
            while(!function_getStringLetras("Ingrese nuevo nombre: ",newName))
            {
                printf("*** Error *** El nombre debe tener solo letras.");
            }
                strcpy(list[index].name,newName);
                printf("\n\n        ***Modificacion exitosa***\n\n");
                system("pause");
                system("cls");
                break ;
        case 2:
// Modifica apellido
            showEmployee(list[index]) ;
            printf("\n\n");
            while(!function_getStringLetras("Ingrese nuevo apellido: ",newLastName))
            {
                printf("*** ERROR *** El apellido debe tener solo letras.\n\n");
            }
                strcpy(list[index].lastName,newLastName);
                printf("\n\n        ***Modificacion exitosa***\n\n");
                system("pause");
                system("cls");
                break ;
        case 3:
            // modifica sueldo
            showEmployee(list[index]) ;
            printf("\n\n");
            while(!function_getStringNumeros("Ingrese nuevo sueldo: ",newSalary))
            {
                printf("*** ERROR *** El salario debe contener solo numeros.\n\n") ;
            }
                list[index].salary = atoi(newSalary);
                printf("\n\n        ***Modificacion exitosa***\n\n");
                system("pause");
                system("cls") ;
                break ;
        case 4:
            // MODIFICA SECTOR
            showEmployee(list[index]) ;
            printf("\n\n");
            while(!function_getStringNumeros("Ingrese nuevo sector: ",newSector))
            {
                printf("*** ERROR *** El sector tiene que ser un numero\n\n") ;
            }
            list[index].sector = atoi(newSector);
            printf("\n\n        ***Modificacion exitosa***\n\n");
            system("pause");
            system("cls") ;
            break ;
        case 5:
            printf("\n\t***Regresando***\n\n");
            salir = 's';
            system("pause");
            system("cls");
            break;
        default:
            printf("*** ERROR *** Debe ingresar un numero del 1 al 5.\n");
            system("pause");
            break;
        }
        }while(salir == 'n');
    }
}

void hardcodeoEmpleados(eEmployee* list)
{

    eEmployee empleados[]={
    {1,"Roman", "Riquelme",10000,2},
    {2,"Martin", "Palermo",90055,1},
    {3,"Carlos", "Bianchi",15000,2},
    {4,"Pipa", "Benedetto",40000,3},
    {5,"Sabandija", "Andrada",72000,1},
    };
    for(int i = 0; i< 5;i++)
    {
        list[i] = empleados[i];
    }
};
