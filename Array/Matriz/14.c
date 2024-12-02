/*Crie um programa que leia e armazene os elementos de uma matriz inteira com
tamanho 5 X 5 e imprimi-la. Troque, a seguir:
• a segunda linha pela quinta;
• a terceira coluna pela quinta;
• a diagonal principal pela diagonal secundária.*/

#include <stdio.h>
#define lin 5
#define col 5
int main() {
	int mat[lin][col], l, c=0, temp=0, i=col-1;
	printf("Entre com os valores:\n");
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			printf("[%.2d][%.2d] = ", l, c);
			scanf("%d", &mat[l][c]);
		}
	}
	printf("\nMatriz Original\n");
	for(l=0;l<lin;l++){
		printf("\n");
		for(c=0;c<col;c++){
			printf("%.2d ", mat[l][c]);
		}
	}
	//Troca a segunda com a terceira
	for(c=0;c<col;c++){
		temp = mat[1][c];
		mat[1][c] = mat[2][c];
		mat[2][c] = temp;
		}
	
	//terceira pela quinta	
	for(l=0;l<lin;l++){
		temp = mat[l][2];
		mat[l][2] = mat[l][4];
		mat[l][4] = temp;
		}

	//diagonal principal pela secundaria
	c=0;
	for(l=0;l<lin;l++){
		temp = mat[l][i];
		mat[l][i] = mat[l][c];
		mat[l][c] = temp;
		i--;
		c++;
	}
	printf("\nMatriz apos trocas\n");
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			printf("%.2d ", mat[l][c]);
		}
		printf("\n");
	}
	
	return 0;
}