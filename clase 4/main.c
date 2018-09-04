#include <stdio.h>
#include <stdlib.h>

 int getInt (char msj[],char error[],int limInf, int limSup) ;

int main()
{
char msj1[19] = "Ingrese su edad: ";
char msj2[47] = "ERROR - Ingrese una edad entre a 5 y 65." ;
int edadMinima = 5 ;
int edaMaxima = 65 ;

printf("%d \n",getInt(msj1,msj2,edadMinima,edaMaxima)) ;
return 0 ;

}

 int getInt (char msj[],char error[],int limInf, int limSup){

 int x;

 printf("%s \n",msj) ;
 fflush(stdin);
 scanf("%d",&x) ;

     while(x < limInf || x > limSup)
     {
        printf("%s",error) ;
        fflush(stdin);
        scanf("%d",&x) ;

     }

     return x ;
}

