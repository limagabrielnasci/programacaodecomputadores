#include <stdio.h>

#define MAX_ALUNOS 100 // Defini��o do n�mero m�ximo de alunos

int main() {
    int n, i, acima_da_media = 0;
    float pesos[MAX_ALUNOS], media = 0.0, soma = 0.0;

    // Solicita o n�mero de alunos
    printf("Digite o n�mero de alunos: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_ALUNOS) {
        printf("N�mero inv�lido de alunos.\n");
        return 1;
    }

    // Entrada dos pesos
    printf("Digite os pesos dos alunos:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &pesos[i]);
        soma += pesos[i];
    }

    // C�lculo da m�dia
    media = soma / n;
    printf("M�dia dos pesos: %.2f\n", media);

    // Identifica��o dos alunos acima da m�dia
    printf("Pesos acima da m�dia:\n");
    for (i = 0; i < n; i++) {
        if (pesos[i] > media) {
            printf("%.2f\n", pesos[i]);
            acima_da_media++;
        }
    }

    printf("N�mero de alunos acima da m�dia: %d\n", acima_da_media);

    return 0;
}
