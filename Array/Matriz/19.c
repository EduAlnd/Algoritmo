/*Construa um programa que carregue uma matriz 12 X 4 com os valores das vendas
de uma loja, em cada linha represente um mês do ano, e cada coluna, uma semana
do mês. Calcule e imprima:
• total vendido em cada mês do ano;
• total vendido em cada semana durante todo o ano;
• total vendido no ano.*/

#include <stdio.h>
#define lin 12
#define col 4
int main() {
	int semana[lin][col], l, c, totalMes[lin]={0}, totalSemana[col]={0}, i=0, totalAno=0;
	printf("Entre com o total de vendas dos semanautos:\n");
	for(l=0;l<lin; l++){
		printf("Mes %d:\n", l+1);
        for(c=0;c<col; c++){
        	printf("Semana %d: ", c+1);
        	scanf("%d",&semana[l][c]);
        }
    }
	//Vedidos no mes
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			totalMes[i] += semana[l][c];
		}
		i++;
	}

	i=0;
	//Vendidos por semana
	for(c=0;c<col;c++){
		for(l=0;l<lin;l++){
			totalSemana[i] += semana[l][c];
		}
		i++;
	}

	//vendido por ano
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			totalAno += semana[l][c];
		}
	}

	printf("\nTotal de vendas por mes\n");
	for(l=0;l<lin;l++){
			printf("Mes %.2d: %.2d\n", l+1, totalMes[l]);
		}
	printf("\nTotal de vendas por semana por ano\n");
	for(c=0;c<col;c++){
			printf("Semana %.2d: %.2d\n", c+1, totalSemana[c]);
		}
	printf("\nTotal de vendas por ano: ");
	printf("%.2d", totalAno);
	return 0;
}