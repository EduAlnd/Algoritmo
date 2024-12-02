/*Faça um programa em C que possa armazenar as alturas de dez atletas de cinco
delegações que participarão dos jogos de verão. Imprimir a maior altura de cada
delegação.*/

#include <stdio.h>
#define lin 3
#define col 3
int main() {
	float alt[lin][col], maior=0.0, del=0; // primeiro numero da linha é o numero da delegação
	int l=0, c=0, i=0, valid=0, posi; // posi vai guardar a delegação da maior altura
	do{
		do{
			valid=0;
			printf("Entre com o numero da delegaçao: ");
			scanf("%f", &alt[l][c]);
			i=l;
			for(i=0;i<lin;i++){
				if(alt[l][0] == alt[i][0] && l!=i){
					valid=1;
					printf("Ja existe um delegação com esse numero.\n");
				}
			}
		}while(valid!=0);

	printf("Entre com a altura:\n");
	c++;
		for(c;c<col;c++){
			printf("Atleta %d: ", c);
			scanf("%f", &alt[l][c]);
		}
	
	l++;
	c=0;
	}while(l<lin);
	for(l=0;l<lin;l++){
		printf("\n");
		for(c=1;c<col;c++){
			if( alt[l][c]>=maior){
				maior = alt[l][c];
				del=alt[l][0];
				posi = c;
			}
		}
	}
	printf("\nA maior altura e %.2f e o atleta %d esta na delagacao %.0f", maior, posi, del);
	return 0;
}