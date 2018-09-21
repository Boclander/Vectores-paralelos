#ifndef Biblioteca

typedef struct
{
    int legajo;
    char nombre[21];
    float altura;
    int nota;
}sAlumno;

/** \brief menu con todas las operaciones
 *
 * \param sAlumno[]     estructura para la carga de alumnos
 * \param int   cantidad de alumnos a tomar
 * \return void
 *
 */
void menu(sAlumno[], int);

/** \brief carga los datos de los alumnos
 *
 * \param sAlumno[]     listado de alumnos a cargar
 * \param int   cantidad de alumnos a cargar
 * \return void
 *
 */
void cargarAlumnos(sAlumno[], int);

/** \brief muestra la lista de alumnos tal como se ingreso
 *
 * \param sAlumno[]     listado de alumnos
 * \param int   cantidad de alumnos a mostrar
 * \return void
 *
 */
void mostrarAlumnos(sAlumno[], int);

/** \brief ordena y muestra los alumnos por nombre
 *
 * \param sAlumno[]     listado de alumnos a ordenar
 * \param int   cantidad de alumnos a ordenar
 * \return void
 *
 */
void ordenarNombre(sAlumno[], int);

/** \brief muestra los alumnos aprobados con nota mayor a 6
 *
 * \param sAlumno[]     listado de alumnos a clasificar y mostrar
 * \param int   cantidad de alumnos a clasificar
 * \return void
 *
 */
void mostrarAlumnosAprobados(sAlumno[], int);

/** \brief muestra el o los alumnos con la nota mas alta
 *
 * \param sAlumno[]     listado de alumnos a clasificar y mostrar
 * \param int   cantidad de alumnos a clasificar
 * \return void
 *
 */
void alumnoNotaMax(sAlumno[], int);

/** \brief muestra el o los alumnos con legajo=100, nombre=Juan, nota=5 y altura=1.75
 *
 * \param sAlumno[]     alumnos a evaluar
 * \param int   cantidad de alumnos a evaluar
 * \return void
 *
 */
void alumnoMediocre(sAlumno[], int);       // legajo=100 Nombre=Juan Nota=5 Altura=1.75

/** \brief muestra todos los alumnos que se llamen Juan
 *
 * \param sAlumno[]     alumnos a clasificar
 * \param int   cantidad de alumnos a clasificar
 * \return void
 *
 */
void mostrarAlumnosJuan(sAlumno[], int);

/** \brief muestra los alumnos cuyo nombre comienzan con P
 *
 * \param sAlumno[]     alumnos a clasificar
 * \param int   cantidad de alumnos a clasificar
 * \return void
 *
 */
void mostrarAlumnosNombreP(sAlumno[], int);

void modifNotaDesdeLegajo();

#endif // Biblioteca
