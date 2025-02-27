#include <stdio.h>

int main() {
    //char nome[100], texto[100] = "Bem vindo!";

    /*printf("Qual seu nome? ");
    scanf("%s", &nome); // Não le espaço
    printf("\n%s, %s\n", nome, texto);*/

    /*printf("Qual o seu nome? ");
    scanf("%[^\n]s", &nome);
    printf("\n%s, %s\n", nome, texto);*/

    char str[31];
    printf("Digite seu nome: ");
    fgets(str, 30, stdin);
    puts(str);
}
