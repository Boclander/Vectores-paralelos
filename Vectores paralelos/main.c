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
    int opcion;

    do
    {
        system("cls");
        opcion=menu(opcion);
        system("pause");
        switch(opcion)
        {
        case 1:
            cargarAlumnos(listadoAlumnos, T);
            break;
        case 2:
            mostrarAlumnos(listadoAlumnos, T);
            break;
        case 3:
            ordenarNombre(listadoAlumnos, T);
            mostrarAlumnos(listadoAlumnos, T);
            break;
        case 4:
            mostrarAlumnosAprobados(listadoAlumnos, T);
        case 10:
            opcion=10;
            break;
        }
    }
    while(opcion != 10);

    return 0;
}
