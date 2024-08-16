#include <stdio.h>

int main() {
	int n1 = 1, n2 = 1;

	printf("%d\n", n1);
	printf("%d\n", n2);

	for (int i = 0; i < 10; i++) {
		int aux = (n1 * n2) + 1;
		printf("%d\n", aux);
		n1 = n2;
		n2 = aux;
	}
}