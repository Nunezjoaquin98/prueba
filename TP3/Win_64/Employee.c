#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Funciones.h"
#include "Employee.h"

int employee_setId(Employee* this,int id)
{
    int ret = 0;
    char auxId[10];

    if(this != NULL)
    {

        while(!function_getStringNumeros("\nIngrese el ID: ",auxId))
        {
            printf("\nError, el id debe ser solo numeros\n\n");
            system("pause");
        }
        id = atoi(auxId);
        if(id>0)
        {
            this->id = id;
            ret = 1;
        }

    }

    return ret;
}

int employee_getId(Employee* this,int* id)
{
    int ret = 0;

    if(this != NULL)
    {
        *id = this->id;
        ret = 1;

    }

    return ret;

}

int employee_setNombre(Employee* this,char* nombre)
{
    int ret = 0;
    char auxName[128];

    if(this != NULL)
    {

        while(!function_getStringLetras("\nIngrese el nombre: ",auxName))
        {
            printf("\nError, el nombre debe ser solo letras\n\n");
            system("pause");
        }
        strcpy(nombre,auxName);
        strcpy(this->nombre,nombre);
        ret = 1;
    }

    return ret;
}

int employee_getNombre(Employee* this,char* nombre)
{

    int ret = 0;

    if(this != NULL)
    {
        strcpy(nombre,this->nombre);
        ret = 1;

    }

    return ret;
}

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas)
{
    int ret = 0;
    char auxHsTrs[6];

    if(this != NULL)
    {

        while(!function_getStringNumeros("\nIngrese la cantidad de horas trabajadas: ",auxHsTrs))
        {
            printf("\nError, las horas trabajadas deben ser solo numeros\n\n");
            system("pause");
        }
        horasTrabajadas = atoi(auxHsTrs);
        if(horasTrabajadas>=0)
        {
            this->horasTrabajadas = horasTrabajadas;
            ret = 1;
        }

    }

    return ret;
}

int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas)
{
    int ret = 0;

    if(this != NULL)
    {
        *horasTrabajadas = this->horasTrabajadas;
        ret = 1;

    }

    return ret;
}

int employee_setSueldo(Employee* this,int sueldo)
{
    int ret = 0;
    char auxSueldo[10];

    if(this != NULL)
    {

        while(!function_getStringNumeros("\nIngrese el sueldo: ",auxSueldo))
        {
            printf("\nError, el sueldo deben ser solo numeros\n\n");
            system("pause");
        }
       sueldo = atoi(auxSueldo);
        if(sueldo>=0)
        {
            this->sueldo = sueldo;
            ret = 1;
        }

    }

    return ret;


}


int employee_getSueldo(Employee* this,int* sueldo)
{
    int ret = 0;

    if(this != NULL)
    {
        *sueldo = this->sueldo;
        ret = 1;

    }

    return ret;

}
