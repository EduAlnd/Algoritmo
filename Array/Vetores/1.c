/*Faça um programa em C que armazene 15 números inteiros em um vetor e depois
permita que o usuário digite um número inteiro para ser buscado no vetor, se
for encontrado o programa deve imprimir a posição desse número no vetor, caso
contrário, deve imprimir a mensagem: "Nao encontrado!".*/

#include <stdio.h>
#define max 15
int main() {
	int vet[max] = {38, 92, 55, 14, 71, 8, 29, 64, 3, 47, 86, 59, 76, 22, 91};
	int valor, l, flag = 1;
	printf("Qual o valor que deseja encontrar: ");
	scanf("%d", &valor);
	
	for(l=0; l<max; l++){
		if(valor == vet[l]){
			printf("vet[%d]\n", l);
			flag = 0;
		}
	}
	if (flag){
		printf("Nao encontrado");
	}

	return 0;
}