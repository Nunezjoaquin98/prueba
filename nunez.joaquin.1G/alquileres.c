#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "biblotecaNunez.h"
#include "cliente.h"
#include "juegos.h"
#include "alquileres.h"

int searchEmptyAlquiler(eAlquiler list[],int len)
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

void initAlquiler(eAlquiler list[],int len)
{
    for(int i=0; i < len; i++)
    {

        list[i].isEmpty = 1;
    }
}

void showAlquiler(eAlquiler list)
{
    printf("\n %d\t\t%d\t\t%d\t\t%d\%d\%d\n",list.codigoAlquiler,list.codigoCliente.codigo,list.codigoJuegos.codigo,list.fechaDeAlquiler.dia,list.fechaDeAlquiler.mes,list.fechaDeAlquiler.anio);
}

void showAlquileres(eAlquiler list[],int len)
{
    system("cls");
    printf("\n\nCODIGO ALQUILER\t\tCODIGO CLIENTE\t\tCODIGO DEL JUEGO\t\tFECHA\n\n");

    for(int i=0; i<len; i++)
    {
        if(list[i].isEmpty == 0)
        {
            showAlquiler(list[i]) ;
        }
    }

}


int addAlquiler(eAlquiler listA[],int lenA,eFecha listF[],int lenF,eCliente listC[],int lenC,eJuegos listJ[],int lenJ,eCategoria listCat[],int lenCat)
{
    eAlquiler newAlquiler;
    eFecha newFecha;

    int ret;
    int index ;
    int errorFecha = 0;
    int errorCodigo = 0;
    int codigoCliente ;
    int codigoJuego ;
    char auxDia[3];
    char auxMes[3];
    char auxAnio[5] ;
    char auxCodigoCliente[50];
    char auxCodigoJuego[50] ;



    if(listA != NULL && lenA > 0)
    {
        system("cls");
        fflush(stdin);
        index = searchEmptyAlquiler(listA,lenA) ;
        printf("\n------- Alta de Alquiler -------\n\n");

        if(index == -1) // SE VERIFICA QUE HAYA LUGAR EN EL SISTEMA
        {
            printf("No hay lugar en el sistema. \n") ;
            ret = -1 ;
            system("pause");

        }
        else
        {
            index++; // se suma un 1 en index asi no comienza de cero el codigo de alquiler
            printf("\n Nuevo alquiler, codigo numero %d \n\n",index) ;
            newAlquiler.codigoAlquiler = index ;
            do // SE VALIDA CON UN DO WHILE LA FECHA INGRESADA
            {

            if(!function_getStringNumeros("\n\tFECHA DEL ALQUILER\nIngrese dia: ",auxDia))
            {
                printf("\nError,el dia debe contener solo numeros.\n");
                system("pause");
                errorFecha = 1;
            }else if(!function_getStringNumeros("\nIngrese mes: ",auxMes))
            {
                printf("\nError,el mes debe contener solo numeros.\n");
                system("pause");
                errorFecha = 1;
            }else if(!function_getStringNumeros("\nIngrese anio: ",auxAnio))
            {
                printf("\nError,el anio debe contener solo numeros.\n");
                system("pause");
                errorFecha = 1;
            }else
            {
            newFecha.dia = atoi(auxDia) ;
            newFecha.mes = atoi(auxMes) ;
            newFecha.anio = atoi(auxAnio) ;

            }

            }while(errorFecha);


            system("cls");
            printf("\n Nuevo alquiler con codigo numero %d en el dia %d/%d/%d\n\n",index,newFecha.dia,newFecha.mes,newFecha.anio) ;
            // SE MUESTRA LOS CLIENTES,Y SE HACE ELEJIR QUIEN REALIZO EL AQLUILER
            showClientes(listC,lenC);

            do
            {
            if(!function_getStringNumeros("\nIngrese codigo del cliente a realizar el alquiler: ",auxCodigoCliente))
            {
                printf("Error, el cliente debe tener solo letras");
                errorCodigo = 1;
            }else
            {
                codigoCliente = atoi(auxCodigoCliente);
            }

            if(findClienteByCode(listC,lenC,codigoCliente) == -1)
            {
                printf("Error, no hay ningun cliente con codigo %d",codigoCliente) ;
                errorCodigo = 1;
            }else
            {
                newAlquiler.codigoCliente.codigo = codigoCliente ;

            }
            }while(errorCodigo);

            system("cls");
            printf("\n Nuevo alquiler con codigo numero %d en el dia %d/%d/%d\n\n",index,newFecha.dia,newFecha.mes,newFecha.anio) ;
            printf("Cliente que esta alquilando:\n ");
            showJuegos(listJ,lenJ) ;
            showCategorias(listCat,lenCat) ;

            if(!function_getStringNumeros("Ingrese el codigo del juego a alquilar: ",auxCodigoJuego))
            {
                printf("\nEl juego debe tener solo numeros.\n\n") ;
                system("pause");

            }else
            {
                codigoJuego = atoi(auxCodigoJuego);
            }
            if(findJuegoByCode(listJ,lenJ,codigoJuego) == -1)
            {
                printf("Error, el juego ingresado no es valido.\n");
                system("pause");
            }else
            {
                newAlquiler.codigoJuegos.codigo = codigoJuego ;


                listA[index] = newAlquiler ;
                system("pause");
                system("cls");
                printf("\n\nALQUILER DADO DE ALTA CON EXITO:\n\n");
                showAlquiler(listA[index]);
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

void listarAlquileres(eAlquiler list[], int len)
{

    eAlquiler aux;
    if(len > 0 && list != NULL)
    {

            for(int i = 0; i < len - 1; i++)
            {
                for(int j = i + 1; j < len; j++)
                {
                    if((list[j].codigoAlquiler > list[i].codigoAlquiler) && list[j].isEmpty == 0 && list[i].isEmpty == 0)
                    {
                        aux = list[i];
                        list[i] = list[j];
                        list[j] = aux;
                    }

                }
            }



    }

}

int menuAlquileres ( )
{
    char auxOption[2];
    int option;
    system("cls") ;
    printf("\n*** Menu de Opciones ***\n\n");
    printf("1- NUEVO ALQUILER\n");
    printf("2- LISTAR ALQUILARES \n") ;
    printf("3- SALIR\n\n") ;
    while(!function_getStringNumeros("Ingresar opcion: ",auxOption))
    {
        printf("\n*** ERROR *** Debe ingresar un numero del 1 al 3. \n") ;
        system("pause") ;

    }
    option = atoi(auxOption) ;
    return option;
}
