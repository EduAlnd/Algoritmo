/*Entrar com valores para uma matriz C 2 x 3. Gerar e imprimir a C t.
A matriz transposta é gerada trocando linha por coluna. Veja o exemplo a seguir:
C = (1 2 3)  C1= (1 2)
    (4 5 6)      (4 5)
	             (5 6) 
*/

#include <stdio.h>
#define lin 2
#define col 3
int main() {
	int matC[lin][col], cT[col][lin], l, c;
	printf("Entre com os valores:\n");
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			printf("[%.2d][%.2d] = ", l, c);
			scanf("%d", &matC[l][c]);
		}
	}
	printf("\nMatriz C\n");
	for(l=0;l<lin;l++){
		printf("\n");
		for(c=0;c<col;c++){
			printf("%.2d ", matC[l][c]);
		}
	}
	for(c=0;c<col;c++){
		for(l=0;l<lin;l++){
			cT[c][l]= matC[l][c];
		}
	}
		printf("\nMatriz C trasposta");
	for(c=0;c<col;c++){
		printf("\n");
		for(l=0;l<lin;l++){
			printf("%.2d ", cT[c][l]);
		}
	}
	return 0;
}