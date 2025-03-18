#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int conteudo; // armazena o valor do nó
    struct node *prox; // ponteiro pro proximo nó da lista
} node;

node *cria_lista();
void inserir_inicio(node *lista, int numero);
void inserir_fim(node *lista, int numero);
int remover_inicio(node *lista);
int remover_fim(node *lista);
void imprime(node *lista);

int main() {
    node *lista; // ponteiro para a lista encadeada
    int num;
    int num1 = 11;
    int num2 = 22;
    int num3 = 33;
    int num4 = 44;
    int num5 = 55;
    lista = cria_lista();
    inserir_inicio(lista, num1);
    inserir_inicio(lista, num2);
    inserir_inicio(lista, num3);
    inserir_inicio(lista, num4);
    imprime(lista);
    num = remover_inicio(lista);
    printf("Removido: %d\n", num);
    imprime(lista);
    num = remover_fim(lista);
    printf("Removido: %d\n", num);
    imprime(lista);
    inserir_fim(lista, num5);
    imprime(lista);
}

// cria um nó vazio, *prox aponta pra NULL
node *cria_lista() {
    // aloca memoria para o nó
    node *novo = (node *)malloc(sizeof(node));
    if (novo == NULL) exit(0); // se nao houver espaço fecha o programa
    novo->prox = NULL; // o novo nó criado é o ultimo nó da lista
    return (novo); // retorna endereco do novo nó criado na memoria
}

void inserir_inicio(node *lista, int numero) {
    node *novo = (node *)malloc(sizeof(node));
    if (novo == NULL) exit (0);
    novo->conteudo = numero; // atribui um valor ao conteudo do nó
    novo->prox = lista->prox; // novo nó aponta para o antigo primeiro nó da lista
    lista->prox = novo; // o ponteiro prox da lista aponta para o novo nó
}

void inserir_fim(node *lista, int numero) {
    node *novo = (node *)malloc(sizeof(node));
    if (novo == NULL) exit (0);
    novo->conteudo = numero; // atribui o numero ao conteudo do nó
    novo->prox = NULL; // o novo nó será o ultimo, entao seu prox é NULL

    // percorre a lista ate encontrar o ultimo nó
    node *atual = lista;
    while (atual->prox != NULL) {
        atual = atual->prox;
    }
    atual->prox = novo; // o ultimo nó agora aponta para o novo nó
}

// remove o primeiro elemento da lista e retorna o valor
int remover_inicio(node *lista) {
    node *aux;
    int num;
    aux = lista->prox; // aponta pro primeiro nó real da lista
    num = aux->conteudo; // armazena o conteudo do nó a ser removido
    lista->prox = aux->prox; // o nó cabeça agr aponta para o segundo nó da lista
    free(aux);
    return(num);
}

// Remove o último elemento da lista e retorna seu valor
int remover_fim(node *lista) {
    int num;
    node *ult, *penult;
    ult = lista->prox; // Aponta para o primeiro nó real da lista
    penult = lista; // Começa apontando para o nó cabeça
    
    // Percorre a lista até encontrar o último nó
    while (ult->prox != NULL) {
        penult = ult;
        ult = ult->prox;
    }
    
    num = ult->conteudo; // Armazena o conteúdo do último nó
    penult->prox = NULL; // O penúltimo nó agora se torna o último
    free(ult); // Libera a memória do nó removido
    return num; // Retorna o valor removido
}

// Imprime todos os elementos da lista
void imprime(node *lista) {
    node *aux;
    aux = lista->prox; // Começa do primeiro nó real (após o nó cabeça)
    while (aux != NULL) {
        printf("%5d", aux->conteudo); // Imprime o valor do nó
        aux = aux->prox; // Avança para o próximo nó
    }
    printf("\n\n"); // Pula uma linha ao final da impressão
}