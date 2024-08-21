#include<stdio.h>
#include<stdlib.h>

int primo(int x) {
	int i, divisor = 0;
	for (i = 1; i <= x; i++) {
		if (x % i == 0) {
			divisor++;
		}
	}
	if (divisor == 2) {
		return;
	}
	
}


int main() {
	int i, x;

	printf("Digite o Valor de X: ");
	scanf_s("%d", &x);

	for (i = 0; i <= x; i++) {
		if (primo(i) == 1) {
			printf("%d\n", i);
		}

	}

}