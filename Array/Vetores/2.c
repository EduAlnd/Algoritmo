/*Faça um programa que armazene 10 letras em um vetor e imprima uma listagem
numerada.*/

#include <stdio.h>
#define max 10
int main() {
	char vet[max] = {'A', 'b', 'K', 'd', 'L', 'e', 'Q', 't', 'P', 'x'};
	int l;
	for(l=0; l<max; l++){
		printf("%.2d. %c\n", l+1, vet[l]);
	}

	return 0;
}