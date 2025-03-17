#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char rua[100];
    int numero;
} Endereco;

typedef struct {
    float n1, n2, n3;
} Notas;

typedef struct {
    char nome[100];
    Endereco endereco;
    Notas notas;
} Aluno;

Aluno *aluno = NULL; // ponteiro global para armazenar os alunos
int capacidade_inicial = 2;
int total_alunos = 0;

void menu();
void cadastrar();
void listar();
void salvarDados();
void carregarDados();

int main() {
    // Alocar memória inicial para os alunos
    aluno = (Aluno *)malloc(capacidade_inicial * sizeof(Aluno));
    if (aluno == NULL) {
        printf("Nao foi possivel alocar memoria.\n");
        return 1;
    }

    // Carregar dados do arquivo, se existir
    carregarDados();

    // Chamar o menu principal
    menu();

    // Liberar memória alocada
    free(aluno);
    return 0;
}

void menu() {
    int op;
    do {
        printf("\n(1) Cadastrar aluno\n(2) Listar alunos\n(3) Sair");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &op);
        getchar(); // Limpar o buffer de entrada

        switch (op) {
            case 1:
                cadastrar();
                break;
            case 2:
                listar();
                break;
            case 3:
                salvarDados(); // Salvar dados no arquivo antes de sair
                printf("Saindo...\n");
                exit(0);
            default:
                printf("\nOpcao invalida!\n");
        }
    } while (op != 3);
}

void cadastrar() {
    int op;

    while (1) {
        printf("\n(1) Desejo cadastrar novo aluno\n(2) Voltar");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &op);
        getchar(); // Limpar o buffer de entrada

        if (op == 2) {
            menu();
            return;
        }

        // Verificar se é necessário realocar memória
        if (total_alunos >= capacidade_inicial) {
            capacidade_inicial *= 2; // Dobrar a capacidade
            Aluno *novo_aluno = (Aluno *)realloc(aluno, capacidade_inicial * sizeof(Aluno));
            if (novo_aluno == NULL) {
                printf("Erro ao alocar memoria.\n");
                exit(1);
            }
            aluno = novo_aluno;
        }

        // Cadastrar novo aluno
        printf("\nDigite o nome do aluno: ");
        fgets(aluno[total_alunos].nome, sizeof(aluno[total_alunos].nome), stdin);
        aluno[total_alunos].nome[strcspn(aluno[total_alunos].nome, "\n")] = '\0'; // Remover o '\n'

        printf("Digite a rua: ");
        fgets(aluno[total_alunos].endereco.rua, sizeof(aluno[total_alunos].endereco.rua), stdin);
        aluno[total_alunos].endereco.rua[strcspn(aluno[total_alunos].endereco.rua, "\n")] = '\0'; // Remover o '\n'

        printf("Digite o numero: ");
        scanf("%d", &aluno[total_alunos].endereco.numero);
        getchar(); // Limpar o buffer de entrada

        printf("Digite a nota 1: ");
        scanf("%f", &aluno[total_alunos].notas.n1);
        getchar(); // Limpar o buffer de entrada

        printf("Digite a nota 2: ");
        scanf("%f", &aluno[total_alunos].notas.n2);
        getchar(); // Limpar o buffer de entrada

        printf("Digite a nota 3: ");
        scanf("%f", &aluno[total_alunos].notas.n3);
        getchar(); // Limpar o buffer de entrada

        total_alunos++;
        printf("Aluno cadastrado com sucesso!\n");
    }
}

void listar() {
    if (total_alunos == 0) {
        printf("\nNenhum aluno cadastrado.\n");
        return;
    }

    printf("\nLista de Alunos:\n");
    for (int i = 0; i < total_alunos; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: %s\n", aluno[i].nome);
        printf("Endereco: %s, %d\n", aluno[i].endereco.rua, aluno[i].endereco.numero);
        printf("Notas: %.2f, %.2f, %.2f\n", aluno[i].notas.n1, aluno[i].notas.n2, aluno[i].notas.n3);
    }
}

void salvarDados() {
    FILE *arquivo = fopen("alunos.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para salvar.\n");
        return;
    }

    for (int i = 0; i < total_alunos; i++) {
        fprintf(arquivo, "%s\n", aluno[i].nome);
        fprintf(arquivo, "%s\n", aluno[i].endereco.rua);
        fprintf(arquivo, "%d\n", aluno[i].endereco.numero);
        fprintf(arquivo, "%.2f %.2f %.2f\n", aluno[i].notas.n1, aluno[i].notas.n2, aluno[i].notas.n3);
    }

    fclose(arquivo);
    printf("Dados salvos com sucesso no arquivo alunos.txt.\n");
}

void carregarDados() {
    FILE *arquivo = fopen("alunos.txt", "r");
    if (arquivo == NULL) {
        printf("Arquivo de dados nao encontrado. Iniciando sem dados.\n");
        return;
    }

    while (!feof(arquivo)) {
        // Verificar se é necessário realocar memória
        if (total_alunos >= capacidade_inicial) {
            capacidade_inicial *= 2;
            Aluno *novo_aluno = (Aluno *)realloc(aluno, capacidade_inicial * sizeof(Aluno));
            if (novo_aluno == NULL) {
                printf("Erro ao alocar memoria.\n");
                exit(1);
            }
            aluno = novo_aluno;
        }

        // Ler dados do arquivo
        if (fgets(aluno[total_alunos].nome, sizeof(aluno[total_alunos].nome), arquivo) == NULL) break;
        aluno[total_alunos].nome[strcspn(aluno[total_alunos].nome, "\n")] = '\0'; // Remover o '\n'

        if (fgets(aluno[total_alunos].endereco.rua, sizeof(aluno[total_alunos].endereco.rua), arquivo) == NULL) break;
        aluno[total_alunos].endereco.rua[strcspn(aluno[total_alunos].endereco.rua, "\n")] = '\0'; // Remover o '\n'

        if (fscanf(arquivo, "%d\n", &aluno[total_alunos].endereco.numero) != 1) break;

        if (fscanf(arquivo, "%f %f %f\n", &aluno[total_alunos].notas.n1, &aluno[total_alunos].notas.n2, &aluno[total_alunos].notas.n3) != 3) break;

        total_alunos++;
    }

    fclose(arquivo);
    printf("Dados carregados com sucesso do arquivo alunos.txt.\n");
}