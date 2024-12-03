/*Supondo que uma matriz apresente em cada linha o total de produtos vendidos ao
mês por uma loja que trabalha com cinco tipos diferentes de produtos, construir
um programa que leia esse total e, ao final, apresente o total de produtos vendidos
em cada mês e o total de vendas por ano por produto.*/

#include <stdio.h>
#define lin 12
#define col 5
int main() {
	int prod[lin][col], l, c, totalMes[lin]={0}, totalAno[col]={0}, i=0;
	printf("Entre com o total de vendas dos produtos:\n");
	for(l=0;l<lin; l++){
		printf("Mes %d:\n", l+1);
        for(c=0;c<col; c++){
        	printf("Produto %d: ", c+1);
        	scanf("%d",&prod[l][c]);
        }
    }
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			totalMes[i] += prod[l][c];
			printf("i = %d, %d\n", i, totalMes[i]);
		}
		i++;
	}

	i=0;
	for(c=0;c<col;c++){
		for(l=0;l<lin;l++){
			totalAno[i] += prod[l][c];
		}
		i++;
	}
 
	printf("\nTotal de vendas por mes\n");
	for(l=0;l<lin;l++){
			printf("Mes %.2d: %.2d\n", l+1, totalMes[l]);
		}
	printf("\nTotal de vendas por ano por produto\n");
	for(c=0;c<col;c++){
			printf("Produto %d: %.2d\n", c+1, totalAno[c]);
		}
	return 0;
}