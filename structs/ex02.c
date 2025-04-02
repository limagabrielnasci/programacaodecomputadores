#include <stdio.h>
#include <string.h>

struct cadastro {
    char nome[100], rua[100], bairro[100], cidade[100], estado[100];
    int numero;
    unsigned long int cep;
} cliente;

int main() {
    /*
    Faça um algoritmo que defina uma struct para o cadastro de um cliente a qual contenha: nome do cliente com 100 caracteres, rua, numero, bairro, cidade, estado e cep. Logo após, mostre essas informações na tela.
    */
    fgets(cliente.nome, 100, stdin);
    cliente.nome[strcspn(cliente.nome, "\n")] = '\0';
    fgets(cliente.rua, 100, stdin);
    cliente.rua[strcspn(cliente.rua, "\n")] = '\0';
    fgets(cliente.bairro, 100, stdin);
    cliente.bairro[strcspn(cliente.bairro, "\n")] = '\0';
    fgets(cliente.cidade, 100, stdin);
    cliente.cidade[strcspn(cliente.cidade, "\n")] = '\0';
    fgets(cliente.estado, 100, stdin);
    cliente.estado[strcspn(cliente.estado, "\n")] = '\0';
    scanf("%d", &cliente.numero);
    scanf("%lu", &cliente.cep);
    printf("\n%s\n%s\n%s\n%s\n%s\n%d\n%lu\n", cliente.nome, cliente.rua, cliente.bairro, cliente.cidade, cliente.estado, cliente.numero, cliente.cep);
}