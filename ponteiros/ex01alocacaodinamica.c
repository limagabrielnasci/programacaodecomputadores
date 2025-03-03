#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, i;

    arr = malloc(5 * sizeof(int));

    printf("Quantidade de numeros a serem lidos: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Numeros lidos: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);
}
