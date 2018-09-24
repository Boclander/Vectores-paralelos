#ifndef Biblioteca
#define VACIO -1
#define OCUPADO 0
#define BORRADO 1
#define TAM 3

typedef struct
{
    int legajo;
    char nombre[21];
    float altura;
    int nota;
    int estado;
}sAlumno;

/** \brief menu con todas las operaciones
 *
 * \param sAlumno[]     estructura para la carga de alumnos
 * \return void
 *
 */
void menu(sAlumno[]);

/** \brief carga los datos de los alumnos
 *
 * \param sAlumno[]     listado de alumnos a cargar
 * \param int   posicion dentro del array en la que se va a cargar
 * \return void
 *
 */
void cargarAlumnos(sAlumno[], int);

/** \brief muestra la lista de alumnos tal como se ingreso
 *
 * \param sAlumno[]     listado de alumnos
 * \return void
 *
 */
void mostrarAlumnos(sAlumno[]);

/** \brief ordena y muestra los alumnos por nombre
 *
 * \param sAlumno[]     listado de alumnos a ordenar
 * \return void
 *
 */
void ordenarNombre(sAlumno[]);

/** \brief muestra los alumnos aprobados con nota mayor a 6
 *
 * \param sAlumno[]     listado de alumnos a clasificar y mostrar
 * \return void
 *
 */
void mostrarAlumnosAprobados(sAlumno[]);

/** \brief muestra el o los alumnos con la nota mas alta
 *
 * \param sAlumno[]     listado de alumnos a clasificar y mostrar
 * \return void
 *
 */
void alumnoNotaMax(sAlumno[]);

/** \brief muestra el o los alumnos con legajo=100, nombre=Juan, nota=5 y altura=1.75
 *
 * \param sAlumno[]     alumnos a evaluar
 * \return void
 *
 */
void alumnoMediocre(sAlumno[]);

/** \brief muestra todos los alumnos que se llamen Juan
 *
 * \param sAlumno[]     alumnos a clasificar
 * \return void
 *
 */
void mostrarAlumnosJuan(sAlumno[]);

/** \brief muestra los alumnos cuyo nombre comienzan con P
 *
 * \param sAlumno[]     alumnos a clasificar
 * \return void
 *
 */
void mostrarAlumnosNombreP(sAlumno[]);

/** \brief inicializa todo el array en -1
 *
 * \param sAlumno[]     array de alumnos
 * \return void
 *
 */
void inicializarArrayIlogicamente(sAlumno[]);

/** \brief busca la primer posicion libre dentro del array
 *
 * \param sAlumno[]     el array de alumnos
 * \return int      la posicion libre
 *
 */
int buscarLibre(sAlumno[]);

/** \brief llama a las funciones buscarLibre y cargarAlumnos para cargar en un elemento libre del array
 *
 * \param sAlumno[]     el array de alumnos
 * \return void
 *
 */
void cargarLibre(sAlumno[]);

/** \brief permite modificar una nota a partir del legajo de un alumno
 *
 * \param sAlumno[]     la lista de alumnos sobre la cual buscar el legajo
 * \return void
 *
 */
void modifNotaDesdeLegajo(sAlumno[]);

void buscarLegajoYCambiarNota(sAlumno[], int);

#endif // Biblioteca
