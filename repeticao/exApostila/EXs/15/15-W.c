/*Faça um programa em C que permita entrar com a idade de várias pessoas e imprima:
• total de pessoas com menos de 21 anos
• total de pessoas com mais de 50 anos*/

#include <stdio.h>
int main(){
	int idade = -1, m21= 0,M50 = 0;
	while(idade!=0){
		printf(">> ");
		scanf("%d", &idade);
		if(idade>=50){
			M50++;
		}
		else if(idade<=21 && idade>0){
			m21++;
		}
	}
	printf(">> %d\n", m21);
	printf(">> %d", M50);
	return 0;
}