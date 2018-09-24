#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Biblioteca.h"

int main()
{
    sAlumno listadoAlumnos[TAM];

    inicializarArrayIlogicamente(listadoAlumnos);
    menu(listadoAlumnos);

    return 0;
}
