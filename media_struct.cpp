#include<stdio.h>

typedef struct {
	char nome[50];
	int idade;
	int matricula;
	int media;
}Aluno;

int main() {
	Aluno a;
	printf("Leitor de aluno");
	printf("\n=======================");
	for (int i = 0; i < 5; i++)
	{
		printf("\nDigite o nome do aluno: ");
		scanf_s("%s", a.nome, sizeof(a.nome));
		printf("Digite a idade do aluno: ");
		scanf_s("%d", &a.idade);
		printf("Digite a Matricula do aluno: ");
		scanf_s("%d", &a.matricula);
		printf("Digite a media do aluno: ");
		scanf_s("%d", &a.media);

		printf("\nNome: %s \nIdade: %d \nMatricula: %d \nMedia: %d\n", a.nome, a.idade, a.matricula, a.media);
	}
}