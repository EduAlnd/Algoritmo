/*Faça um programa que armazene 8 números em um vetor e imprima todos os
números. Ao final, imprima o total de números múltiplos de seis.*/

#include <stdio.h>
#define max 8
int main() {
	int vet[max] = {24, 87, 6, 14, 63, 18, 9, 50};
	int l, multi=0;
	for(l=0; l<max; l++){
		if(vet[l]%6 == 0){ multi++; }
		printf("%d\n", vet[l]);	
	}
	printf("Total de numeros multiplos de 6: %d\n", multi);
	return 0;
}
