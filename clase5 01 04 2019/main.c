#include <stdio.h>
#include <stdlib.h>
#define x 3
int main()
{

/// Como funciona un array.

/*    int datos [50];

    for(int i=0;i<x;i++)
    {
        printf("Ingrese la edad del alumno: ");
        scanf("%d",&datos[i]) ;
    }

*/
/// maximo y minimo


    int datos[5];

    for(i= 0; i < x; i++)
    {
        if(i==0||datos[i] > max)
        {
            max = datos[i];
        }
        if(i == 0 || datos[i]<min)
        {
            min = datos[i];
        }
    }

    return 0;
}
