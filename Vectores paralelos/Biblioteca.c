#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Biblioteca.h"

void menu(sAlumno listadoAlumnos[], int T)
{
    int opcion;
    do
    {

        system("cls");
        printf("=========================================================================\n");
        printf("                            REGISTRO DE ALUMNOS                          \n");
        printf("=========================================================================\n");
        printf("\n");
        printf("1.Cargar alumnos           6.Alumno mas mediocre\n");
        printf("\n");
        printf("2.Mostrar lista            7.Todos los alumnos que se llamen Juan\n");
        printf("\n");
        printf("3.Ordenar por nombre       8.Todos los alumnos que empiecen con 'P'\n");
        printf("\n");
        printf("4.Alumnos aprobados        9.Modificar nota a partir de legajo\n");
        printf("\n");
        printf("5.Alumno con nota mas alta 10.Salir\n");
        printf("=========================================================================\n");
        printf("\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);
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
            break;
        case 5:
            break;
        case 10:
            opcion=10;
            break;
        }
    }
    while (opcion != 10);
}
void cargarAlumnos(sAlumno listadoAlumnos[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        system("cls");
        printf("Ingrese legajo: ");
        scanf("%d", &listadoAlumnos[i].legajo);
        fflush(stdin);
        printf("Ingrese nombre: ");
        gets(listadoAlumnos[i].nombre);
        fflush(stdin);
        printf("Ingrese nota: ");
        scanf("%d", &listadoAlumnos[i].nota);
        fflush(stdin);
        printf("Ingrese altura: ");
        scanf("%f", &listadoAlumnos[i].altura);
        fflush(stdin);
    }
}
void mostrarAlumnos(sAlumno listadoAlumnos[], int tam)
{
    system("cls");
    printf("%4s %20s %4s %5s \n", "Legajo", "Nombre", "Nota", "Altura");
    int i;
    for(i=0; i<tam; i++)
    {
        printf("%4d %20s %4d %5.2f\n", listadoAlumnos[i].legajo, listadoAlumnos[i].nombre, listadoAlumnos[i].nota, listadoAlumnos[i].altura);
    }
    system("pause");
}
void ordenarNombre(sAlumno listadoAlumnos[], int tam)
{
    int i;
    int j;
    sAlumno aux;

    system("cls");
    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if (strcmp(listadoAlumnos[i].nombre, listadoAlumnos[j].nombre) > 0)
            {
                aux=listadoAlumnos[i];
                listadoAlumnos[i]=listadoAlumnos[j];
                listadoAlumnos[j]=aux;
            }
        }
    }
    printf("=========================================================================\n");
    printf("                           ORDENANDO POR NOMBRE\n");
    printf("=========================================================================\n");
    printf("\n");
    system("pause");
}

void mostrarAlumnosAprobados(sAlumno listadoAlumnos[], int tam)
{
    int i;

    system("cls");

    printf("=========================================================================\n");
    printf("                           ALUMNOS APROBADOS\n");
    printf("=========================================================================\n");
    printf("\n");
    system("pause");
    system("cls");

    printf("%4s %20s %20s %5s \n", "Legajo", "Nombre", "Nota", "Altura");
    for(i=0; i<tam; i++)
    {
        if(listadoAlumnos[i].nota > 6)
        {
            printf("%4d %20s %4d %5.2f\n", listadoAlumnos[i].legajo, listadoAlumnos[i].nombre, listadoAlumnos[i].nota, listadoAlumnos[i].altura);
        }
    }
    system("pause");
}
