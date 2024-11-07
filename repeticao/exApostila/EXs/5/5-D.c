/*Sabendo-se que a unidade lógica e aritmética calcula o produto através de somas sucessivas, crie
um programa que calcule o produto de dois números inteiros lidos. Suponha que os números lidos
sejam positivos e que o multiplicando seja menor do que o multiplicador.*/
#include <stdio.h>
int main(){
int n1, n2, res, menor, maior;
printf("Produto de dois num, atraves de repetidas somas\n");
    printf(">> ");
    scanf("%d %d", &n1, &n2);
     if(n1>=n2){
        maior=n1;
        menor= n2;
    }
    else{
        maior=n2;
        menor=n1;
    }
    do{
        res += n1;
        menor--;

    }while(menor>=1);
    printf("O produto e' %d\n", res);
    return 0;
}