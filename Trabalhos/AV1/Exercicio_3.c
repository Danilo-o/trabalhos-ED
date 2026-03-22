#include <stdio.h>

int main()
{

	int matriz[3][3] = {0};

	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			printf("Digite o valor para [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}

    printf("Matriz multiplicada por 5: \n");
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			printf("Resultado [%d][%d]: %d\n", i, j, matriz[i][j] * 5);
		}
	}

	return 0;
}