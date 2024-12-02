/*Faça um programa em C que permita entrar com dados para um vetor VET do tipo
inteiro com 20 posições, em que podem existir vários elementos repetidos. Gere
um vetor VET2 ordenado a partir do vetor VET e que terá apenas os elementos
não repetidos*/

#include <stdio.h>
#define max 20
int main(){
    int vet[max], vet2[max]={0}, l=0, p=0, i=0, repet=1;
    printf("Entre com os valores: ");
    for(l=0; l<max;l++){
        scanf("%d", &vet[l]);
    }
    for(l=0; l<max;l++){
        printf("%d ", vet[l]);
    }
    printf("\nVet2\n");
    //Valores vet2
    for(p=0;p<max;p++){
        repet=0;
        for(l=0;l<max;l++){
            if(vet[p] == vet[l] && p!=l){
                repet=1;
            }
        }
        if(!repet){
            vet2[i]=vet[p];
            i++; // usado para nos valores do vet2 ficarem com os zeros por ultimo
        }
        
        
    }
    for(l=0; l<max;l++){
        printf("%d ", vet2[l]);
    }
    return 0;
}