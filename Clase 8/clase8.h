#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int legajo ;
    int edad;
    char nombre[25] ;
    float promedio ;
} sAlumno ;
sAlumno pedirAlumno() ;
void mostrarUnAlumno(sAlumno miAlumno);
void cargarListadoDeAlumnos(sAlumno[],int tam) ;
void mostrarListadoDeAlumnos (sAlumno listado[],int tam) ;
void ordenarListadoDeAlumnosPorNombre(sAlumno listado[],int);


