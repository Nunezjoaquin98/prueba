#include <stdio.h>
#include <stdlib.h>


    typedef struct{
    int id;
    char descripcion[31];
    }eNacionalidad;

        void hardcodeoNacionalidad () ;


int main()
{

    /*

    typedef struct {

    int dia;
    int mes;
    int anio;
    }eFecha;

    typedef struct{

    char apellido[31];
    char nombre[];
    eFecha fechaNac;
    }ePersona

    para acceder a la fecha seria:

    ePersona per;
    per.fechaNac.dia
    per.fechaNac.mes




    ordenar apellido y nombre

    void ordenar(ePersona per[],int cantidad)
    {
    int i,j ;
    ePersona aux;
    for(i = 0;i < cantidad -1;i++)
    {
        for(j=i+1;j<cantidad;j++)
        {
        if(strcmp(pers[i].apellido,pers[j].apellido)>0)
        {
        aux = pers[i];
        pers[i] = pers[j];
        pers[j] = aux ;

        }


        }
    }
    }


    */


    return 0;
}


    void hardcodeoNacionalidad ()
    {
        eNacionalidad nac[] = {1,"Argentina",2,"Peru",3,"Uruguay"};
    }
