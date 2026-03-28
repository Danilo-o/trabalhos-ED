#include <stdio.h>
#include <string.h>

int main()
{

	char p1[10], p2[10], p3[10];
	int tamanho;

	printf("Digite a primeira palavra: \n");
	scanf("%s", p1);
	printf("Digite a segunda palavra: \n");
	scanf("%s", p2);
	printf("Digite a terceira palavra: \n");
	scanf("%s", p3);

	tamanho = strlen(p3);
	for(int i = tamanho - 1; i>= 0; i--) {
		printf("%c", p3[i]);
	}
	printf(", ");
	tamanho = strlen(p2);
	for(int i = tamanho - 1; i>= 0; i--) {
		printf("%c", p2[i]);
	}
	printf(", ");
	tamanho = strlen(p1);
	for(int i = tamanho - 1; i>= 0; i--) {
		printf("%c", p1[i]);
	}

	return 0;
}
