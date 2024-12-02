/*Crie um programa que armazene dados inteiros em uma matriz de ordem 5 e
imprima: Todos os elementos que se encontram em posições cuja linha mais
coluna formam um número par.*/

#include <stdio.h>
#define lin 5
#define col 5
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
			if((l+c)%2==0){
			printf("%.2d ", mat[l][c]*2);
			}
			else{
				printf("   ");
			}
		}
		printf("\n");
	}
	return 0;
}