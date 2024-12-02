/*Construa um programa para ler valores para duas matrizes do tipo inteiro de
ordem 3. Gerar e imprimir a matriz diferença.*/

#include <stdio.h>
#define lin 3
#define col 3
int main() {
	int matA[lin][col], matB[lin][col], sub[lin][col], l, c;
	printf("Entre com os valores da Matriz A:\n");
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			printf("[%.2d][%.2d] = ", l, c);
			scanf("%d", &matA[l][c]);
		}
	}
	
	printf("Entre com os valores da Matriz B:\n");
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			printf("[%.2d][%.2d] = ", l, c);
			scanf("%d", &matB[l][c]);
		}
	}
	//subtração
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			sub[l][c] = matA[l][c] - matB[l][c] ;;
		}
		
	}

	//imprimir
	printf("\nMatriz A\n");
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			printf("%.2d ", matA[l][c]);
		}
		printf("\n");
	}
	printf("\nMatriz B\n");
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			printf("%.2d ", matB[l][c]);
		}
		printf("\n");
	}
	printf("\nsub\n");
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			printf("%.2d ", sub[l][c]);
		}
		printf("\n");
	}
	return 0;
}