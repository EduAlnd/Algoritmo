/*Faça um programa que leia um conjunto de 30 valores inteiros, armazene-os em
um vetor e os imprima ao contrário da ordem de leitura.*/

#include <stdio.h>
#define max 30
int main(){
    int vet[max], l, p = max-1, temp=0;
    printf("Entre com os valores: ");
    for(l = 0;l < max; l++){
        scanf("%d", &vet[l]);
    }
    //trocar
    for(l=0; l <= p; l++){
        temp = vet[l];
        vet[l] = vet[p];
        vet[p] = temp;
        p--;
        
    }
    //Imprimir
    printf("Vetor espelhado: ");
    for(l = 0;l < max; l++){
        printf("%d ", vet[l]);
    }
    return 0;
}