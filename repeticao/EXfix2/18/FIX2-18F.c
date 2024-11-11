/*Escreva um programa que leia um número inteiro positivo n e exiba a sequência de n números de uma 
série que começa em 1 e dobra o valor a cada passo (1, 2, 4, 8, ...). Utilize uma estrutura de repetição 
while.*/
#include <stdio.h>

int main(){
int n, aux=1,con;
printf(">> ");
scanf("%d", &n);
for(con=1;con<=n;con++){
    printf("%d\n", aux);
    aux=aux*2;
}
return 0;
}
