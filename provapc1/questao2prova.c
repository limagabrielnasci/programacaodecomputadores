#include <stdio.h>

#define MAX_ALUNOS 100 // Definição do número máximo de alunos

int main() {
    int n, i, acima_da_media = 0;
    float pesos[MAX_ALUNOS], media = 0.0, soma = 0.0;

    // Solicita o número de alunos
    printf("Digite o número de alunos: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_ALUNOS) {
        printf("Número inválido de alunos.\n");
        return 1;
    }

    // Entrada dos pesos
    printf("Digite os pesos dos alunos:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &pesos[i]);
        soma += pesos[i];
    }

    // Cálculo da média
    media = soma / n;
    printf("Média dos pesos: %.2f\n", media);

    // Identificação dos alunos acima da média
    printf("Pesos acima da média:\n");
    for (i = 0; i < n; i++) {
        if (pesos[i] > media) {
            printf("%.2f\n", pesos[i]);
            acima_da_media++;
        }
    }

    printf("Número de alunos acima da média: %d\n", acima_da_media);

    return 0;
}
