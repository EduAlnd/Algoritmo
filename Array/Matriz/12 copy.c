/*Uma floricultura conhecedora de sua clientela gostaria de fazer um programa que
pudesse controlar sempre um estoque mínimo de determinadas plantas, pois
todo dia, pela manhã, o dono faz novas aquisições. Criar um algoritmo que deixe
cadastrar 50 plantas, nome, estoque mínimo, estoque atual. Imprimir ao final do
programa uma lista das plantas que devem ser adquiridas.
*/

#include <stdio.h>

#define lin 5
#define col 2
int main() {
	int estoque[lin][col], l, c, i=0; //estoque = {minimo, atual}
	char nomes[lin];
	printf("Entre com os dados:\n");
	for(l=0;l<lin;l++){
	printf("Nome da planta %d: ", l+1);
	scanf("%s", &nomes[l]);
		for(c=0;c<col;c++){
			if(c==0){
			printf("Estoque minimo: ");
			scanf("%d", &estoque[l][c]);

			}
			else{
			printf("Estoque atual: ");
			scanf("%d", &estoque[l][c]);
			}
		}
	}

	printf("Plantas que devem ser adquiridas:\n");
	
	for(l=0;l<lin;l++){
			if(estoque[l][0]>estoque[l][1]){
				printf("%s\n", nomes[l]);
			}
	}

	return 0;
}