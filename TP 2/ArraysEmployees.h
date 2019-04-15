typedef struct
{
    int id;
    char name [51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;
}eEmployee;

//Funciones

/** \brief To indicate that all position in the array are empty,
 * this function put the flag (isEmpty) in TRUE in all
 * position of the array
 * \param list Employee
 * \param len int Array length
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 */
int initEmployees(eEmployee list[], int len) ;

/** \brief Busca un indice libre
 *
 * \param Array a buscar.
 * \param Tamaño del array
 * \return Devuelve el indice dond eesta vacio, y si no lo esta devuelve -1.
 *
 */
 int searchEmpty(eEmployee list[],int len);

/** \brief add in a existing list of employees the values received as parameters
 * in the first empty position
 * \param list employee
 * \param len int
 * \param int flag to know if an employees it's created
 * \return  int Return (-1) if Error [Invalid length or NULL pointer or without
 * free space] - (0) if Ok
*/

/** \brief  find an Employee by Id en returns the index position in array.
 *
 * \param list employee
 * \param len int
 * \param id int
 * \return  Return employee index position or (-1) if the employee not found.
 *
 */
 int findEmployeeById(eEmployee list[], int len, int id) ;


// int addEmployee(eEmployee list[], int len) ;
