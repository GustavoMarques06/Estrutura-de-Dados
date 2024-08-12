#include<stdio.h>
#include<string.h>

int adicao(int a, int b) {
	int resultado;
	resultado = a + b;
	return resultado;
}
int sub(int a, int b) {
	int resultado;
	resultado = a - b;
	return resultado;
}
float div(float a, float b) {
	int resultado;
	resultado = a / b;
	return resultado;
}
int multip(int a, int b) {
	int resultado;
	resultado = a * b;
	return resultado;
}

int main() {
	int escolha, x, y, resultado;

	printf("===========================");
	printf("\n Calculadora:  ");
	printf("\nDigite 1 para Soma ");
	printf("\nDigite 2 para Subtracao ");
	printf("\nDigite 3 para Multiplicacao	");
	printf("\nDigite 4 para Divisao ");
	printf("\n===========================");

	printf("\nDigite o numero equivalente a operacao desejada: ");
	scanf_s("%d", &escolha);

	printf("\nDigite o primeiro numero da operacao: ");
	scanf_s("%d", &x);

	printf("\nDigite o segundo numero da operacao: ");
	scanf_s("%d", &y);

	if (escolha == 1) {
		resultado = adicao(x, y);
		printf("\nA soma dos numeros sao: %d", resultado);
	}
	if (escolha == 2) {
		resultado = sub(x, y);
		printf("\nA Subtracao dos numeros sao: %d", resultado);
	}
	if (escolha == 3) {
		resultado = multip(x, y);
		printf("\nA Multiplicacao dos numeros sao: %d", resultado);
	}
	else {
		resultado = div(x, y);
		printf("\nA Divisao dos numeros sao: %d", resultado);
	}


}
