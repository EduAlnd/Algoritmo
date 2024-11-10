/*Desenvolva um programa em ANSI C que leia um número inteiro positivo n e calcule o fatorial de n 
utilizando as estruturas de repetição while e do-while.*/
#include <stdio.h>

int main(){
int n, aux, res=1;
printf(">> ");
scanf("%d", &n);
aux=n;
for(n;n>=1;n--){
 res=res * n;
}

printf(">> %d! = %d",aux,res);
return 0;
}
