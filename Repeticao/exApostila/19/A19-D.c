/*Em uma Universidade, os alunos das turmas de informática fizeram uma prova de algoritmos.
Cada turma possui um número de alunos. Criar um programa que imprima:
• quantidade de alunos aprovados;
• média de cada turma;
• percentual de reprovados.
Obs.: Considere aprovado com nota>=7.0*/

#include <stdio.h>
int main(){
	int alunos, apro=0, nota;
	float media, por, rep, aux;
	printf("Quantidade de alunos: ");
	scanf("%d", &alunos);
	aux=alunos;
	do{
		do{
		printf("Nota: ");
		scanf("%d", &nota);
		}while(nota<0 || nota>10);
		
		if(nota>=7){
			apro++;
		}
		else{
			rep++;
		}
		media+=nota;
		alunos--;
	}while(alunos!=0);
	media = media/aux;
	por = rep/aux;
	printf("Media: %.2f", media);
	printf("\nAprovados: %d", apro);
	printf("\nReprovados(%%): %.2f", por);
	
	return 0;
}