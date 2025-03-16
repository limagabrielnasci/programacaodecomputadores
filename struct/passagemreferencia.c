#include <stdio.h>

// Declaração da estrutura antes da função
struct ponto {
    int x;
    int y;
};

// Declaração da função antes de sua definição
void transformarPonto(struct ponto *p, int fator);

int main() {
    struct ponto meuP = {2, 3};
    transformarPonto(&meuP, 2);
    printf("%d,%d\n", meuP.x, meuP.y);
}

void transformarPonto(struct ponto *p, int fator) {
    (*p).x *= fator;
    (*p).y *= fator;
}
