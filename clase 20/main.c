#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int edad;
    char name[21];
}Persona;

int persona_setNombre(Persona* list,char* name);
int persona_setEdad(Persona* this,int* edad);
char preguntarSalir();

int main()
{

    int size = 10;
    int index=0;
    Persona** lista = (Persona**)malloc(sizeof(Persona*)*size);
    do
    {
        Persona* persona = (Persona*)malloc(sizeof(Persona));
        persona_setNombre(persona,persona->name);
        persona_setEdad(persona,&persona->edad);
      // persona.edad = preguntarEdad();
        lista[index] = persona;
        index++;
        if(index>=size)
        {
// incrementamos el tamaño del array
            size+=10;
            lista = realloc(lista,sizeof(Persona*)*size);
        }
    }
    while(preguntarSalir()!='S');

    return 0;

}

int persona_setNombre(Persona* list,char* name)
{

    printf("\nIngrese nombre: ");
    fgets(name,21,stdin);
    strcpy(list->name,name);


    return 0;
}

int persona_setEdad(Persona* this,int* edad)
{
    printf("\nIngrese edad: ");
    scanf("%d",edad);
    this->edad = edad;

    return 0;

}

char preguntarSalir()
{
    char salir;
    printf("Desea salir?\nIngrese S o N: ");
    fflush(stdin);
    fgets(&salir,3,stdin);

    return salir;

}
