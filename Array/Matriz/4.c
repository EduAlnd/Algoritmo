/*Construa um programa que armazene dados em uma matriz de ordem 4 e im-
prima: Todos os elementos com números ímpares.*/

#include <stdio.h>
#define lin 4
#define col 4
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
			if(mat[l][c]%2==1){
			printf("%.2d ", mat[l][c]);
			}
			else{
				printf("   ");
			}
		}
		printf("\n");
	}
	return 0;
}
