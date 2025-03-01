#include <stdio.h>

void troca(int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main()
{
   int a = 2, b = 3;
   printf("antes da troca: %d %d\n", a, b);
   troca(&a, &b);
   printf("\ndepois da troca: %d %d\n", a, b);
}
