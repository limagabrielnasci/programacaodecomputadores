#include <stdio.h>

void ler_nome();
void ler_id();
void ler_nota();

struct aluno {
    char nome[100];
    int id;
    float nota;
} info;

int main() {
    ler_nome();
    ler_id();
    ler_nota();
}

void ler_nome() {
    char c;
    int i = 0;
    printf("Digite seu nome: ");
    //fgets(info.nome, sizeof(info.nome), stdin);
    //printf("Nome: %s", info.nome);
    while ((c = getchar()) != '\n' && i < 99) {
        info.nome[i] = c;
        i++;
    }
    info.nome[i] = '\0'; // definir o fim da string
    for (i = 0; info.nome[i] != '\0'; i++) {
        printf("%c", info.nome[i]);
    }
}

void ler_id() {
    int id;
    printf("\nIdentidade: ");
    scanf("%d", &id);
    info.id = id;
    printf("Id: %d", info.id);
}

void ler_nota() {
    float nota;
    printf("\nDigite a nota do aluno: ");
    scanf("%f", &nota);
    info.nota = nota;
    printf("Nota do aluno: %.2f", info.nota);
}

