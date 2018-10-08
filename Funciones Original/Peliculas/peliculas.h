typedef struct
{
    char nombre[31];
    char fechaNacimiento[21];
    char origen[21];
    int isEmpty;

} eDirectores;
typedef struct
{
    int id;
    char titulo[51];
    int anio;
    char nacionalidad[31];
    eDirectores director;
    int isEmpty;
} ePeliculas;

int funcion_opcionesPeliculas();
void funcion_InicializarPeliculas(ePeliculas list[], int tam);
void funcion_InicializarDirectores(eDirectores list[], int tam);
void funcion_mostrarPelicula(ePeliculas list);
void funcion_mostrarDirector(eDirectores list);
void funcion_mostrarPeliculas(ePeliculas list[], int tam);
void funcion_mostrarDirectores(eDirectores list[], int tam);
int funcion_BuscarPeliculaXID(ePeliculas list[], int tam, int id);
int funcion_BuscarDirectorXNombre(eDirectores list[], int tam, char nombre[]);
int funcion_BuscarLugarVacioPeliculas(ePeliculas list[],int tam);
int funcion_BuscarLugarVacioDirector(eDirectores list[],int tam);
int funcion_AltaDirector(eDirectores list[], int tam);
