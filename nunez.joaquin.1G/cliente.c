#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "biblotecaNunez.h"
#include "cliente.h"

void initClientes(eCliente list[],int len)
{
    for(int i=0; i < len; i++)
    {

        list[i].isEmpty = 1;
    }
}

int searchEmpty(eCliente list[],int len)
{
    int index = -1;
    for(int i=0; i< len ; i++)
    {
        if( list[i].isEmpty == 1)
        {
            index = i ;
            break;
        }
    }
    return index ;
}

int menu ( )
{
    char auxOption[2];
    int option;
    system("cls") ;
    printf("\n*** Menu de Opciones ***\n\n");
    printf("1- CLIENTES\n");
    printf("2- ALQUILERES \n") ;
    printf("3- SALIR\n\n") ;
    while(!function_getStringNumeros("Ingresar opcion: ",auxOption))
    {
        printf("\n*** ERROR *** Debe ingresar un numero del 1 al 3. \n") ;
        system("pause") ;

    }
    option = atoi(auxOption) ;
    return option;
}

int menuClientes ( )
{
    char auxOption[2];
    int option;
    system("cls") ;
    printf("\n*** CLIENTES ***\n\n");
    printf("1- ALTAS\n");
    printf("2- MODIFICAR\n") ;
    printf("3- BAJA\n") ;
    printf("4- LISTAR\n") ;
    printf("5- SALIR DE CLIENTES\n") ;
    while(!function_getStringNumeros("Ingresar opcion: ",auxOption))
    {
        printf("\n*** ERROR *** Debe ingresar un numero del 1 al 5. \n") ;
        system("pause") ;

    }
    option = atoi(auxOption) ;
    return option;
}


int addCliente(eCliente list[],int len)
{
    eCliente newCliente;

    int ret;
    int index ;
    char auxName[21];
    char auxSex[3];
    char auxTelefono[10] ;


    if(list != NULL && len > 0)
    {
        system("cls");
        fflush(stdin);
        index = searchEmpty(list,len) ;
        printf("\n------- Alta de Cliente -------\n\n");

        if(index == -1)
        {
            printf("No hay lugar en el sistema. \n") ;
            ret = -1 ;
            system("pause");

        }
        else
        {


            printf("\n Nuevo cliente, codigo numero %d \n",index) ;
            newCliente.codigo = index;
            if(!function_getStringLetras("Ingrese nombre: ",auxName))
            {
                printf("\nEl nombre solo debe tener letras.\n\n") ;
                system("pause");
                system("cls");

            }
            else if(!function_getStringLetras("Ingrese sexo m/f: ",auxSex))
            {
                printf("\nEl sexo debe tener solo letras.\n\n") ;
                system("pause");
                system("cls");

            }else if(!function_getStringNumeros("Ingrese el telefono(ej. 1136823896): ",auxTelefono))
            {
                printf("\nEl el telefono debe tener solo numeros.\n\n");
                system("pause");
                system("cls");

            }
            else
            {
                newCliente.codigo = index;
                strcpy(newCliente.nombre,auxName);
                strcpy(newCliente.sexo,auxSex);
                newCliente.telefono = atoi(auxTelefono);
                list[index] = newCliente ;
                system("pause");
                system("cls");
                printf("\n\nEMPLEADO DADO DE ALTA CON EXITO:\n\n");
                showCliente(list[index]);
                printf("\n\n\n");
                system("pause");
                ret = 0 ;
            }
        }

    }
    else
    {
        ret = -1 ;
    }
    return ret;
}

void showCliente(eCliente list)
{
    printf("\n %d\t\t%s\t\t%s\t\t%d\n",list.codigo,list.nombre,list.sexo,list.telefono);
}

int findClienteByCode(eCliente list[], int len, int code)
{
    int ret = -1;
    for(int i=0; i < len; i++)
    {

        if( list[i].codigo == code && list[i].isEmpty == 0)
        {
            ret = i;
            break;
        }
    }
    return ret;

}


