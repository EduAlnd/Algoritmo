/*Faça um programa que leia um vetor vet de 10 elementos e obtenha um vetor w
cujos componentes são os fatoriais dos respectivos componentes de vet*/

#include <stdio.h>
#define max 10
int fatorial(int num){
    int res=1;
    for(num; num>0; num--){
        res *= num;
    }
    return res;
}
int main(){
    int vet[max],w[max];
    int l;

    printf("Digite o valor do vetor:\n");
    for(l=0; l<max; l++){
        scanf("%d", &vet[l]);
    }
     for(l=0; l<max; l++){
        w[l] = fatorial(vet[l]);
        printf("O fatorial de vet[%d], com valor %d, e igual a  %d\n",l, vet[l], w[l]);
    }

    return 0;
}