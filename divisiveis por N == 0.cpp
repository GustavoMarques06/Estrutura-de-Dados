#include<stdio.h>

int main() {
	int n, i;
	printf("Digite o valor de N: ");
	scanf_s("%d", &n);

	for (int i = 0; i < 10000; i++)
	{
		if (i % n == 2) {
			printf("\n%d", i);
		}
	}

}