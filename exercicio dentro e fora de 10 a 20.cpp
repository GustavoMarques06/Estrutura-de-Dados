#include<stdio.h>

int main() {
	int x, n, dentro = 0, fora = 0;

	printf("Digite o valor de N: ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("Digite o valor %d: ", i + 1);
		scanf_s("%d", &x);

		if (x >= 10 && x <= 20) {
			dentro++;
		}
		else {
			fora++;
		}
	}
	printf(" valores dentro do intervalo: %d ", dentro);
	printf("\n valores fora do intervalo: %d ", fora);
}