#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"


int employee_compare(void* pEmployeeA,void* pEmployeeB)
{
    return 0;
}


void employee_print(Employee* this)
{

}


Employee* employee_new(void)
{

    Employee* returnAux = NULL;

    return returnAux;

}

void employee_delete(Employee* this)
{


}

int employee_setId(Employee* this, int id)
{
    int ret;

    if(id > 0)
    {
        this->id = id;
    }else
    {
        ret = -1;
    }

    return ret;
}

int employee_getId(Employee* this)
{

    return this->id;

}

int employee_setName(Employee* this, char name)
{

    this->name = name;


    return 0;
}

int employee_setlastName(Employee* this, char lastName)
{

    this->lastName = lastName;


    return 0;
}

