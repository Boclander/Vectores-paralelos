#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Biblioteca.h"

void menu(sAlumno listadoAlumnos[])
{
    int opcion;
    do
    {

        system("cls");
        printf("=========================================================================\n");
        printf("                            REGISTRO DE ALUMNOS                          \n");
        printf("=========================================================================\n");
        printf("\n");
        printf("1.Cargar alumnos                   6.Mostrar alumnos mediocres\n");
        printf("\n");
        printf("2.Mostrar lista                    7.Todos los alumnos que se llamen Juan\n");
        printf("\n");
        printf("3.Ordenar por nombre               8.Todos los alumnos que empiezan con 'P'\n");
        printf("\n");
        printf("4.Mostrar alumnos aprobados        9.Modificar nota a partir de legajo\n");
        printf("\n");
        printf("5.Mostrar alumno con nota mas alta          10.Salir\n");
        printf("=========================================================================\n");
        printf("\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);
        system("pause");

        switch(opcion)
        {
        case 1:
            cargarLibre(listadoAlumnos);
            break;
        case 2:
            mostrarAlumnos(listadoAlumnos);
            break;
        case 3:
            ordenarNombre(listadoAlumnos);
            mostrarAlumnos(listadoAlumnos);
            break;
        case 4:
            mostrarAlumnosAprobados(listadoAlumnos);
            break;
        case 5:
            alumnoNotaMax(listadoAlumnos);
            break;
        case 6:
            alumnoMediocre(listadoAlumnos);
            break;
        case 7:
            mostrarAlumnosJuan(listadoAlumnos);
            break;
        case 8:
            mostrarAlumnosNombreP(listadoAlumnos);
            break;
        case 9:
            modifNotaDesdeLegajo(listadoAlumnos);
            break;
        case 10:
            opcion=10;
            break;
        default:
            printf("Ingrese una opcion valida");
            break;
        }
    }
    while (opcion != 10);
}
void cargarAlumnos(sAlumno listadoAlumnos[], int i)
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

    listadoAlumnos[i].estado = OCUPADO;
}

void cargarLibre(sAlumno listadoAlumnos[])
{
    int i;
    i=buscarLibre(listadoAlumnos);

    if(i == -1)
    {
        system("cls");
        printf("No se encontro un lugar libre!\n");
        printf("\n");
        system("pause");
    }
    else{
        cargarAlumnos(listadoAlumnos, i);
    }
}

