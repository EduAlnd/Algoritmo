/*Faça um programa que permita entrar com valores em uma matriz A de tamanho
3 X 4. Gerar e imprimir uma matriz B que é o triplo da matriz A.*/

#include <stdio.h>
#define lin 3
#define col 4
int main() {
	int matA[lin][col], matB[lin][col], l, c;
	printf("Entre com os valores:\n");
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			printf("[%.2d][%.2d] = ", l, c);
			scanf("%d", &matA[l][c]);
		}
	}
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			matB[l][c] = matA[l][c]*3;
		}
	}
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			printf("%.2d ", matB[l][c]);
		}
		printf("\n");
	}
	return 0;
}