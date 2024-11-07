/*No dia da estréia do filme "Procurando Dory", uma grande emissora de TV realizou uma pesquisa
logo após o encerramento do filme. Cada espectador respondeu a um questionário no qual constava
sua idade e a sua opinião em relação ao filme: excelente-3; bom-2; regular-1.
Criar um programa que receba a idade e a opinião de 20 espectadores, calcule e imprima:
• A média das idades das pessoas que responderam excelente;
• A quantidade de pessoas que responderam regular;
• A percentagem de pessoas que responderam bom entre todos os expectadores analisados.*/

#include <stdio.h>
int main(){
int res, idade, bom = 0, reg = 0, exc = 0, idEx= 0;
float pBom;
int con=20;
do{
    printf("Idade >> ");
    scanf("%d", &idade);
    printf("[1]-Regular\n[2]-Bom\n[3]-Execelente\n");
    scanf("%d", &res);
    if(res==3){
    idEx += idade;
    exc++;
    
    }
    else if(res==2){
        bom++;
    }
    else if(res==1){
        reg++;
    }
    else{

        printf("Erro");
    return 1;
    }
    con--;

}while(con>=1);

idEx = idEx/exc;
pBom = (100*bom)/20;

printf("Media das idades que votaram excelente\n>> %d", idEx);
printf("\nQuantidade de pessoas que votaram regular\n>> %d", reg);
printf("\nPorcentagem de pessoas que responderam Bom\n>> %.2f", pBom);
    return 0;
}