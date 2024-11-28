/*Faça um programa que armazene as notas das provas 1 e 2 de 15 alunos. Calcule
e armazene a média arredondada. Armazene também a situação do aluno: 1-
Aprovado ou 2-Reprovado. Ao final o programa deve imprimir uma listagem
contendo as notas, a média e a situação de cada aluno em formato tabulado.
Utilize quantos vetores forem necessários para armazenar os dados.*/

#include <stdio.h>
#define max 15
int main() {
	int p1[max] = {4, 9, 3, 7, 1, 8, 5, 2, 10, 6, 3, 0, 9, 4, 7};
	int p2[max] = {2, 8, 5, 9, 1, 6, 4, 10, 7, 0, 3, 6, 8, 5, 1};
	int media[max];
	int situ[max];
	int l, aluno = 1;
	for(l=0; l<max;l++){
		media[l] = (p1[l] + p2[l])/2;
		if(media[l]>=6){
			situ[l] = 1;
		}
		else{
			situ[l] = 2;
		}
	}
	printf("Aluno | Prova 1 | Prova 2 | Media | Situacao\n");
	printf("      |         |         |       | \n");
	for(l=0; l<max;l++){
		printf("   %.2d |   %.2d    |    %.2d   |   %.2d  | ", aluno, p1[l], p2[l], media[l]);
		if(situ[l]== 1){
			printf("Aprovado\n");
		}
		else{
			printf("Reprovado\n");
		}
		aluno++;
	}
	
	return 0;
}