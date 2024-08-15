#include<stdio.h>

void main() {
	float i, nota, soma = 0, media;
	printf_s("Calculador de medias\n");
	for ( i = 0; i < 5; i++){
		printf_s("digite a sua nota: ");
		scanf_s("%f", &nota);
		soma = soma + nota;
	}
	media = soma / 5;
	printf_s("Sua media foi de: %f", media);

}