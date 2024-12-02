/*Faça um programa que leia a matrícula e a média de 100 alunos. Ordene da maior
para a menor nota e imprima uma relação contendo todas as matrículas e médias.*/

#include <stdio.h>
#define max 100
int main()
{
    int matri[max]= {0}, media[max]={0}, l=0, p=0;
    int numMatr = 1, numMedia = 0, maior = 0, menor = 0, temp = 0;
    printf("Digite a matricula e a media: ");
    for(l=0;l<max; l++){
        scanf("%d %d", &matri[l], &media[l]);
        for(p=0; p<l; p++){
            if(matri[p] == matri[l] && p!=l){
                printf("Essa matricula ja fo digitada!\n");
                l--;
            }
        }
        if(media[l] < 0 || media[l] > 10){
            printf("Media invalida, somente numeros de 0 a 10\n");
            l--;
        }
    }


    for (l = 0; l < max; l++){
        for (p = l + 1; p <= max - 1; p++){
            if (media[l] < media[p]){
                temp = media[l];
                media[l] = media[p];
                media[p] = temp;
                // troca matri
                temp = matri[l];
                matri[l] = matri[p];
                matri[p] = temp;
            }
        }
    }
    printf("Matricula | Media\n");
    printf("          | \n");

    for (l = 0; l < max; l++){
        printf("    %.2d    |  %.2d\n", matri[l], media[l]);
    }

    return 0;
}