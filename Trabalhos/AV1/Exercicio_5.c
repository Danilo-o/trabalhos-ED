#include <stdio.h>

int main()
{
	int vetor[3];
	int matriz[3][3];
	int resposta[3] = {0};

	printf("Digite os valores do vetor:\n");
	for(int i = 0; i < 3; i++) {
		printf("Posicao [%d]: ",i);
		scanf("%d",&vetor[i]);
	}

	printf("Digite os valores da matriz:\n");
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			printf("Posicao [%d][%d]: ", i, j);
			scanf("%d",&matriz[i][j]);
		}
	}

	for(int j = 0; j < 3; j++) {
		for(int i = 0; i < 3; i++) {
			resposta[j] += vetor[i] * matriz[i][j];
		}
	}

	for(int i = 0; i < 3; i++) {
		printf("Posicao [%d] = %d\n", i, resposta[i]);
	}

	return 0;
}