void mostrarAlumnos(sAlumno listadoAlumnos[])
{
    system("cls");
    printf("%4s %20s %4s %5s \n", "Legajo", "Nombre", "Nota", "Altura");
    int i;
    for(i=0; i<TAM; i++)
    {
        printf("%4d %20s %4d %5.2f\n", listadoAlumnos[i].legajo, listadoAlumnos[i].nombre, listadoAlumnos[i].nota, listadoAlumnos[i].altura);
    }
    system("pause");
}
void ordenarNombre(sAlumno listadoAlumnos[])
{
    int i;
    int j;
    sAlumno aux;

    system("cls");
    for(i=0; i<TAM-1; i++)
    {
        for(j=i+1; j<TAM; j++)
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

void mostrarAlumnosAprobados(sAlumno listadoAlumnos[])
{
    int i;

    system("cls");

    printf("=========================================================================\n");
    printf("                           ALUMNOS APROBADOS\n");
    printf("=========================================================================\n");
    printf("\n");
    system("pause");
    system("cls");

    printf("%4s %20s %4s %5s \n", "Legajo", "Nombre", "Nota", "Altura");
    for(i=0; i<TAM; i++)
    {
        if(listadoAlumnos[i].nota > 6)
        {
            printf("%4d %20s %4d %5.2f\n", listadoAlumnos[i].legajo, listadoAlumnos[i].nombre, listadoAlumnos[i].nota, listadoAlumnos[i].altura);
        }
    }
    system("pause");
}
void alumnoNotaMax(sAlumno listadoAlumnos[])
{
    system("cls");
    sAlumno max;
    max.nota=1;
    int i;

    for(i=0; i<TAM; i++)
    {
        if(listadoAlumnos[i].nota > max.nota)
        {
            max=listadoAlumnos[i];
        }
    }
    printf("=========================================================================\n");
    printf("                        ALUMNO CON NOTA MAXIMA\n");
    printf("=========================================================================\n");
    printf("\n");
    system("pause");
    system("cls");

    printf("%4s %20s %4s %5s \n", "Legajo", "Nombre", "Nota", "Altura");
    printf("%4d %20s %4d %5.2f\n", max.legajo, max.nombre, max.nota, max.altura);
    system("pause");
}

void alumnoMediocre(sAlumno listadoAlumnos[])
{
    int i;

    system("cls");
    printf("=========================================================================\n");
    printf("                           ALUMNO MEDIOCRE\n");
    printf("=========================================================================\n");
    printf("\n");
    system("pause");
    system("cls");

    printf("%4s %20s %4s %5s \n", "Legajo", "Nombre", "Nota", "Altura");

    for(i=0; i<TAM; i++)
    {
        if(listadoAlumnos[i].legajo == 100 && strcmp(listadoAlumnos[i].nombre, "Juan") == 0 && listadoAlumnos[i].nota == 5 && listadoAlumnos[i].altura == 1.75)
        {
            printf("%4d %20s %4d %5.2f\n", listadoAlumnos[i].legajo, listadoAlumnos[i].nombre, listadoAlumnos[i].nota, listadoAlumnos[i].altura);
        }
    }
    system("pause");
}

void mostrarAlumnosJuan(sAlumno listadoAlumnos[])
{
    int i;

    system("cls");
    printf("=========================================================================\n");
    printf("                           ALUMNOS LLAMADOS JUAN\n");
    printf("=========================================================================\n");
    printf("\n");
    system("pause");

    system("cls");
    printf("%4s %20s %4s %5s \n", "Legajo", "Nombre", "Nota", "Altura");

    for(i=0; i<TAM; i++)
    {
        if(strcmp(listadoAlumnos[i].nombre, "Juan") == 0 || strcmp(listadoAlumnos[i].nombre, "juan") == 0)
        {
            printf("%4d %20s %4d %5.2f\n", listadoAlumnos[i].legajo, listadoAlumnos[i].nombre, listadoAlumnos[i].nota, listadoAlumnos[i].altura);
        }
    }
    system("pause");
}

void mostrarAlumnosNombreP(sAlumno listadoAlumnos[])
{
    int i;

    system("cls");
    printf("=========================================================================\n");
    printf("                         ALUMNOS CON NOMBRES CON 'P'\n");
    printf("=========================================================================\n");
    printf("\n");
    system("pause");

    system("cls");
    printf("%4s %20s %4s %5s \n", "Legajo", "Nombre", "Nota", "Altura");

    for(i=0; i<TAM; i++)
    {
        if(listadoAlumnos[i].nombre[0] == 'P' || listadoAlumnos[i].nombre[0] == 'p')
        {
            printf("%4d %20s %4d %5.2f\n", listadoAlumnos[i].legajo, listadoAlumnos[i].nombre, listadoAlumnos[i].nota, listadoAlumnos[i].altura);
        }
    }
    system("pause");
}

void modifNotaDesdeLegajo(sAlumno listadoAlumnos[])
{
    int legajoIntroducido;

    system("cls");
    printf("=========================================================================\n");
    printf("                         MODIFICAR NOTA POR LEGAJO\n");
    printf("=========================================================================\n");
    printf("\n");
    system("pause");

    system("cls");
    mostrarAlumnos(listadoAlumnos);
    printf("=========================================================================\n");
    printf("Ingrese el legajo del alumno que quiere modificar: ");
    scanf("%d", &legajoIntroducido);
    fflush(stdin);
    buscarLegajoYCambiarNota(listadoAlumnos, legajoIntroducido);

}
void buscarLegajoYCambiarNota(sAlumno listadoAlumnos[], int legajoIntroducido)
{
    int i;
    char rta;

    for(i=0; i<TAM; i++)
    {
        if(listadoAlumnos[i].estado == OCUPADO && listadoAlumnos[i].legajo == legajoIntroducido)
        {
            printf("Desea modificar la nota de este alumno?\n");
            printf("    (Ingrese S para Si o N para No)\n)");
            printf("\n");
            printf("%4d %20s %4d %5.2f\n", listadoAlumnos[i].legajo, listadoAlumnos[i].nombre, listadoAlumnos[i].nota, listadoAlumnos[i].altura);
            printf("\n");
            scanf("%c", &rta);
            if(rta == 's' || rta == 'S')
            {
                printf("Ingrese nueva nota: ");
                listadoAlumnos[i].nota=scanf("%d", &listadoAlumnos[i].nota);
            }
            else if(rta == 'n' || rta == 'N')
            {
                break;
            }
            else
            {
                printf("No ingreso una opcion valida");
            }
        }
    }
    system("pause");
}

void inicializarArrayIlogicamente(sAlumno listadoAlumnos[])
{
    int i;

    for(i=0; i<TAM; i++)
    {
        listadoAlumnos[i].estado = VACIO;
    }
}

int buscarLibre(sAlumno listadoAlumnos[])
{
    int i;
    int bandera=-1;

    for(i=0; i<TAM; i++)
    {
        if(listadoAlumnos[i].estado == VACIO)
        {
            bandera = i;
            break;
        }
    }
    return bandera;
}
