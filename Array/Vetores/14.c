/*Faça um programa que armazene 50 números inteiros em um vetor. O programa
deve gerar e imprimir um segundo vetor em que cada elemento é o quadrado do
elemento do primeiro vetor.*/

#include <stdio.h>
#define max 5
int main(){
    int vet[max], quad[max];
    int l;
    printf("Entre com o valor do vetor:\n");
    for(l=0; l<max; l++){
        scanf("%d", &vet[l]);
        quad[l] = vet[l] * vet[l];
    }
    //impime o vetor vet
    for(l=0; l<max; l++){
        if(l==0){
            printf("Vet = %d, ", vet[l]);
            }
        else if(l == max-1){
            printf("%d.\n", vet[l]);
        }
        else{
            printf("%d, ", vet[l]);
        }
    }
    
    //Imprime o vetor quad
    for(l=0; l<max; l++){
        if(l==0){
            printf("Quad = %d, ", quad[l]);
            }
        else if(l == max-1){
            printf("%d.", quad[l]);
        }
        else{
            printf("%d, ", quad[l]);
        }
    }
    return 0;
}