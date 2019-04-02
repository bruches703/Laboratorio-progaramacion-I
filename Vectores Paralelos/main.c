#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int tam=1;
    int legajos[tam];
    int nota1[tam];
    int nota2[tam];
    float promedio[tam];
    char sexo[tam];

    for (int i=0;i<tam;i++)
    {
        system("cls");
        printf("\nIngrese numero de legajo: ");
        scanf("%d", &legajos[i]);

        printf("\nIngrese primer nota: ");
        scanf("%d", &nota1[i]);

        printf("Ingrese segunda nota: ");
        scanf("%d", &nota2[i]);

        promedio[i]= (float) (nota2[i]+nota1[i])/2;

        printf("Ingrese sexo: ");
        fflush(stdin);
        scanf("%c", &sexo[i]);
    }

    for(int i=0;i<tam;i++)
    {
        printf("\nLegajo): %d. Nota 1: %d. Nota 2: %d, sexo: %c. promedio: %.2f\n\n",legajos[i], nota1[i], nota2[i], sexo[i], promedio[i]);
    }

    return 0;
}
