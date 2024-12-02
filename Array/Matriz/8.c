/*Faça um programa que leia uma matriz 4 X 5 de inteiros, calcule e imprima a
soma de todos os seus elementos*/

#include <stdio.h>
#define lin 3
#define col 2
int main() {
	int mat[lin][col], l, c, soma;
	printf("Entre com os valores:\n");
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			printf("[%.2d][%.2d] = ", l, c);
			scanf("%d", &mat[l][c]);
		}
	}
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			soma+= mat[l][c];
		}
	}
	printf("A soma dos digitos da matriz é igual a %d", soma);
	return 0;
}