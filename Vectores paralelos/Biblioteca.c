#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"

int menu(int opcion)
{
    printf("=========================================================================\n");
    printf("                            REGISTRO DE ALUMNOS                          \n");
    printf("=========================================================================\n");
    printf("\n");
    printf("1.Cargar alumnos           6.Alumno mas mediocre\n");
    printf("\n");
    printf("2.Mostrar lista            7.Todos los alumnos que se llamen Juan\n");
    printf("\n");
    printf("3.Ordenar por nombre       8.Todos los alumnos que empiecen con P\n");
    printf("\n");
    printf("4.Alumnos aprobados        9.Modificar nota a partir de legajo\n");
    printf("\n");
    printf("5.Alumno con nota mas alta 10.Salir\n");
    printf("=========================================================================\n");
    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);

    return opcion;
}
void cargarAlumnos(int legajo[], char nombres[] [21], int notas[], float alturas[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        system("cls");
        printf("Ingrese legajo: ");
        scanf("%d", &legajo[i]);

        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(nombres[i]);

        printf("Ingrese nota: ");
        scanf("%d", &notas[i]);

        printf("Ingrese altura: ");
        scanf("%f", &alturas[i]);
    }
}
void mostrarAlumnos(int legajo[], char nombres[] [21], int notas[], float alturas[], int tam)
{
    system("cls");
    printf("%4s %20s %20s %5s \n", "Legajo", "Nombre", "Nota", "Altura");
    int i;
    for(i=0; i<tam; i++)
    {
        printf("%4d %20s %20d %.2f\n", legajo[i], nombres[i], notas[i], alturas[i]);
    }
    system("pause");
}
void ordenarNombre(int legajo[], char nombres[] [21], int notas [], float alturas [], int tam)
{
    int i;
    int j;
    char auxNombres[21];
    int auxLegajo;
    int auxNotas;
    float auxAlturas;

    system("cls");
    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(nombres[i][21] < nombres[j][21])
            {
                strcpy(auxNombres,nombres[i][21]);
                strcpy(nombres[i][21],nombres[j][21]);
                strcpy(nombres[j][21],auxNombres);

         /*       strcpy(auxLegajo, legajo[i]);
                strcpy(legajo[i], legajo[j]);
                strcpy(legajo[j], auxLegajo);
     */       }
        }
    }
    printf("          ORDENANDO POR NOMBRE\n");
    system("pause");
}
