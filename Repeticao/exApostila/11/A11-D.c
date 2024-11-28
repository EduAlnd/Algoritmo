/*Construa um programa em C que leia vários números e informe quantos números entre 100 e
200 foram digitados. Quando o valor 0 (zero) for lido, o algoritmo deverá cessar sua execução.*/

#include <stdio.h>

int main(){
	int num, con=0;
	do{
		printf(">> ");
		scanf("%d", &num);
		if(num>=100 && num<=200){
		con++;
		}
		
	}while(num!=0);
	printf(">> %d", con);
	
	return 0;
}