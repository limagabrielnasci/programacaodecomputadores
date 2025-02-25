#include <stdio.h>

int main()
{
	int vet[3];
	int mat[3][3];

	for (int i = 0; i < 3; i++){
		printf("numero para o vetor na posicao [%d]: ", i);
		scanf("%d", &vet[i]);
	}

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("numero para o vetor na posicao [%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf(" %d", vet[i] * mat[i][j]);

		}
	}
}
