#include <stdio.h>
#include <stdlib.h>
void mostrarCharArrays (char vec[],int tam) ;

int main()
{
   char letras[] = {'d','c','a','f','A','c','z','Z'} ;

   mostrarCharArrays(letras,8) ;

   return 0;
}

void mostrarCharArrays(char vec[],int tam)
{
    for(int i= 0; i < tam ; i++)
    {
        printf("%c \n",vec[i]) ;
    }

}
