/*Elabore um programa que leia um número inteiro positivo n e exiba todos os divisores de n, cada um 
em uma linha. Utilize uma estrutura de repetição for para encontrar e exibir os divisores.*/
#include <stdio.h>

int main(){
int n , i;
printf(">> ");
scanf("%d", &n);
for(i=1;i<=n;i++){
    if(n%i==0){printf(">> %d\n", i);}
}
return 0;
}
