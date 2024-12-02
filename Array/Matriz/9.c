/*Construa um programa em C que leia valores inteiros para a matriz A 3 x 5. Gerar e
imprimir a matriz SOMALINHA, em que cada elemento é a soma dos elementos
de uma linha da matriz A. Faça o trecho que gera a matriz separado da entrada e
da saída*/

#include <stdio.h>
#define lin 2
#define col 2
int main() {
	int mat[lin][col], l, c, i=0, count=0;
	int somaLinha[lin][col]= {0};
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
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			somaLinha[l][i] += mat[l][c];
			count++;
			if(count==col && i!=col-1){
				i++;
				count =0;
				c=-1;
			}
		}
		count =0;
		i=0;
	}
	printf("\nSoma das linhas\n");
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			printf("%.2d ", somaLinha[l][c]);
		}
		printf("\n");
	}

	

	return 0;
}