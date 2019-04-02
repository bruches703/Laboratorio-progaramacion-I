#include <stdio.h>
#include <stdlib.h>

int contadorDePares (int vec[], int tam);

int main()
{
    int pares=0;
    int vec[10];

    for(int i=0;i<4;i++)
    {
        printf("Ingrese numero: \n");
        scanf("%d",&vec[i]);
    }
    pares=contadorDePares(vec,10);

    printf ("\nHay %d pares", pares);

    return 0;

}



int contadorDePares (int vec[], int tam)
{
    int pares=0;

    for(int i=0;i<tam;i++)
    {
        if(vec[i]%2==0)
            {
                pares++;
            }
    }
    return pares;
}
