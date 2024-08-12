#include<stdio.h>
#include<string.h>

typedef struct {
	char nome[50];
	char raca[50];
	int idade;
}cachorro;

void main(){
	cachorro c;
	printf("Digite o nome do cachorro: ");
	scanf_s("%s", c.nome, sizeof(c.nome));

	printf("Digite a raca do cachorro: ");
	scanf_s("%s", c.raca, sizeof(c.raca));

	printf("Digite a idade do cachorro: ");
	scanf_s("%d", &c.idade);

	printf("Nome: %s\nRaca: %s\nIdade: %d", c.nome, c.raca, c.idade);

}
