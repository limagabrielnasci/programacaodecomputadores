#include <stdio.h>

struct Horario {
    int hora;
    int minuto;
    int segundo;
};

int main() {
    /*
    Faça um algoritmo que defina uma struct horario com hora, minuto e segundo do tipo inteiro e declare uma variável vetor para armazenar o horário.  Solicite ao usuário a entrada de dados e mostre os horários armazenados.
    */
    struct Horario vet[1];
    int i;
    for (i = 0; i < 1; i++) {
        scanf("%d", &vet[i].hora);
        scanf("%d", &vet[i].minuto);
        scanf("%d", &vet[i].segundo);
    }
    for (i = 0; i < 1; i++) {
        printf("%d:%d:%d\n", vet[i].hora, vet[i].minuto, vet[i].segundo);
    }
}