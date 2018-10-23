#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int codigo;
    char marca[20];
    int capacidad;
    float precio;
}ePendrive ;

int cargarPendrive(ePendrive* pen);
void mostraPendreve(ePendrive* pen);
ePendrive* new_pendrive();

int main()
{

    ePendrive miPendrive;

    if(cargarPendrive(miPendrive))
    {
        mostraPendreve();
    }

    //ree();
    return 0;
}


int cargarPendrive(ePendrive* pen)
{
    int todoOk = 0;

    if(pen != NULL)
    {
    printf("----NUEVO PENDRIVE----\n\nIngrese codigo del pendrive:");
    scanf("%d",&nuevoPen->codigo);
    printf("\nIngrese marca:");
    gets(nuevoPen->marca);
    printf("\nIngrese capacidad:")
    scanf("%d",&nuevoPen->capacidad);
    printf("\nIngrese precio:")
    scanf("%f",&nuevoPen->precio);

    todoOk = 1;
    }

    return todoOk ;


}


void mostraPendreve(ePendrive* pen)
{
    if(pen != NULL)
    {
        printf("%d    %s    %d    %2.f",pen->codigo,pen->marca,pen->capacidad,pen->precio);
    }


}

ePendrive* new_pendrive()
{
 ePendrive nuevo;
 ePendrive* pnuevo;
 pnuevo = &nuevo;

 pnuevo = (ePendrive*) malloc(sizeof(ePendrive)) ;


 if(pnuevo != NULL)
 {

 cargarPendrive(pnuevo);

 }

 return  pnuevo;
}
