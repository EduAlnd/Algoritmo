/* Desenvolva um programa que leia um número inteiro positivo n e exiba uma tabela com a potência de 
2 para cada expoente de 1 até n (ou seja, 2^1, 2^2, ... 2^n). Utilize uma estrutura de repetição for para 
realizar os cálculos.*/
#include <stdio.h>

int main(){
int n, res=2, con=1;
printf(">> ");
scanf("%d", &n);
while(con<=n){
printf("2^%d = %d\n",con, res);
res= res*2;
con++;
}
return 0;
}
