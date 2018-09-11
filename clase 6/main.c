#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void mostrarCharArrays(char vec[],int tam) ;
void ordenarArrays (char vec[],int tam) ;
void ordenarArraysConCriterio (char vec[],int tam,int criterio) ;
void nombreApellidoEnCapital(char nombre[]) ;

int main()
{
    /*
   char letras[] = {'B','F','G','A','C','D','H','I'} ;

   ordenarArraysConCriterio(letras,8,1);
   mostrarCharArrays(letras,8) ;

    return 0;
    */

    char nombre[20] = {"MARIANa"} ;
    char apellido[20]  = {"PeREz"} ;
    char nombreCompleto[40] ;

    strcpy(nombreCompleto,nombre) ;
    strcat(nombreCompleto," ") ;
    strcat(nombreCompleto,apellido) ;
    strlwr(nombreCompleto) ;

    printf("%s",nombreCompleto) ;
}

void nombreApellidoEnCapital(char nombre[])
{
    int cant = strlen(nombre) ;

    for(int i = 0 ; i < cant ; i++)
    {
        if(nombre[i+1]= toupper(nombre[i+])) ;
    }
}

void mostrarCharArrays(char vec[],int tam)
{
    for(int i= 0; i < tam ; i++)
    {
        printf("%c \n",vec[i]) ;
    }

}



void ordenarArrays (char vec[],int tam)
{
    int aux;

    for(int i = 0 ; i < tam-1 ; i++)
    {
        for(int j = i + 1; j < tam ; j++)
        {
            if(vec[i]>vec[j])
            {
                aux = vec[i] ;
                vec[i]= vec[j] ;
                vec[j]= aux ;
            }
        }
    }

}


void ordenarArraysConCriterio (char vec[],int tam,int criterio)
{
    int aux;
if(criterio)
{

    for(int i = 0 ; i < tam-1 ; i++)
    {
        for(int j = i + 1; j < tam ; j++)
        {
            if(vec[i]>vec[j])
            {
                aux = vec[i] ;
                vec[i]= vec[j] ;
                vec[j]= aux ;
            }
        }
    }
    }
else
    {

    for(int i = 0 ; i < tam-1 ; i++)
    {
        for(int j = i + 1; j < tam ; j++)
        {
            if(vec[i]<vec[j])
            {
                aux = vec[i] ;
                vec[i]= vec[j] ;
                vec[j]= aux ;
            }
        }
    }
    }
}

