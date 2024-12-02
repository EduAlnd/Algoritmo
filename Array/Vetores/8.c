/*Construa um programa que armazene o código, a quantidade, o valor de compra
e o valor de venda de 30 produtos. A listagem pode ser de todos os produtos ou
somente de um ao se digitar o código*/
#include <stdio.h>
#define max 5

int main(){
    int codigo[max];
    int quant[max];
    float compra[max], venda[max];
    int l, nav, busca, flag, valor = 20, valid, invalid=0, list = 0, erro=1;
    // Adiciona valores aos vetores
    for (l = 0; l <= max - 1; l++) {
        codigo[l] = l + 1;
        quant[l] = l + 2;
        compra[l] = valor;
        venda[l] = valor * 1.15;
        valor += 10;
    }
    printf("O que deseja fazer:\nRegistro[1]\nConsulta[2]\nListagem[3]\n>> ");
    scanf("%d", &nav);
    // Registro
    if (nav == 1){
        printf("Registrar alteração em um produto[1]\nRegistrar todos os produtos[2]\n>> ");
        scanf("%d", &nav);
        // Altera somente um produto
        if (nav == 1) {
            printf("Qual o codigo de produto: ");
            scanf("%d", &busca);
            //Laço para achar o codigo
            for(l=0;l<max;l++){
                if(codigo[l] == busca){
                    //Laço para verificação de codigo duplicado
                    do{
                        invalid=0;
                        printf("Codigo: ");
                        scanf("%d", &codigo[l]);
                        //Verificação
                        for(valid =0; valid<max; valid++){
                            if(codigo[valid] == codigo[l] && l!=valid){
                                printf("Codigo registrado de outro produto!\n");
                                invalid=1;
                            }
                        }
                    }while(invalid==1);
                printf("Quantidade: ");
                scanf("%d", &quant[l]);
                printf("Preco de compra e venda: ");
                scanf("%f %f", &compra[l], &venda[l]);
                }
            }
        }
        // Altera todos os produtos
        else if (nav == 2){
            for (l = 0; l <= max - 1; l++){
                printf("Dados do produto\n");
                printf("Codigo: %.3d | Quant: %.2d | Valor de compra: %.2f | Valor de venda: %.2f \n", codigo[l], quant[l], compra[l], venda[l]);
                //Laço para verificação de codigo duplicado
                    do{
                        invalid=0;
                        printf("Codigo: ");
                        scanf("%d", &codigo[l]);
                        //Verificação
                        for(valid =0; valid<max; valid++){
                            if(codigo[valid] == codigo[l] && l!=valid){
                                printf("Codigo registrado de outro produto!!\n");
                                invalid=1;
                            }
                        }
                    }while(invalid==1);
                printf("Quantidade: ");
                scanf("%d", &quant[l]);
                printf("Preco de compra e venda: ");
                scanf("%f %f", &compra[l], &venda[l]);
            }
        }
        printf("\nAlteracao feita com sucesso\n");
        //Faz a listagem apos a alteração
        printf("Listagem com a alteração\n");
        list=1;
    }
    // Consulta a um produto
    else if (nav == 2){
        printf("Qual o codigo de produto: ");
        scanf("%d", &busca);
        for (l = 0; l <= max - 1; l++){
            if (codigo[l] == busca){
                printf("Codigo: %d | Quant: %d | Valor de compra: %.2f | Valor de venda: %.2f \n", codigo[l], quant[l], compra[l], venda[l]);
                flag = 0;
                erro=0;
            }
        }
        if (flag){
            printf("Codigo nao encontrado");
        }
    }
    // Lista todos os produtos
    if (nav == 3 || list == 1){
        for (l = 0; l <= max - 1; l++)
            printf("Codigo: %.3d | Quant: %.2d | Valor de compra: %.2f | Valor de venda: %.2f \n", codigo[l], quant[l], compra[l], venda[l]);
    }
    else if(erro || nav>=4){
        printf("Erro: Numero invalido");
        return 1;
    }

    return 0;
}