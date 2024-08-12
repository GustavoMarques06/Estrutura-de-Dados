#include<stdio.h>

typedef struct {
	char nome[50];
	char categoria[50];
	int preco;
	char editora[50];
}quadrinhos;

void main() {
	quadrinhos q;
	int i, cont;

	printf("Digite quantas vezes voce deseja repetir o codigo: ");
	scanf_s("%d", &cont);

	for (int i = 1; i <= cont; i++) {
		printf("\nDigite o nome do quadrinho: ");
		scanf_s("%s", q.nome, sizeof(q.nome));

		printf("Digite a categoria do quadrinho: ");
		scanf_s("%s", q.categoria, sizeof(q.categoria));

		printf("Digite o preco do quadrinho: ");
		scanf_s("%d", &q.preco);

		printf("Digite a editora do quadrinho: ");
		scanf_s("%s", &q.editora, sizeof(q.editora));

		printf("\nNome: %s \nCategoria: %s \nPreco: %d \nEditora: %s \n", q.nome, q.categoria, q.preco, q.editora);


	}
}