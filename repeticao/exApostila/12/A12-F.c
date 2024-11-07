/*Dado um país A, com 5 milhões de habitantes e uma taxa de natalidadede 3% ao ano, e um país B
com 7milhões de habitantes e uma taxa de natalidade de 2% ao ano, fazer um programa que calcule
e imprima o tempo necessário para que a população do país A ultrapasse a população do país B.*/

#include <stdio.h>
int main(){
	int ano=0, popA, popB;
	popA=500;
	popB=700;
	for(ano=0;popA<popB;ano++){
		popA= popA*1.03;
		popB= popB*1.02;
	}
	printf(">> %d", ano);
	return 0;
}