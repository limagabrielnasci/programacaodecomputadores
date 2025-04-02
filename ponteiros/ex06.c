#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    /*
    Dinamicamente aloque memória para duas strings, 'nome' e 'sobrenome'. Preencha
    essas strings com valores e, em seguida, concatene-as para formar o nome completo.
    Por fim, libere a memória alocada.
    */
    char *nome, *sobrenome;
    if ((nome = (char*)malloc(50 * sizeof(char))) == NULL) {
        printf("Nao foi possivel alocar a memoria.");
        exit(1);
    }
    if ((sobrenome = (char*)malloc(50 * sizeof(char))) == NULL) {
        printf("Nao foi possivel alocar a memoria.");
        exit(1);
    }
    printf("nome: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0';
    printf("sobrenome: ");
    fgets(sobrenome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0';
    printf("nome completo: %s %s", nome, sobrenome);
    free(nome);
    free(sobrenome);
}