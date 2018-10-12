typedef struct
{
    int anio;
    int mes;
    int dia;
}eFecha;

typedef struct
{
    int codigoAlquiler;
    eJuegos codigoJuegos;
    eCliente codigoCliente;
    eFecha fechaDeAlquiler;
    int isEmpty;

}eAlquiler;

/** \brief To indicate that all position in the array are empty,
 * this function put the flag (isEmpty) in TRUE in all
 * position of the array
 * \param list cliente
 * \param len int Array length
 */
void initAlquiler(eAlquiler[],int len) ;

/** \brief Busca un indice libre
 *
 * \param Array a buscar.
 * \param Tamaño del array
 * \return Devuelve el indice dond eesta vacio, y si no lo esta devuelve -1.
 *
 */
int searchEmptyAlquiler(eAlquiler list[],int len) ;

/** \brief Muestra un cliente
 *
 * \param array del cliente a mostrar
 *
 */
void showAlquileres(eAlquiler list[],int len) ;

int addAlquiler(eAlquiler listA[],int lenA,eFecha listF[],int lenF,eCliente listC[],int lenC,eJuegos listJ[],int lenJ,eCategoria listCat[],int lenCat) ;

void listarAlquileres(eAlquiler list[], int len) ;

int menuAlquileres () ;
