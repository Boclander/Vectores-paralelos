#include <stdio.h>
#include <stdlib.h>
#define T 2

void cargarAlumnos(int[], char [] [21], int [], float[], int);
void mostrarAlumnos(int[], char [] [21], int [], float[], int);
void ordenarNombre();
void mostrarAlumnosAprobados(); //Nota +6
void alumnoNotaMax();           //+1
void alumnoMasMediocre(); //legajo=100 nota=5 nombre=Pepe Altura=1.75
void mostrarAlumnosJuan();
void mostrarAlumnosNombreP();
-Ingresar legajo y permitir modificacion de nota si se encuentra.
-Transformar carga de alumnos en carga aleatoria.
                //Menú de opciones

int main()
{
    int legajo[T];
    char nombres[T][21];
    int notas[T];
    float alturas[T];
    char mail [T][50];
    int i;

    cargarAlumnos(legajos, nombres, notas, alturas, T);
    mostrarAlumnos(legajos, nombres, notas, alturas, T);

    return 0;
}

void cargarAlumnos(int legajos[], char nombres[] [21], int notas[], float alturas[], int tam)
{
     for(i=0; i<tam; i++)
    {
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
}void mostrarAlumnos(int legajos[], char nombres[] [21], int notas[], float alturas[], int tam)
{
    printf("%4s %20s %2s %5s \n", "Legajo", "Nombre", "Nota", "Altura");
    for(i=0; i<tam; i++)
    {
        printf("%4d %s %2d %.2f\n", legajo[i], nombres[i], notas[i], alturas[i]);
    }
}
