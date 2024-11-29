/*Faça um programa que leia e armazene vários números, até digitar o número
0. Imprimir quantos números iguais ao último número foram lidos. O limite de
números é 100.*/

#include <stdio.h>
#define max 100
int main(){
    int vet[max], l=0, count=0, i, iguais=0;
	
	printf("Entre com um numero:\n");
	do{
		scanf("%d", &vet[l]);
		if(vet[l]==0){
			count++;
		}
		l++;
	}while((count==0) && (l < max));
	l-=2;
	for(i=0; i < l; i++){
        if(vet[i] == vet[l]){
        	iguais++;
		}
    }
    printf("Existem %d numeros iguais ao ultimo numero digitado.", iguais);
	
    return 0;
}