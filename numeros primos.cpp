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
		return 1;
	}
	else
	{
		return 0;
	}
}


int main() {
	int i;
	for (i = 0; i <= 50; i++){
		if (primo(i) == 1) {
			printf(" %d\n  ", i);
		}

	}

}