void modifyCliente(eCliente list[], int len)
{
    int code;
    int index;
    int option;
    char auxOption[3];
    char auxCode[5];
    char newTelefono[5];
    char newName[51] ;
    char newSexo[3] ;
    char seguir = 's';


    system("cls");
    printf("  *** Modificar  Cliente ***\n\n");


    if(!function_getStringNumeros("Ingrese el codigo del cliente: ",auxCode))
    {
        printf("*** ERROR *** El codigo debe contener solo numeros.") ;
    }

    code = atoi(auxCode) ;
    index = findClienteByCode(list,len,code) ;


    if( index == -1)
    {
        printf("No hay ningun cliente con el codigo %d.\n\n",code);
        system("pause");
    }
    else
    {

        do
        {
            system("cls");
            showCliente(list[index]) ;


            if(!function_getStringNumeros("\n\nQue desea modificar?\n\n1 - Nombre\n2 - Sexo\n3- Telefono\n\n4-Volver al menu\n\nIngrese numero: ",auxOption))
            {
                printf("Error debe ingresar un numero");
            }
            else
            {
                option = atoi(auxOption);
            }

            switch(option)
            {


            case 1:
                showCliente(list[index]) ;
                printf("\n\n");
                //modificar nombre
                if(!function_getStringLetras("Ingrese nuevo nombre: ",newName))
                {
                    printf("*** Error *** El nombre debe tener solo letras.");
                }
                else
                {
                    strcpy(list[index].nombre,newName);
                    printf("\n\n        ***Modificacion exitosa***\n\n");
                    system("pause");
                    break ;
                }
            case 2:
// Modifica sexo
                showCliente(list[index]) ;
                printf("\n\n");
                if(!function_getStringLetras("Ingrese nuevo sexo S/M: ",newSexo))
                {
                    printf("*** ERROR *** El Sexo debe tener solo letras.\n\n");
                }

            else
                {

                    strcpy(list[index].sexo,newSexo);
                    printf("\n\n        ***Modificacion exitosa***\n\n");
                    system("pause");
                }
                break ;
            case 3:
                // modifica telefono
                showCliente(list[index]) ;
                printf("\n\n");
                if(!function_getStringNumeros("Ingrese nuevo telefono: ",newTelefono))
                {
                    printf("*** ERROR *** El telefono debe contener solo numeros.") ;
                }
                else
                {

                    list[index].telefono = atoi(newTelefono);
                    printf("\n\n        ***Modificacion exitosa***\n\n");
                    system("pause");
                }
                break ;
            case 4:
                printf("Salindo\n\n");
                system("pause");
                seguir = 'n';
                break;
            default:
                printf("*** ERROR *** Debe ingresar un numero del 1 al 4.\n");
                system("pause");
                break;
            }
        }
        while(seguir == 's');
    }
}


int removeCliente(eCliente list[], int len)
{
    int index;
    int ret ;
    int codeFinal;
    char code[10] ;
    char seguir[1];

    if(list != NULL && len > 0)
    {
        system("cls");
        printf("  *** Baja Cliente ***\n\n");


        if(!function_getStringNumeros("Ingrese codigo: ",code))
        {
            printf("*** ERROR *** El codigo debe contener solo numeros.\n\n");
            system("pause") ;
            system("cls");
        }
        else
        {

            codeFinal = atoi(code) ;
            index = findClienteByCode(list,len,codeFinal);


            if(index == -1)
            {
                printf("No hay ningun cliente con codigo %d",code) ;
            }
            else
            {
                ret = 0;
                showCliente(list[index]) ;
                function_continueYesOrNo("\nConfima borrado s/n: ",seguir);
                if(seguir[0] == 'n' || seguir[0] == 'N')
                {
                    printf("Baja cancelada\n\n");
                }
                else
                {

                    list[index].isEmpty = 1;
                    printf("Borrado exitoso\n\n");
                }
                system("pause");
            }
        }
    }
    return ret ;
}


void listarClientes(eCliente list[], int len)
{
    eCliente auxCliente;
    for(int i = 0; i < len - 1; i++)
    {
        for(int j = i + 1; j < len; j++)
        {
            if(strcmp(list[j].nombre, list[i].nombre) < 0  && list[j].isEmpty == 0 && list[i].isEmpty == 0)
            {
                auxCliente = list[i];
                list[i] = list[j];
                list[j] = auxCliente;
            }
           if(strcmp(list[j].nombre, list[i].nombre) == 0 && strcmp(list[j].sexo,list[i].sexo)  && list[j].isEmpty == 0 && list[i].isEmpty == 0)
            {
                auxCliente = list[i];
                list[i] = list[j];
                list[j] = auxCliente;
            }
        }
    }
    printf("ORDEDO CON EXITO\n\n\n") ;
    system("pause") ;
}


void showClientes(eCliente list[],int len)
{
    system("cls");
    printf("\n\n\tCODIGO\t\tNOMBRE\t\tSEXO\t\tTELEFONO\n\n");

    for(int i=0; i<len; i++)
    {
        if(list[i].isEmpty == 0)
        {
            showCliente(list[i]) ;
        }
    }

}
