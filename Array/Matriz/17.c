/*A Viação José Maria Rodrigues tem na Rodoviária de Rio Novo uma tabela con-
tendo os horários de partidas dos ônibus para Juiz de Fora nos sete dias da
semana. Faça um programa que possa armazenar esses horários e os horários do
dia quando forem solicitados pelo funcionário, sabendo-se que, no máximo, são
dez horários. Ao final, o programa deve imprimir a lista de horários para todos os
dias.*/

#include <stdio.h>
#define lin 3
#define col 3
int main() {
	int horario[lin][col], l=0,c=0, i=0, hora=0, min=0;
	char dia[7] ={ 'S','T', 'Q', 'Q', 'S', 'S', 'D'};
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			horario[l][c]=0;
		}

	}
	l=0;
	do{
	printf("Quantas partidas terao na %c: ", dia[l]);
	scanf("%d", &i);
	if(i>=1 && i<=col){
			for(c=0;c<i;c++){
				printf("Qual o horario %dº: ", c+1);
				scanf("%d", &horario[l][c]); 
			}
				l++;
	}
	else if(i==0){
		l++;
	}
	else{
		printf("Numero invalido. O maximo e 10 partidas.\n");
	}
	}while(l<lin);
	printf("Tabela de horarios:\n");
	for(l=0;l<lin;l++){
			printf("%c: ", dia[l]);
		for(c=0;c<col;c++){
			hora = horario[l][c] / 100;
			min = horario[l][c] % 100;
			printf("%d:%.2d ", hora, min);
		}
		printf("\n");
	}
	return 0;
}