typedef struct
{
    int codigo;
    char nombre[51];
    char sexo[3] ;
    int telefono ;
    int isEmpty;
}eCliente;

/** \brief To indicate that all position in the array are empty,
 * this function put the flag (isEmpty) in TRUE in all
 * position of the array
 * \param list cliente
 * \param len int Array length
 */
void initClientes(eCliente list[],int len) ;


/** \brief Menu de opciones
 *
 * \return Opcion ingresada
 *
 */
int menu ( ) ;

/** \brief Menu de opciones para los clientes
 *
 * \return Opcion ingresada
 *
 */
int menuClientes ( ) ;

/** \brief Busca un indice libre
 *
 * \param Array a buscar.
 * \param Tamaño del array
 * \return Devuelve el indice dond eesta vacio, y si no lo esta devuelve -1.
 *
 */
int searchEmpty(eCliente list[],int len) ;


/** \brief Muestra un cliente
 *
 * \param array del cliente a mostrar
 *
 */
void showCliente(eCliente list) ;

/** \brief modifica un cliente
 *
 * \param array de cliente
 * \param tamaño del array
 *
 */
void modifyCliente(eCliente list[], int len) ;

/** \brief se ingresa el codigo del cliente y lo encuentra
 *
 * \param array a recorrer
 * \param tamaño del array
 * \param codigo a buscar
 * \return Return cliente index position or (-1) if the cliente not found.
 *
 */
int findClienteByCode(eCliente list[], int len, int code);

/** \brief Ordena los clientes
 *
 * \param array de clientes a ordenar
 * \param tamaño del array
 *
 */
void listarClientes(eCliente list[], int len) ;

/** \brief add in a existing list of clients the values received as parameters
 * in the first empty position
 * \param list client
 * \param len int tam
* \return  int Return (-1) if Error [Invalid length or NULL pointer or without
 * free space] - (0) if Ok
*/
int addCliente(eCliente list[],int len,int flagCliente) ;

/** \brief  Da de baja de el cliente
 *
 * \param array cliente
 * \param tamaño del array
 * \return 0 si pudo removerlo -1 si error
 *
 */
int removeCliente(eCliente list[], int len) ;


void showClientes(eCliente list[],int len) ;
