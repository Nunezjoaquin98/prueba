#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblotecaNunez.h"
#include "cliente.h"
#include "juegos.h"
#include "alquileres.h"
#define TAMc 15
#define TAMj 5
#define TAMa 150


// El hardcodeo de el juego y cliente estan en biblotecaNunez.h .

int main()
{

    int seguir = 1 ;
    int flagClientes = 0 ;

    eCliente clientes[TAMc];
    eJuegos juegos[TAMj];
    eCategoria cat[5];
    eAlquiler alq[TAMa];
    eFecha fechaNueva[TAMa];

    initAlquiler(alq,TAMa);
    initClientes(clientes,TAMc) ;
    harcodearCat(cat);
    harcodeoJuego(juegos);


    do
    {
        switch(menu())
        {
        case 1:
            // menu para dar de alta cliente modificar y eso.
            switch(menuClientes())
            {
            case 1://alta
                system("cls");
                addCliente(clientes,TAMc,flagClientes);
                break;
            case 2:// modificar
                system("cls") ;
                modifyCliente(clientes,TAMc) ;
                break;

            case 3://remover
                system("cls") ;
                removeCliente(clientes,TAMc);
                break;
            case 4:
                system("cls") ;
                listarClientes(clientes,TAMc) ;
                showClientes(clientes,TAMc) ;
                system("pause") ;
                break;
            }
            break;
        case 2:

            switch(menuAlquileres())
            {
            case 1:
                addAlquiler(alq,TAMa,fechaNueva,TAMa,clientes,TAMc,juegos,TAMj,cat,5);
                system("cls") ;
                break ;
            case 2:
                listarAlquileres(alq,TAMa);

                break;
            default:
            printf("\n\n Debe ingresar un numero del 1 al 3.\n\n");
            system("pause");
            break;
            }
        // menu de alquileres

        case 3:
            printf("\n\n\n Saliendo..\n\n") ;
            system("pause") ;
            seguir = 0 ;
            break;
        default:
            printf("\n\n Debe ingresar un numero del 1 al 3.\n\n");
            system("pause");
            break;
        }
    }
    while(seguir) ;

    return 0;
}
