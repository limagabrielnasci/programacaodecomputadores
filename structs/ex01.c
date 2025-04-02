#include <stdio.h>
#include <string.h>

struct aluno {
    char nome[100];
    int id;
    float nota;
} info;

int main() {
    /*
    Faça um algoritmo que defina uma struct a qual contenha: o nome do aluno, a identificação e uma nota. Logo após solicite ao usuário que seja informa o nome, a identificação e a nota e ao final mostre essas informações.
    */
    fgets(info.nome, 100, stdin);
    info.nome[strcspn(info.nome, "\n")] = '\0';
    scanf("%d", &info.id);
    scanf("%f", &info.nota);
    printf("%s\n%d\n%.2f\n", info.nome, info.id, info.nota);
}