#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"
#include "Employee.h"


int parserEmployee(FILE* pFile, Employee* pArrayListEmployee)
{
    int r,i=0;
    char auxId[5];
    char name[51];
    char lastName[51];
    char auxIsEmpty[6];
    pFile = fopen("data.csv","r");

    if(pFile == NULL)
    {
        printf("El archivo no existe");
        exit(EXIT_FAILURE);
    }
    do
    {

    r = fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",auxId,name,lastName,auxIsEmpty);
    //employee_setId(pArrayListEmployee[i],atoi(auxId));
    strncpy(pArrayListEmployee[i].name,name,strlen(name));
    strncpy(pArrayListEmployee[i].lastName,lastName,strlen(lastName));
    if(auxIsEmpty == "true")
    {
      pArrayListEmployee[i].isEmpty = 1;
    }else
    {
      pArrayListEmployee[i].isEmpty = 0 ;
    }

    if(r == '4')
    {
        printf("%d  %s  %s  %d\n",pArrayListEmployee[i].id,pArrayListEmployee[i].name,pArrayListEmployee[i].lastName,pArrayListEmployee[i].isEmpty);
    }

    }while(!feof(pFile));

    fclose(pFile);



    return 0;
}
