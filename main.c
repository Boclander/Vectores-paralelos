#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Biblioteca.h"


//-Transformar carga de alumnos en carga aleatoria.
//Menú de opciones

int main()
{
    sAlumno listadoAlumnos[T];

    inicializarArrayIlogicamente(listadoAlumnos, T);
    menu(listadoAlumnos, T);

    return 0;
}
