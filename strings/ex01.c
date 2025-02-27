#include <stdio.h>

int main() {
    char str[50];
    int i, c = 0;
    printf("Digite algo: ");
    fgets(str, 50, stdin);
    for (i = 0; i < str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            c++;
        }
    }
    printf("Tamanho da string: %d", c-1);
}
