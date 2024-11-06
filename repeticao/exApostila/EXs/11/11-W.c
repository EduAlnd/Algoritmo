/*Construa um programa em C que leia vários números e informe quantos números entre 100 e
200 foram digitados. Quando o valor 0 (zero) for lido, o algoritmo deverá cessar sua execução.*/

#include <stdio.h>
int main(){
	int num, con=0;
	while(num!=0){
		printf(">> ");
		scanf("%d", &num);
		if(num>=100 && num<=200){
		con++;
		}
		
	}
	printf(">> %d", con);
	
	return 0;
}