/*Construa um programa em C que leia valores inteiros para a matriz A3 x 5. Gerar e
imprimir a matriz SOMACOLUNA, em que cada elemento é a soma dos elementos
de uma coluna da matriz A. Faça o trecho que gera a matriz separado da entrada
e da saída*/

#include <stdio.h>
#define lin 3
#define col 5
int main() {
	int mat[lin][col], l, c, i=0, count=0;
	int somaCol[col]= {0};
	printf("Entre com os valores:\n");
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			printf("[%.2d][%.2d] = ", l, c);
			scanf("%d", &mat[l][c]);
		}
	}
	//Matriz
	printf("\nMatriz A\n");
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			printf("%.2d ", mat[l][c]);
		}
		printf("\n");
	}
	for(c=0;c<col;c++){
		for(l=0;l<lin;l++){
			somaCol[c] += mat[l][c];
			count++;
			if(count==col && i!=col-1){
				i++;
				count =0;
				l=-1;
			}
		}
		count =0;
		i=0;
	}
	printf("\nSoma das colunas\n");
	for(l=0;l<col;l++){
		
			printf("%.2d ", somaCol[l]);
		
		
	}

	return 0;
}