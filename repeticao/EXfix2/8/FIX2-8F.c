/*Desenvolva um programa que leia um número inteiro positivo n e exiba a tabuada de multiplicação de n 
(de 1 a 10) usando uma estrutura de repetição while e do-while. Exiba cada linha da tabuada no formato: n 
x i = res.*/
#include <stdio.h>

int main(){
int n, i, res;
printf(">> ");
scanf("%d", &n);
for(i=1;i<=10;i++){
    res=n*i;
    printf("%d x %d = %d\n",n, i, res);
}
return 0;
}
