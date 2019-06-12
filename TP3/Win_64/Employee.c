#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Funciones.h"
#include "Employee.h"


Employee* employee_new()
{

    Employee* nuevo;

    nuevo = (Employee*)malloc(sizeof(Employee));

    return nuevo;


}


int employee_setId(Employee* this,int id)
{
    int ret = 0;

    if(this != NULL)
    {
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

    if(this != NULL)
    {
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

        if(sueldo>=0)
        {
            this->sueldo = sueldo;
            ret = 1;
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
