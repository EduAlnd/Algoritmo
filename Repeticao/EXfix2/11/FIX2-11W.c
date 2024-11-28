/*Escreva um programa que leia um número inteiro positivo n e exiba a soma dos dígitos de n. Utilize 
uma estrutura de repetição while para realizar o cálculo. */
#include <stdio.h>

int main(){
int n, res=0;
printf(">> ");
scanf("%d", &n);
while(n!=0){
res+=n%10;
n=n/10;
}
printf("%d", res);
return 0;
}
