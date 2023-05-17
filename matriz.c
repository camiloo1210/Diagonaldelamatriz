#include <stdio.h>
#include <stdlib.h>
int main()
{
    int f, c;
    int **puntero = calloc(f, sizeof(int *));
    printf("Ingrese el numero de filas");
    scanf("%i", &f);
    printf("Ingrese el numero de columnas");
    scanf("%i", &c);
    for (int i = 0; i < f; i++)
    {
        puntero[i] = calloc(c, sizeof(int));
        for (int j = 0; j < c; j++)
        {
            printf("%i ",puntero[i][j]);
        }
        printf("\n");
    }
}
