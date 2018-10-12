#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "biblotecaNunez.h"
#include "juegos.h"

void showJuego(eJuegos list)
{
    printf("\n %d\t\t%s\t\t\t%d\t\t%d\n",list.codigo,list.descripcion,list.importe,list.idCategoria);
}


void showJuegos(eJuegos list[],int len)
{
    system("cls");
    printf("\n\nCODIGO\t\tNOMBRE\t\t\tIMPORTE\t\tCATEGORIA\n\n");

    for(int i=0; i<len; i++)
    {

            showJuego(list[i]) ;

    }

}

void harcodeoJuego(eJuegos list[])
{

    eJuegos x[]={
    {212,"FIFA 19",2999,3,0},
    {042,"Fornite",300,4,0},
    {113,"GTA 5",1500,5,0},
    {404,"Call of Duty",1700,2,0},
    {15,"Maincraft",2000,5,0}
    };
    for(int i = 0; i< 5;i++)
    {
        list[i] = x[i];
    }
}

int findJuegoByCode(eJuegos list[], int len, int code)
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

void harcodearCat(eCategoria list[])
{
    eCategoria x[]=
    {
        {1, "Accion"},
        {2, "Disparos"},
        {3, "Deportes"},
        {4, "Supervivencia"},
        {5, "Mundo Abierto"}
    };

    for(int i=0; i < 5; i++)
    {
        list[i] = x[i];
    }
}

void showCategorias(eCategoria list[], int len)
{
    printf("\nLista de Categorias\n\n");

    for(int i=0; i < len; i++)
    {
        printf(" %d  %10s\n",list[i].id, list[i].descripcion);
    }
    printf("\n\n");
}
