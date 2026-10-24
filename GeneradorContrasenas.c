
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LONGITUD 100

int main(void)
{
    const char caracteres[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "0123456789"
        "!@#$%&*_-+";

    int longitud;
    int totalCaracteres =
        (int)(sizeof(caracteres) - 1);

    char contrasena[MAX_LONGITUD + 1];

    srand((unsigned int)time(NULL));

    printf("=================================\n");
    printf("  GENERADOR DE CONTRASENAS\n");
    printf("=================================\n");

    printf("Longitud de la contrasena (8-100): ");

    if (scanf("%d", &longitud) != 1)
    {
        printf("Error: debes ingresar un numero.\n");
        return 1;
    }

    if (longitud < 8 || longitud > MAX_LONGITUD)
    {
        printf("La longitud debe estar entre 8 y 100.\n");
        return 1;
    }

    for (int i = 0; i < longitud; i++)
    {
        contrasena[i] =
            caracteres[rand() % totalCaracteres];
    }

    contrasena[longitud] = '\0';

    printf("\nTu contrasena generada es:\n");
    printf("%s\n", contrasena);

    return 0;
}