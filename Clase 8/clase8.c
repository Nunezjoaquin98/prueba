#include <stdio.h>
#include <stdlib.h>
#include "clase8.h"
void mostrarUnAlumno(sAlumno miAlumno)
{
    printf("%d       %s       %d    %0.2f\n",miAlumno.legajo,miAlumno.nombre,miAlumno.edad,miAlumno.promedio) ;
}

sAlumno pedirAlumno()
{

    sAlumno pepito ;

    printf("Ingrese legajo: ") ;
    fflush(stdin) ;
    scanf("%d", &pepito.legajo) ;
    printf("Ingrese el nombre alumno: ") ;
    fflush(stdin) ;
    gets(pepito.nombre) ;
    printf("Ingrese edad") ;
    fflush(stdin) ;
    scanf("%d",&pepito.edad) ;
    printf("Ingrese promedio: ") ;
    fflush(stdin) ;
    scanf("%f", &pepito.promedio) ;
}

void cargarListadoDeAlumnos(sAlumno listado[],int tam)
{
    for(int i= 0; i<tam ; i++)
{
        listado[i]=pedirAlumno();

}
}

void mostrarListadoDeAlumnos (sAlumno listado[],int tam)
{
    for(int i= 0; i<tam ; i++)
{
    mostrarUnAlumno(listado[i]) ;

}
}

void ordenarListadoDeAlumnosPorNombre(sAlumno listado[],int tam)
{
sAlumno auxAlumno ;
int i;
int j;
for(i=0; i<tam-1;i++)
{
    for(j=i+1;j<tam;j++)
    {
        if(strcmp(listado[i].nombre,listado[j].nombre)>0)
         {
             auxAlumno = listado[i] ;
             listado[i]=listado[j] ;
             listado[j]= auxAlumno ;
         }
    }


}
}
