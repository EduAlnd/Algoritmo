/*A gerente do cabeleireiro Sempre Bela tem uma tabela em que registra as quan-
tidades de serviços executados nos "pes", nas "mãos"e o serviço de podologia
das cinco manicures. Sabendo-se que cada uma ganha 50% do que faturou ao
mês, criar um programa que possa calcular e imprimir quanto cada uma vai
receber, uma vez que não têm carteiras assinadas, os valores, respectivamente,
são: R$10,00, R$15,00 e R$30,00*/

#include <stdio.h>
#define lin 3
#define col 5
int main() {
	int servi[lin][col], l, c, manicure, nav;
	float valor[col];
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			servi[l][c]=0;
			valor[c]=0;
		}
	}
	do{
		printf("Quem fez o servico:\n");
		printf("Manicure 1 [1]\nManicure 2 [2]\nManicure 3 [3]\n");
		printf("Manicure 4 [4]\nManicure 5 [5]\n>>");
		scanf("%d", &manicure);
		if(manicure>0 && manicure<=5){
			printf("Qual serviço:\n");
			printf("Maos [1]\nPes [2]\nPodologia [3]\n>>");
			scanf("%d", &nav);
			if(nav>=1 && nav<=3){
				servi[nav-1][manicure-1]++;
			}
			else{
				printf("Numero invalido\n");
			}

		}
		else{
			printf("Numero invalido\n");
		}
	}while(manicure!=0);
	
	for(c=0;c<col;c++){
		for(l=0;l<lin;l++){
			//mao
			if(l==0){
			valor[c] += servi[l][c]*15;
			}
			//pe
			else if(l==1){
			valor[c] += servi[l][c]*10;
			}
			//poso
			else if(l==2){
			valor[c] += servi[l][c]*30;
			}
		}
		valor[c] /=2;
	}


for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			printf("%.2d ", servi[l][c]);
		}
		printf("\n");
	}

	printf("\n\n");
	printf("O total de cada manicure é:\n");
		for(c=0;c<col;c++){
		printf("Manicure %d: R$ %.2f\n", c+1, valor[c]);
		}
	
	

	return 0;
}
