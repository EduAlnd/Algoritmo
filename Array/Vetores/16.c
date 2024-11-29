/*Crie um programa em C para ler um conjunto de 100 números reais e informe:
• quantos números lidos são iguais a 30
• quantos são maior que a média
• quantos são iguais a média*/

#include <stdio.h>
#define max 5
int main(){
    float conj[max];
	int l, igual = 0, maior = 0, igualM = 0, media=0;
	printf("Entre com um valor para o conjunto:\n");
	for(l=0; l<max; l++) {
		scanf("%f", &conj[l]);
		media += conj[l];
	}
	media/= max;
	for(l=0; l<max; l++) {
		printf("%.2f ", conj[l]);
	}
	printf("%d ", media);
	for(l=0; l<max; l++) {
		if(conj[l]==30) {
			igual++;
		}
		if(conj[l] > media) {
			maior++;
		}
		if(conj[l] == media) {
			igualM++;
		}
	}
	printf("Numeros iguais a 30: %d\n", igual);
	printf("Numeros maiores que a media: %d\n", maior);
	printf("Numeros iguais media: %d\n", igualM);
    return 0;
}