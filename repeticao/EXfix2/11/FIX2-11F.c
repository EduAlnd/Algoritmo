/*Escreva um programa que leia um número inteiro positivo n e exiba a soma dos dígitos de n. Utilize 
uma estrutura de repetição while para realizar o cálculo. */
#include <stdio.h>

int main(){
int n, res=0;
printf(">> ");
scanf("%d", &n);
for(n;n!=0;n){
res+=n%10;
n=n/10;
}
printf("%d", res);
return 0;
}
