// Se declara una estructura para el empleado.
typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;
}eEmployee;


typedef struct
{
    char nombre[50];
    char fechaNac[11];
    char paisOrigen[21];
}eDirector;

typedef struct
{
    char titulo[41];
    char nacionalidad;
    int anio;
    int id;
    eDirector director;
}ePelicula;

//funciones get.
/**
 * \brief Solicita un número al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 *
 */
float function_getFloat(char msj[]) ;

 /**
 * \brief Solicita un numero entero al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El numero entero ingresado por el usuario
 *
 */
int function_getInt(char msj[] );

 /**
 * \brief Solicita un caracter al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El numero entero ingresado por el usuario
 *
 */
char function_getChar(char msj[]) ;

 /**
 * \brief Verifica si el valor recibido es numérico
 * \param str Array con la cadena a ser analizada
 * \return 1 si es númerico y 0 si no lo es
 *
 */
int function_esNum(char str[]) ;

 /**
 * \brief Verifica si el valor recibido contiene solo letras
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo ' ' y letras y 0 si no lo es
 *
 */
int function_esSoloLetras(char str[]) ;

/**
 * \brief Verifica si el valor recibido contiene solo letras y números
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo espacio o letras y números, y 0 si no lo es
 *
 */
int function_esAlfaNumerico(char str[]) ;

/**
 * \brief Verifica si el valor recibido contiene solo números, + y -
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo numeros, espacios y un guion.
 *
 */
int function_esTelefono(char str[]) ;

/** \brief Solicita un texto
 *
 * \param char array mensaje a mostrar.
 * \param  char array donde se guardara el mensaje ingresado.
 *
 */
void function_getString (char msj[],char input[]) ;

 /**
 * \brief Solicita un texto al usuario y lo devuelve validado.
 * \param char array mensaje a ser mostrado
 * \param char array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo letras
 */
int function_getStringLetras(char msj[],char input[]) ;

 /**
 * \brief Solicita un texto numérico al usuario y lo devuelve valido si es solo numeros.
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo números
 */
int function_getStringNumeros(char msj[],char input[]) ;

/** \brief Valida si desea continuar o no
 *
 * \param  array char de mensaje a mostrar
 * \param  array char input a guardar
 * \return input
 *
 */
void function_continueYesOrNo(char msj[],char input[]) ;


/** \brief Menu de opciones
 *
 * \return Opcion ingresada
 *
 */

int menu ( ) ;

/** \brief Muestra un empleado del array
 *
 * \param Array a mostrar
 *
 */

void showEmployee(eEmployee list) ;

//Funciones para abm

/** \brief To indicate that all position in the array are empty,
 * this function put the flag (isEmpty) in TRUE in all
 * position of the array
 * \param list Employee
 * \param len int Array length
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 */
void initEmployees(eEmployee list[],int len) ;

/** \brief add in a existing list of employees the values received as parameters
 * in the first empty position
 * \param list employee
 * \param len int
 * \param int flag to know if an employees it's created
 * \return  int Return (-1) if Error [Invalid length or NULL pointer or without
 * free space] - (0) if Ok
*/
int addEmployee(eEmployee list[], int len) ;


/** \brief  find an Employee by Id en returns the index position in array.
 *
 * \param list employee
 * \param len int
 * \param id int
 * \return  Return employee index position or (-1) if the employee not found.
 *
 */
int findEmployeeById(eEmployee list[], int len, int id) ;

/** \brief Remove a Employee by Id (put isEmpty Flag in 1)
 *
 * \param list Employee
 * \param len int
 * \param id int
 * \return int Return (-1) if Error [Invalid length or NULL pointer or if can't
find a employee] - (0) if Ok
 *
 */
int removeEmployee(eEmployee list[], int len, int id) ;


/** \brief Busca un indice libre
 *
 * \param Array a buscar.
 * \param Tamaño del array
 * \return Devuelve el indice dond eesta vacio, y si no lo esta devuelve -1.
 *
 */
int searchEmpty(eEmployee lista[],int len) ;

/** \brief Modifica un emplado cargado
 *
 * \param aray de empleados.
 * \param tamaño del array
 *
 */
void modifyEmployee(eEmployee list[], int len) ;

/** \brief Muestra un empleado
 *
 * \param array de empleado a mosrar
 *
 */
void showEmployee (eEmployee list) ;

/** \brief muestra todos los empleados del array
 *
 * \param array de empleados a mostrar
 * \param int tamaño del array
 *
 */
void showEmployees(eEmployee list[],int len) ;

/** \brief Sort the elements in the array of employees, the argument order
indicate UP or DOWN order
 *
 * \param list Employee
 * \param len int
 * \param order int [1] indicate UP - [0] indicate DOWN
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */
int sortEmployees(eEmployee list[], int len, int order);

/** \brief Cuenta cuantos empleados estan por encima del salario promedio
 *
 * \param array de empleados a verificar
 * \param tamaño del array
 * \return int cantidad de empleados
 *
 */
int countOverAverage(eEmployee list[],int len);

/** \brief Calcula el promedio de los salarios del array
 *
 * \param array empleados
 * \param int tamaño del array
 * \return el promedio de los salarios
 *
 */
float averageSalary(eEmployee list[],int len) ;



/** \brief Suma todos los salarios del array del param 1
 *
 * \param array de empleados a contar
 * \param tamaño del array
 * \return float del total de todos los salarios
 *
 */
float totalSalary(eEmployee list[],int len) ;

/** \brief funcion bandera para ver si hay un empleado
 *
 * \param array a recorrer
 * \param tamaño del array
 * \return TRUE si hay un empleado o FALSE si no hay un empleado
 *
 */
int yaHayEmpleado(eEmployee list[],int len);
