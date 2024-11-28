/*Faça um programa em C que leia dois conjuntos de números inteiros, tendo
cada um 10 elementos. Ao final o programa deve listar os elementos comuns aos
conjuntos*/

#include <stdio.h>
#define max 10
int main(){
    int conj1[max], conj2[max];
    int l, p, count=1;
    //Ler os valores do conjunto 1
    printf("Conjunto 1:\n");
    for(l=0; l<max;l++){
        printf("Entre com um valor: ");
        scanf("%d", &conj1[l]);
    }
    //Ler os valores do conjunto 2
    printf("Conjunto 2:\n");
    for(l=0; l<max;l++){
        printf("Entre com um valor: ");
        scanf("%d", &conj2[l]);
    }

    printf("Elemento comuns entre os conjuntos:\n");
    //Compara e mostra os elementos
    for(l=0; l<max;l++){
        for(p=0; p<max;p++){
            if(conj1[l] == conj2[p]){
               printf("%d.\n Conjunto 1: %d\n Conjunto 2: %d\n", count, conj1[l], conj2[p]);
               count++;
            }
        }
    }

    return 0;
}