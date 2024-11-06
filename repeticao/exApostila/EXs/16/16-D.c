/*Sabendo-se que a unidade lógica e aritmética calcula a divisão por meio de subtrações sucessivas,
criar um algoritmo que calcule e imprima o resto da divisão de números inteiros lidos. Para isso,
basta subtrair o divisor ao dividendo, sucessivamente, até que o resultado seja menor do que o
divisor. O número de subtrações realizadas corresponde ao quociente inteiro e o valor restante da
subtração corresponde ao resto. Suponha que os números lidos sejam positivos e que o dividendo
seja maior do que o divisor.*/

#include <stdio.h>
int main(){
	int result, n1, n2, divisor, divi;
	printf(">> ");
	scanf("%d", &n1);
	printf(">> ");
	scanf("%d", &n2);
	if(n1>n2){
		divisor=n2;
		divi=n1;
	}
	else if(n2>n1){
		divisor=n1;
		divi=n2;
	}
	else{
		return 0;
	}
    	do{
		divi = divi - divisor;
	}while(divi>divisor);
	printf(">> %d ", divi);
	return 0;
}