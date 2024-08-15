#include<stdio.h>


void main() {
	int idade;
	char nome[50];


	printf_s("Digite o seu nome: ");
	scanf_s("%s", nome, sizeof(nome));

	printf_s("\nDigite sua idade: ");
	scanf_s("%d", &idade);

	if (idade >= 18) {
		printf("Apto a ingressar no ensino medio!");
	}
	else {
		printf_s("Não esta apto a ingressar!");
	}




}