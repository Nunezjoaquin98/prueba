#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#include "peliculas.h"

#define TAMp 1001
#define TAMd 501

int main()
{
    char seguir='s';
    ePeliculas pelicula[TAMp];
    eDirectores  director[TAMd];

    funcion_opciones();
    funcion_InicializarDirectores(director,TAMd);
    funcion_InicializarPeliculas(pelicula,TAMp);


    do
    {
        switch(funcion_opciones())
        {

        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;

        }

    }while(seguir=='s');

    return 0;
}
