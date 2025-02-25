#include <stdio.h>

int main() {
    int N, maior = 0, menor = 999999;
    scanf("%d", &N);
    while (N > 0) {
        if (N > maior) {
            maior = N;
        }
        if (N < menor) {
            menor = N;
        }
        scanf("%d", &N);
    }
    printf("%d\n", maior);
    printf("%d", menor);
}
