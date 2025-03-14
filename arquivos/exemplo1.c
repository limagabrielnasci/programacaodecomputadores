#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *p, *inicio;
    printf("Entre com o número de elementos: \n");
    scanf("%d", &n);
    p = (int *)malloc(50*sizeof(int));

    if (p == NULL) {
        printf("erro ao alocar memoria\n");
        exit(1);
    }

    inicio = p;
    for (i = 0; i < n; i++, p++) {
        printf("entre com o %d valor: \n", i + 1);
        scanf("%d", p);
    }

    p = inicio;
    for (i = 0; i < n; i++, p++) {
        printf("%do. valor: %d\n", i + 1, *p);
    }
}
