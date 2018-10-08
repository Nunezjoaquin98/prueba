#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "funciones.h"


#define TAM 1001


int main()
{
    eEmpleado empleado[TAM];
    char seguir ='s';
    funcion_Inicializar(empleado,TAM);
    //funcion_harcodeoEmployee(empleado);

    do
    {
        switch(funcion_opciones())
        {
        case 1:
            funcion_AltaEmpleado(empleado,TAM);
            break;
        case 2:
            funcion_modificarEmpleado(empleado,TAM);
            break;
        case 3:
            funcion_BajaEmpleado(empleado, TAM, 0);
            break;
        case 4:
            funcion_ordenarEmpleadosXlID(empleado, TAM);
            funcion_mostrarEmpleados(empleado,TAM);
            system("pause");
            break;

        case 5:
            printf(" ***Saliendo***\n\n");
            seguir = 'n';
            system("pause");
            break;
            break;
        default :
            printf("Opcion no valida, reingrese una opcion del 1 al 5 \n\n");
            system("pause");

            break;


        }

    }
    while (seguir == 's');


    return 0;
}


    /*int numero;
    char letra;
    float flotante;

    numero=funcion_getInt("ingrese un numero: ");
    letra=funcion_getChar("Ingrese una palabra: ");
    flotante=funcion_getFloat("Ingrese un flotante:");

    printf("El numero es %d \n",numero);
    printf("El flotante es %f \n",flotante);
    printf("La Letra es %c \n",letra);*/


    /*char ingresar [TAM];
    int tamanioD;

    printf("Ingrese algo ");
    fflush(stdin);
    scanf("%s",ingresar);
    tamanioD=strlen(ingresar);

    if(tamanioD>0)
    {
        if(funcion_ValidarNumero(ingresar))
        {
            printf("Es un numero\n");
        }
        if(funcion_validarAlfaNumerico(ingresar))
        {
            printf("Es numero y letras\n");
        }
        if(funcion_validarNumeroFlotante(ingresar))
        {
            printf("Es un numero flotante\n");
        }
        if(funcion_validarSoloLetras(ingresar))
        {
            printf("Es solo letras\n");
        }
        if(funcion_ValidarTelefono(ingresar))
        {
            printf("Es un telefono\n");
        }
    }*/
   /*for (int i=0;i<TAM;i++)
    {
        printf("Estan vacios %d \n\n",empleado[i].isEmpty);
    }*/












