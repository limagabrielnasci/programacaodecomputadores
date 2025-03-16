#include <stdio.h>
#include <stdlib.h> // malloc
#include <string.h> // strcspn

struct Cadastro {
    char nome[100];
    char rua[100];
    char numero[30];
    char bairro[100];
    char cidade[100];
    char estado[100];
    char cep[30];
};

int main() {
    struct Cadastro *cadastro1; // ponteiro da estrutura, 
    // *cadastro1 eh a variavel que armazena o endereco de memória de uma instância dessa estrutura

    // alocando a qtd de bytes necessario com seguranca
    if ((cadastro1 = (struct Cadastro *)malloc(sizeof(struct Cadastro))) == NULL) {
        printf("Erro ao alocar memória");
        return 1;
    }

    // pedindo os dados dos usuarios
    // usando o ponteiro da struct para acessar e modificar as instancias
    printf("Digite o nome: ");
    fgets(cadastro1->nome, sizeof(cadastro1->nome), stdin); // le o nome do usuario e armazena no campo 'nome' da struct
    cadastro1->nome[strcspn(cadastro1->nome, "\n")] = '\0'; 

    printf("\nNome da rua: ");
    fgets(cadastro1->rua, sizeof(cadastro1->rua), stdin);
    cadastro1->rua[strcspn(cadastro1->rua, "\n")] = '\0';

    printf("\nNumero do telefone: ");
    fgets(cadastro1->numero, sizeof(cadastro1->numero), stdin);
    cadastro1->numero[strcspn(cadastro1->numero, "\n")] = '\0';

    printf("\nBairro: ");
    fgets(cadastro1->bairro, sizeof(cadastro1->bairro), stdin);
    cadastro1->bairro[strcspn(cadastro1->bairro, "\n")] = '\0';

    printf("\nCidade: ");
    fgets(cadastro1->cidade, sizeof(cadastro1->cidade), stdin);
    cadastro1->cidade[strcspn(cadastro1->cidade, "\n")] = '\0';

    printf("\nEstado: ");
    fgets(cadastro1->estado, sizeof(cadastro1->estado), stdin);
    cadastro1->estado[strcspn(cadastro1->estado, "\n")] = '\0';

    printf("\nCEP: ");
    fgets(cadastro1->cep, sizeof(cadastro1->cep), stdin);
    cadastro1->cep[strcspn(cadastro1->cep, "\n")] = '\0';

    printf("\nNome: %s", cadastro1->nome);
    printf("\nRua: %s", cadastro1->rua);
    printf("\nNumero: %s", cadastro1->numero);
    printf("\nBairro: %s", cadastro1->bairro);
    printf("\nCidade: %s", cadastro1->cidade);
    printf("\nEstado : %s", cadastro1->estado);
    printf("\nCEP: %s", cadastro1->cep);

    free(cadastro1);
}