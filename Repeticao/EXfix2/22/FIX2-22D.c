/*Desenvolva um programa que leia n pares de números, onde o primeiro número é um inteiro e o 
segundo é um número de ponto flutuante. Usando uma estrutura de repetição do-while, multiplique os 
pares entre si, realizando o casting necessário para que o resultado seja um número de ponto flutuante 
(float). Exiba cada produto com precisão de três casas decimais. */
#include <stdio.h>

int main(){
int n;
float a, res=0;
do{
printf(">> ");
scanf("%d", &n);
printf(">> ");
scanf("%f", &a);
res+=(float)n*a;
}while(n!=0);
printf("%.3f", res);
return 0;
}
