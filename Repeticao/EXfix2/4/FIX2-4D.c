/*Desenvolva um programa em ANSI C que leia um número inteiro positivo n e calcule o fatorial de n 
utilizando as estruturas de repetição while e do-while.*/
#include <stdio.h>

int main(){
int n, aux,res=1;
printf(">> ");
scanf("%d", &n);
aux=n;
do{
    res = res * n;
    n--;
}while(n>=1);
printf(">> %d! = %d",aux,res);
return 0;
}
// n! = n* (n-1)