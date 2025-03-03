#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numeros;
    int n, i;
    printf("Quantidade de numeros: ");
    scanf("%d", &n);

    numeros = malloc(n*sizeof(int));

    for(i = 0; i < n; i++)
    {
        printf("Numero %d: ", i+1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros lidos: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", numeros[i]);
    }

    free(numeros);
}
