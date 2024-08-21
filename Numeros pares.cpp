#include<stdio.h>

int main() {
	int x, i ;

	printf("Digite o Valor de X: ");
	scanf_s("%d", &x);

	for (int i = 1; i <= x; i++)
	{
		if (i % 2 == 0) {
			printf("%d\n", i);
		}
	}
}