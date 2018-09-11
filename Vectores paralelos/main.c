#include <stdio.h>
#include <stdlib.h>
#define T 1

int main()
{
    int legajo[T];
    char nombres[T][21];
    int notas[T];
    float alturas[T];
    int i;

    for(i=0; i<T; i++)
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
    printf("%4s %20s %2s %5s \n", "Legajo", "Nombre", "Nota", "Altura");
    for(i=0; i<T; i++)
    {
        printf("%4d %s %2d %.2f\n", legajo[i], nombres[i], notas[i], alturas[i]);
    }
    return 0;
}
