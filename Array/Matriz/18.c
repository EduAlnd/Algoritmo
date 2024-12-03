/*Faça um programa que leia uma matriz 5 X 5 inteira e apresente uma determinada
linha da matriz, solicitada via teclado.*/

#include <stdio.h>
#define lin 5
#define col 5
int main(){
    int mat[lin][col], l, c, busca;
    printf("Entre com os valores da matriz: \n");
    for(l=0;l<lin; l++){
        for(c=0;c<col; c++){
         printf("[%.2d][%.2d] = ", l, c);
        scanf("%d",&mat[l][c]);
        }
    }
    printf("\nQual linha voce deseja ver?\n>>");    
    scanf("%d",&busca);
     printf("Aqui esta a linha %.2d\n", busca);
        for(c=0;c<col; c++){
         printf("%.2d ", mat[busca][c]);
    }
    
    return 0;
    }