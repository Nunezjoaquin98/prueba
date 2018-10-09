#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblotecaNunez.h"
#include "cliente.h"
#define TAMc 10000


// El hardcodeo de el juego y cliente estan en biblotecaNunez.h .

int main()
{


    int seguir = 1 ;

    eCliente clientes[TAMc];
    initClientes(clientes,TAMc) ;
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
                addCliente(clientes,TAMc);
                break;
            case 2:// modificar
                system("cls") ;
                showClientes(clientes,TAMc) ;
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

            }
        case 2:
            // menu de alquileres
            system("cls") ;

            break ;
        case 3:
            printf("\n\n\n Saliendo..\n\n") ;
            system("pause") ;
            seguir = 0 ;
            break;
        }
    }
    while(seguir) ;

    return 0;
}
