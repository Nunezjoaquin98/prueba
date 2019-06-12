#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "parser.h"
#include "Employee.h"
#include "funciones.h"


/** \brief Carga los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromText(char* path , LinkedList* pArrayListEmployee)
{
    int ret = 0;

    FILE* puntFile = fopen("data.csv","r");

    if(puntFile != NULL)
    {
        ret = parser_EmployeeFromText(puntFile,pArrayListEmployee);
    }

    return ret;
}

/** \brief Carga los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromBinary(char* path , LinkedList* pArrayListEmployee)
{

    int ret = 0;

    FILE* puntFile = fopen("data.csv","rb");

    if(puntFile != NULL)
    {
        ret = parser_EmployeeFromBinary(puntFile,pArrayListEmployee);
    }

    return ret;
}

/** \brief Alta de empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_addEmployee(LinkedList* pArrayListEmployee)
{
    int ret = 0;
    char auxId[6];
    char auxNombre[128];
    char auxHorasTrabajadas[9];
    char auxSueldo[7];

    Employee* empleadoNuevo = employee_new();

    printf("**** Alta de empleado *****\n\n");


    while(!function_getStringNumeros("\nIngrese el ID del empleado: ",auxId)) /// ID
    {
        printf("**** ERROR **** El ID debe tener solamente numeros...\n\n");
        system("pause");
    }

    while(!function_getStringLetras("\nIngrese el nombre del empleado: ",auxNombre)) ///NOMBRE
    {
        printf("**** ERROR **** El nombre debe tener solamente letras...\n\n");
        system("pause");
    }

    while(!function_getStringNumeros("\nIngrese la cantidad de horas trabajadas del empleado: ",auxHorasTrabajadas)) /// HS TRABAJADAS
    {
        printf("**** ERROR **** Las horas deben tener solamente numeros...\n\n");
        system("pause");
    }

    while(!function_getStringNumeros("\nIngrese el sueldo del empleado: ",auxSueldo)) /// SUELDO
    {
        printf("**** ERROR **** El sueldo debe tener solamente numeros...\n\n");
        system("pause");
    }

    ///seteamos todos los datos

    employee_setId(empleadoNuevo,atoi(auxId));
    employee_setNombre(empleadoNuevo,auxNombre);
    employee_setHorasTrabajadas(empleadoNuevo,atoi(auxHorasTrabajadas));
    employee_setSueldo(empleadoNuevo,atoi(auxSueldo));

    ll_add(pArrayListEmployee,empleadoNuevo);

    return ret;
}

/** \brief Modificar datos de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_editEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Baja de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_removeEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Listar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_ListEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Ordenar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_sortEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsText(char* path , LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsBinary(char* path , LinkedList* pArrayListEmployee)
{
    return 1;
}

