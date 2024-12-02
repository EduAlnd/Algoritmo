/*Faça um programa que leia os elementos de uma matriz do tipo inteiro com
tamanho 3 X 3 e imprima os elementos multiplicando por 2.*/

#include <stdio.h>
#define lin 3
#define col 3
int main() {
	int mat[lin][col], l, c;
	printf("Entre com os valores:\n");
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			printf("[%.2d][%.2d] = ", l, c);
			scanf("%d", &mat[l][c]);
		}
	}
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			printf("%.2d ", mat[l][c]*2);
		}
		printf("\n");
	}
	return 0;
}