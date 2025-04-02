#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    Crie uma matriz dinâmica de inteiros com dimensões m x n. Preencha a matriz com
    valores e imprima os elementos usando ponteiros
    */
    int l, c, **mat, **pLinha, *pColuna;
    printf("quantas linhas? ");
    scanf("%d", &l);
    printf("quantas colunas? ");
    scanf("%d", &c);
    
    // Alocação das linhas (vetor de ponteiros)
    mat = (int **)malloc(l * sizeof(int *));
    if (mat == NULL) {
        printf("Falha ao alocar memória para as linhas.\n");
        exit(1);
    }

    // Alocação das colunas para cada linha
    for (pLinha = mat; pLinha < mat + l; pLinha++) {
        *pLinha = (int *)malloc(c * sizeof(int));  
        if (*pLinha == NULL) {
            printf("Falha ao alocar memória para as linhas.\n");
            exit(1);
        }
    }

    // Preenchimento da matriz usando apenas ponteiros
    for (pLinha = mat; pLinha < mat + l; pLinha++) {
        for (pColuna = *pLinha; pColuna < *pLinha + c; pColuna++) {
            scanf("%d", pColuna);
        }
    }

    // Impressão da matriz usando apenas ponteiros
    printf("\nMatriz lida:\n");
    for (pLinha = mat; pLinha < mat + l; pLinha++) {
        for (pColuna = *pLinha; pColuna < *pLinha + c; pColuna++) {
            printf("%d ", *pColuna);
        }
        printf("\n");
    }

    for (pLinha = mat; pLinha < mat + l; pLinha++) {
        free(*pLinha);
    }
    free(mat);
}