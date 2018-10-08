#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#include "peliculas.h"

int funcion_opcionesPeliculas()
{
    int opcionIngresada;
    char auxOpcion[5];


    system("cls");
    printf("\n******* MENU DE OPCIONES ******* \n\n");
    printf(" 1- ALTA PELICULA\n");
    printf(" 2- MODIFICAR DATOS DE UNA PELICULA\n");
    printf(" 3- BAJA DE PELICULA\n");
    printf(" 4- NUEVO DIRECTOR\n");
    printf(" 5- ELIMINAR DIRECTOR\n");
    printf(" 6- LISTAR\n");
    printf(" 7- SALIR\n");
    while(!funcion_getStringNumeros("Ingrese una opcion del 1-7 : ",auxOpcion))
    {
        printf("ERROR- La opcion tiene que ser solo numeros del 1 al 7\n\n");

        system("pause");
    }

    opcionIngresada=atoi(auxOpcion);


    return opcionIngresada;
}
void funcion_InicializarPeliculas(ePeliculas list[], int tam)
{

    for(int i=0; i < tam; i++)
    {

        list[i].isEmpty = 1;

    }

}
void funcion_InicializarDirectores(eDirectores list[], int tam)
{

    for(int i=0; i < tam; i++)
    {

        list[i].isEmpty = 1;

    }

}

