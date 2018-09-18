#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Biblioteca.h"
#define T 3

//-Transformar carga de alumnos en carga aleatoria.
//Menú de opciones

int main()
{
    sAlumno listadoAlumnos[T];

    menu(listadoAlumnos, T);

    return 0;
}
