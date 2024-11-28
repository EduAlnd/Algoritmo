/*Crie um programa que leia o preço de compra e o preço de venda de 100 mercado-
rias (utilize vetores). Ao final, o programa deverá imprimir quantas mercadorias
proporcionam:
• lucro < 10%
• 10% <= lucro <= 20%
• lucro > 20%*/

#include <stdio.h>
#define max 3
int main(){
    float compra[max], venda[max];
    int lucroMaior20=0, lucroMenor10=0, lucroMedio=0, l;
    float porcen=0;

    for (l = 0; l <= max-1; l++){
        printf("Entre com o valor da compra: ");
        scanf("%f", &compra[l]);
        printf("Entre com o valor da venda: ");
        scanf("%f", &venda[l]);
    }

    for(l=0; l<max; l++){
        porcen = ((venda[l]-compra[l])/compra[l]);
        if(porcen > 0.20){
            lucroMaior20++;
        }
        else if(porcen < 0.10){
            lucroMenor10++;
        }
        else{
            lucroMedio++;
        }
    }
   
    printf("Lucro <10%% = %d\n", lucroMenor10);
    printf("10%% <= Lucro <= 20%% = %d\n", lucroMedio);
    printf("Lucro >20%% = %d\n", lucroMenor10);
    return 0;
}