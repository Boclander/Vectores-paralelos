#ifndef Biblioteca

typedef struct
{
    int legajo;
    char nombre[21];
    float altura;
    int nota;
}sAlumno;

int menu(int);
void cargarAlumnos(sAlumno[], int);
void mostrarAlumnos(sAlumno[], int);
void ordenarNombre(sAlumno[], int);
void mostrarAlumnosAprobados(sAlumno[], int); //Nota +6.
void alumnoNotaMax();           // +1.
void alumnoMasMediocre();       // legajo=100 Nombre=Juan Nota=5 Altura=1.75
void mostrarAlumnosJuan();
void mostrarAlumnosNombreP();
void modifNotaDesdeLegajo();

#endif // Biblioteca
