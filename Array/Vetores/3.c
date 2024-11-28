/*Construa uma programa em C que armazene 15 números em um vetor e imprima
uma listagem numerada contendo o número e uma das mensagens: par ou ímpar.*/

#include <stdio.h>
#define max 15
int main() {
	int vet[max] = {42, 17, 89, 5, 66, 24, 78, 11, 30, 53, 91, 8, 61, 34, 77};
	int l;
	
	for(l=0; l<max; l++){
		printf("%.2d- %d ",l+1, vet[l]);
		if(vet[l]%2 == 0){
			printf("PAR\n");
		}
		else{
			printf("IMPAR\n");
		}
	}
	return 0;
}