void funcion_mostrarPelicula(ePeliculas list)
{

    printf("\nID:%d - TITULO:%s - ANIO:%s - NACIONALIDAD:%s - DIRECTOR:%s\n\n", list.id, list.titulo, list.anio, list.nacionalidad, list.director.nombre);
}
void funcion_mostrarDirector(eDirectores list)
{

    printf("\nNOMBRE:%s - FECHA DE NACIMIENTO :%s - ORIGEN:%s\n\n", list.nombre, list.fechaNacimiento, list.origen);
}
void funcion_mostrarPeliculas(ePeliculas list[], int tam)
{

    system("cls");
    printf("\n ID TITULO ANIO NACIONALIDAD\n\n");

    for(int i=0; i < tam; i++)
    {

        if( list[i].isEmpty == 0)
        {
            funcion_mostrarPelicula(list[i]);
        }
    }
    system("pause");
}
void funcion_mostrarDirectores(eDirectores list[], int tam)
{

    system("cls");
    printf("\n NOMBRE FECHA DE NACIMIENTO ORIGEN\n\n");

    for(int i=0; i < tam; i++)
    {

        if( list[i].isEmpty == 0)
        {
            funcion_mostrarDirector(list[i]);
        }
    }
    system("pause");
}
int funcion_BuscarPeliculaXID(ePeliculas list[], int tam, int id)
{

    for(int i=0; i < tam ; i++)
    {

        if( list[i].id == id && list[i].isEmpty == 0)
        {
            return i;
            break;
        }
    }
    return -1;

}
int funcion_BuscarDirectorXNombre(eDirectores list[], int tam, char nombre[])
{

    for(int i=0; i < tam ; i++)
    {

        if( list[i].nombre == nombre && list[i].isEmpty == 0)
        {
            return i;
            break;
        }
    }
    return -1;

}
int funcion_BuscarLugarVacioPeliculas(ePeliculas list[],int tam)
{
    int index = -1;
    for(int i=0; i< tam ; i++)
    {
        if( list[i].isEmpty == 1)
        {
            index = i ;
            break;
        }
    }
    return index ;
}
int funcion_BuscarLugarVacioDirector(eDirectores list[],int tam)
{
    int index = -1;
    for(int i=0; i< tam ; i++)
    {
        if( list[i].isEmpty == 1)
        {
            index = i ;
            break;
        }
    }
    return index ;
}
int funcion_NuevaPelicula(ePeliculas list[], int tam)
{
    ePeliculas nuevaPelicula ;
    int returns;
    int index ;
    char auxTitulo[31];
    char auxAnio[31];
    char auxNacionalidad[11] ;


    if(list != NULL && tam > 0)
    {
        system("cls");
        fflush(stdin);
        index = funcion_BuscarLugarVacioPeliculas(list,tam) ;
        printf("\n**** Nueva Pelicula ****\n\n");

        if(index == -1)
        {
            printf("No hay lugar en el sistema. \n") ;
            returns = -1 ;
            system("pause");

        }
        else
        {


            if(!funcion_getStringLetras("Ingrese titulo: ",auxTitulo))
            {
                printf("El titulo solo debe tener letras.\n\n") ;
                system("pause");
                system("cls");

            }else if(!funcion_getStringLetras("Ingrese nacionalidad: ",auxNacionalidad))
            {
                printf("La nacionalidad debe tener solo letras.\n\n") ;
                system("pause");
                system("cls");

            }
            else if(!funcion_getStringNumeros("Ingrese el anio: ",auxAnio))
            {
                printf("**** Error ****\n\n");
                system("pause");
                system("cls");

            }else
            {



             /// aca tenes que hacer un switch con dos opciones de ingresar un nuevo director o elejir uno case 1 nuevo director case 2 mostras todos los directores que tenes cargados y elejis.
                funcion_AltaDirector(list,tam);



                strcpy(nuevaPelicula.titulo,auxTitulo) ;
                strcpy(nuevaPelicula.nacionalidad,auxNacionalidad) ;
                nuevaPelicula.anio = atoi(auxAnio) ;
                nuevaPelicula.isEmpty = 0;
                list[index] = nuevaPelicula ;
                system("pause");
                system("cls");
                printf("\n\nNUEVA PELICULA INGRESADO:\n\n");
                funcion_mostrarPelicula(list[index]);
                printf("\n\n\n");
                system("pause");
            }
        }

                returns = 0 ;
    }
    else
    {
        returns = -1 ;
    }
    return returns;
}
int funcion_AltaDirector(eDirectores list[], int tam)
{
    eDirectores nuevoDirector;
    int returns;
    int index;
    char auxNombre[31];
    char auxFechaDeNacimiento[31];
    char auxOrigen[31] ;


    if(list != NULL && tam > 0)
    {
        system("cls");
        fflush(stdin);
        index = funcion_BuscarLugarVacioDirector(list,tam) ;
        printf("\n**** Nuevo Director ****\n\n");

        if(index == -1)
        {
            printf("No hay lugar en el sistema. \n") ;
            returns = -1 ;
            system("pause");

        }
        else
        {



            if(!funcion_getStringLetras("Ingrese nombre: ",auxNombre))
            {
                printf("El nombre solo debe tener letras.\n\n") ;
                system("pause");
                system("cls");

            }
            if(funcion_BuscarDirectorXNombre(list, tam, auxNombre) !=-1 )
            {
                printf("ERROR- Ya existe director en el sistema");
            }
            else
            {

                if(!funcion_getStringLetras("Ingrese origen: ",auxOrigen))
                {
                    printf("El origen debe tener solo letras.\n\n") ;
                    system("pause");
                    system("cls");

                }else

                {
                    printf("ingrese fecha de nacimiento:");
                    scanf("%s",auxFechaDeNacimiento);
                    system("pause");
                    system("cls");

                }
                strcpy(nuevoDirector.nombre,auxNombre) ;
                strcpy(nuevoDirector.origen,auxOrigen) ;
                strcpy(nuevoDirector.fechaNacimiento,auxFechaDeNacimiento) ;
                nuevoDirector.isEmpty = 0;
                list[index] = nuevoDirector ;
                system("pause");
                system("cls");
                printf("\n\nNUEVO DIRECTOR INGRESADO:\n\n");
                funcion_mostrarDirector(list[index]);
                printf("\n\n\n");
                system("pause");
                returns = 0 ;
            }
        }

    }
    else
    {
        returns = -1 ;
    }
    return returns;
}
