/*Crie um programa em ANSI C que leia números inteiros fornecidos pelo usuário e exiba o maior número 
digitado. A entrada de números termina quando o usuário digitar zero. Use uma estrutura de repetição do-
while*/
#include <stdio.h>

int main(){
int n1, maior =0;
do{
    printf(">> ");
    scanf("%d", &n1);
    if (n1>=maior){
        maior=n1;
    }

}while(n1!=0);

printf(">> %d", maior);
return 0;
}
