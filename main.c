#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Biblioteca.h"


//-Transformar carga de alumnos en carga aleatoria.
//Men� de opciones

int main()
{
    sAlumno listadoAlumnos[TAM];

    inicializarArrayIlogicamente(listadoAlumnos);
    menu(listadoAlumnos);

    return 0;
}
