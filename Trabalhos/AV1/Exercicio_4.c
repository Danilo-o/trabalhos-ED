#include <stdio.h>

int main()
{
	int matrizO[3][3], matrizI[3][3], matrizM[3][3];
	int i, j, k;

	printf("Digite os valores da matriz Original (3x3):\n");
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("[%d][%d] :", i, j);
			scanf("%d", &matrizO[i][j]);
		}
	}

	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			if(i == j)
				matrizI[i][j] = 1;
			else
				matrizI[i][j] = 0;
		}
	}

	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			matrizM[i][j] = 0;
			for(k = 0; k < 3; k++) {
				matrizM[i][j] += matrizO[i][k] * matrizI[k][j];
			}
		}
	}

	printf("\nMatriz Original:\n");
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("%d ", matrizO[i][j]);
		}
		printf("\n");
	}

	printf("\nMatriz Identidade:\n");
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("%d ", matrizI[i][j]);
		}
		printf("\n");
	}

	printf("\nResultado Original * Identidade:\n");
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("%d ", matrizM[i][j]);
		}
		printf("\n");
	}

	return 0;
}
