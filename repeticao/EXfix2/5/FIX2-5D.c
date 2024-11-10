/*Escreva um programa que leia um número inteiro positivo n e exiba a sequência dos n primeiros 
números  da  sequência  de  Fibonacci  (https://brasilescola.uol.com.br/matematica/sequencia-
fibonacci.htm). Utilize as estruturas de repetição for, while e do-while para calcular a sequência e exiba 
cada termo em uma linha.*/
#include <stdio.h>

int main(){
int f=1, aux=0, n, res=1;
printf(">> ");
scanf("%d", &n);
do{
    printf("%d\n", res);
    res=f+aux;
    aux=f;
    f=res;
    n--;
}while(n>=1);
return 0;
}
