/*Faça um programa em C que leia os elementos de uma matriz do tipo inteiro com
tamanho 10 X 10. Ao final, imprima todos os elementos.*/

#include <stdio.h>
#define lin 2
#define col 10
int main() {
	int mat[lin][col], l, c;
	printf("Entre com os valores da matriz:\n");
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			printf("[%.2d][%.2d] = ", l, c);
			scanf("%d", &mat[l][c]);
		}
	}
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			printf("%.2d ",mat[l][c]);
			
		}
		printf("\n");
	}
	return 0;
}