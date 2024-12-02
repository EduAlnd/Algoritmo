/*Suponha dois vetores de 30 elementos cada, contendo: código e telefone. Faça
um programa que permita buscar pelo código e imprimir o telefone*/

#include <stdio.h>
#define max 30
int main(){
    int cod[max], tel[max], l, num = 991325379, busca;
    for(l=0; l<max; l++){
        cod[l] = l+1;
        tel[l] = num;
        num+= 200;
    }
    printf("Qual o codigo?\n");
    scanf("%d", &busca);
    for(l=0; l< max; l++){
        if(cod[l] == busca){
            printf("Aqui esta o numero:\n(12) %d", tel[l]);
        }
    }
    return 0;
}