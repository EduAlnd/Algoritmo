/*Uma floricultura conhecedora de sua clientela gostaria de fazer um programa que
pudesse controlar sempre um estoque mínimo de determinadas plantas, pois
todo dia, pela manhã, o dono faz novas aquisições. Criar um algoritmo que deixe
cadastrar 50 plantas, nome, estoque mínimo, estoque atual. Imprimir ao final do
programa uma lista das plantas que devem ser adquiridas.
*/

#include <stdio.h>

#define lin 50
#define col 2
int main() {
	int estoque[lin][col], l, c, i=0; //estoque = {minimo, atual}
	char nomes[lin][50];
	printf("Entre com os dados:\n");
	for(l=0;l<lin;l++){
			printf("Nome da planta %d: ", l+1);
		i=0;
		do{
			scanf("%c", &nomes[l][i]);
			if(nomes[l][i]!= 10){
				i++;
			}
		}while(nomes[l][i]!= 10 && i <=49);
		nomes[l][i] = '\0';
		i=0;
		printf("Estoque minimo: ");
		scanf("%d", &estoque[l][0]);
		printf("Estoque atual: ");
		scanf("%d", &estoque[l][1]);
		getchar();
		
	}
	printf("Plantas que devem ser adquiridas:\n");
	for(l=0;l<lin;l++){
		if(estoque[l][0]>estoque[l][1]){
			do{
			printf("%c", nomes[l][i]);
			if(nomes[l][i]!= '\0'){
				i++;
			}
			}while(nomes[l][i]!= '\0');
		}
		i=0;
		printf("\n");
	}

	return 0;
}