#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Biblioteca.h"
#define T 4


void cargarAlumnos(int[], char [] [21], int [], float[], int);
void mostrarAlumnos(int[], char [] [21], int [], float[], int);
void ordenarNombre();
void mostrarAlumnosAprobados(); //Nota +6
void alumnoNotaMax();           //+1
void alumnoMasMediocre(); //legajo=100 nota=5 nombre=Pepe Altura=1.75
void mostrarAlumnosJuan();
void mostrarAlumnosNombreP();
//-Ingresar legajo y permitir modificacion de nota si se encuentra.
//-Transformar carga de alumnos en carga aleatoria.
//Menú de opciones

int main()
{
    int opcion;
    int legajo[T];
    char nombres[T][21];
    int notas[T];
    float alturas[T];
    int i;

    do
    {
        system("cls");
        opcion=menu(opcion);
        system("pause");
        switch(opcion)
        {
        case 1:
            cargarAlumnos(legajo, nombres, notas, alturas, T);
            break;
        case 2:
            mostrarAlumnos(legajo, nombres, notas, alturas, T);
            break;
        case 3:
            ordenarNombre(legajo, nombres, notas, alturas, T);
            mostrarAlumnos(legajo, nombres, notas, alturas, T);
            break;
        //case 4:
        case 10:
            opcion=10;
            break;
        }
    }
    while(opcion != 10);

    return 0;
}
