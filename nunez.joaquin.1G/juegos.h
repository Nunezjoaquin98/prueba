typedef struct
{
    int id;
    char descripcion[51] ;
}eCategoria;

typedef struct
{
    int codigo ;
    char descripcion[51];
    int importe;
    int idCategoria;
    int isEmpty;
}eJuegos;


/** \brief muestra un array
 *
 * \param array a mostrar
 */
void showJuego(eJuegos list) ;

/** \brief muestra todos los elementos de un array
 *
 * \param array a recorrer
 * \param tamanio del array
 *
 */
void showJuegos(eJuegos list[],int len) ;


/** \brief se carga 5 juegos en la estructura cuando se llama a esta funcion
 *
 * \param array de la estructura a cargar
 *
 */
void harcodeoJuego(eJuegos list[]) ;

/** \brief se carga 5 categorias en la estructura cuando se llama a esta funcion
 *
 * \param array de la estructura a cargar
 *
 */
void harcodearCat(eCategoria list[]) ;

/** \brief muestra todos los elementos de un array
 *
 * \param array a recorrer
 * \param tamanio del array
 *
 */
void showCategorias(eCategoria list[], int len) ;


/** \brief se ingresa el codigo del juego y lo encuentra
 *
 * \param array a recorrer
 * \param tamaño del array
 * \param codigo a buscar
 * \return Return juego index position or (-1) if the cliente not found.
 */
int findJuegoByCode(eJuegos list[], int len, int code);
