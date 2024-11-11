/* Escreva um programa que converta uma série de temperaturas de Fahrenheit para Celsius, repetindo o 
cálculo para cada valor inserido pelo usuário até que seja digitado o valor zero. Utilize uma estrutura de 
repetição for e converta o valor de entrada de int para float antes de realizar o cálculo, aplicando a fórmula 
de conversão: C = 5/9 x (F - 32) */
#include <stdio.h>

int main(){
int f=1;
float c=1;
do{
printf(">> ");
scanf("%d", &f);
c = ((float)f-32)* ((float)5/9);
printf("c = %.2f\n", c);
}while(f!=0);
return 0;
}
