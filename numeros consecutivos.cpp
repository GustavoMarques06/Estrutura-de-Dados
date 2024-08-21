#include<stdio.h>

int main() {
	int x , i;
	printf("Digite o valor de X: ");
	scanf_s("%d", &x);
	if (x % 2 == 0) {
		x++;
	}
	for (int i = 0; i < 6; i++)
	{
		printf("\n%d", x);
		x += 2;
	}


}