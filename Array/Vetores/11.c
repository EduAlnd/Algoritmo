/*Construa um programa que leia dados para um vetor de 100 elementos inteiros.
Imprimir o maior e o menor, sem ordenar, o percentual de números pares e a
média dos elementos do vetor.*/

#include <stdio.h>
#define max 100
int main(){
    int data[max];
    int l, i=0, p=0; // i para marcar qual posição está o maior numero, p para o menor
    int maior = 0, menor, percent = 0;
    float media= 0;
    printf("Entre com o valor:\n");
    for(l=0; l<max; l++){
        scanf("%d", &data[l]);
    }
    //Inicializar o menor com um valor do vetor
    menor=data[0];
    //Conseguindo os valores: maior, menor, percent, media
    for(l=0; l<max; l++){
        if(data[l]>= maior){
            maior = data[l];
            i = l;
        }
        else if(data[l]<= menor){
            menor=data[l];
            p = l;
        }
        if(data[l]%2== 0){
            percent++;
        }
        media+= data[l];
    }
    percent = (percent * 100) / max;
    media/=max;
    printf("O maior numero e o data[%d] = %d\n", i, maior);
    printf("O menor numero e o data[%d] = %d\n", p, menor);
    printf("O percentual de numeros pares e %d%% \n", percent);
    printf("A media e %.2f\n", media);
    return 0;
}

