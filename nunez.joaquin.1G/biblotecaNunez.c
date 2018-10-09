#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "biblotecaNunez.h"


//FUNCIONES PARA OBTENER DATOS

float getFloat(char msj[])
{
    float aux;
    printf("%s",msj);
    scanf("%f",&aux);
    return aux;
}

int function_getInt(char msj[] )
{
    int resultado;
    printf("%s",msj);
    scanf("%d",&resultado);
    return resultado;
}

char function_getChar(char msj[])
{
    char aux;
    printf("%s",msj);
    fflush(stdin);
    scanf("%c",&aux);
    return aux;
}

int function_esNum(char str[])
{
    int ret = 1;
    int i=0;
    while(str[i] != '\0')
    {
        if(str[i] < '0' || str[i] > '9')
            ret =  0;
        i++;
    }
    return ret;
}

int function_esSoloLetras(char str[])
{
    int ret = 1;
    int i=0;
    while(str[i] != '\0')
    {
        if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))

            ret = 0;
        i++;
    }
    return ret;
}

int function_esAlfaNumerico(char str[])
{
    int ret = 1;
    int i=0;
    while(str[i] != '\0')
    {
        if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z') && (str[i] < '0' || str[i] > '9'))
            ret = 0;
        i++;
    }
    return ret;
}

int function_esTelefono(char str[])
{
    int i=0;
    int contadorGuiones=0;
    while(str[i] != '\0')
    {
        if((str[i] != ' ') && (str[i] != '-') && (str[i] < '0' || str[i] > '9'))
            return 0;
        if(str[i] == '-')
            contadorGuiones++;
        i++;
    }
    if(contadorGuiones==1) // debe tener un guion
        return 1;

    return 0;
}

void function_getString (char msj[],char input[])
{
    printf("%s",msj);
    fflush(stdin) ;
    gets(input) ;
}

int function_getStringLetras(char msj[],char input[])
{
    int ret = 0;
    char aux[256];
    function_getString(msj,aux);
    if(function_esSoloLetras(aux))
    {
        strcpy(input,aux);
        ret = 1;
    }
    return ret ;
}

int function_getStringNumeros(char msj[],char input[])
{
    int ret = 0;
    char aux[256];
    function_getString(msj,aux);
    if(function_esNum(aux))
    {
        strcpy(input,aux);
        ret = 1;
    }
    return ret;
}


void function_continueYesOrNo(char msj[],char input[])
{
    do
    {
        if(!function_getStringLetras(msj,input))

        {
            printf("*** ERROR *** Debe ingresar la letra S o N");
            system("pause");
            system("cls");
        }

    }
    while(!(input[0] == 's' || input[0] == 'n' || input[0] == 'S' || input[0] == 'N'));

}
/*
void harcodeoCategoria(eCategoria* list)
{
    eCategoria   x[]={
    {1,"Disparos"},
    {2,"Deportes"},
    {3,"Aventura"}
    };
    for(int i = 0; i< 3;i++)
    {
        list[i] = x[i];
    }

}


 void harcodeoJuego(eJuego* list)
{
    eJuego   x[]={
    {1,"Fornite",70, 1},
    {7,"FIFA 19",300,2},
    {9,"Minecraft",180,3},
    {19,"PES 19",250, 2},
    {1,"Crash",15,3}
    };
    for(int i = 0; i< 5;i++)
    {
        list[i] = x[i];
    }
}

void showJuego(eJuego list)
{
     printf("\n %d\t\t%s\t\t%.2f\t\t%d\n",list.codigo,list.descrpicion,list.importe,list.idCategoria.id);
}

void showJuegos(eJuego list[],int len)
{
    system("cls");
    printf("\n\n\tCODIGO\t\tDESCRIPCION\t\tIMPORTE\t\tCATEGORIA");

    for(int i=0; i<len; i++)
    {
      showJuego(list[i]) ;
    }

}
*/
