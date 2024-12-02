/*Crie um programa que leia valores inteiros em uma matriz A[2][2] e em uma
matriz B[2][2]. Gerar e imprimir a matriz SOMA[2][2].*/

#include <stdio.h>
#define lin 2
#define col 2
int main() {
	int matA[lin][col], matB[lin][col], soma[lin][col], l, c;
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
	//SOma
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			soma[l][c] = matB[l][c] + matA[l][c] ;;
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
	printf("\nSoma\n");
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			printf("%.2d ", soma[l][c]);
		}
		printf("\n");
	}
	return 0;
}