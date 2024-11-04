/*Sabendo-se que a unidade lógica e aritmética calcula o produto através de somas sucessivas, crie
um programa que calcule o produto de dois números inteiros lidos. Suponha que os números lidos
sejam positivos e que o multiplicando seja menor do que o multiplicador.*/

#include <stdio.h>
int main(){
int n1, n2, res;
printf("Produto de dois num, atraves de repetidas somas\n");
    printf(">> ");
    scanf("%d %d", &n1, &n2);
    for(n2; n2>=1; n2--){
        res += n1;
    }
    printf("O produto e' %d\n", res);

    return 0;
}