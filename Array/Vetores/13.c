/*Construa um programa que realize as reservas de passagens áreas de uma com-
panhia. O programa deve permitir cadastrar o número de 10 voos e definir a
quantidade de lugares disponíveis para cada um. Após o cadastro, leia vários
pedidos de reserva, constituídos do número da carteira de identidade do cliente e
do número do voo desejado. Para cada cliente, verificar se há possibilidade no
voo desejado. Em caso afirmativo, imprimir o número da identidade do cliente e
o número do voo, atualizando o número de lugares disponíveis. Caso contrário,
avisar ao cliente a inexistência de lugares. A leitura do número 0 (zero) para o voo
desejado indica o término da leitura de reservas*/

#include <stdio.h>
#define max 2
int main(){
    int voo[max], lugares[max], identi, l, p,busca=0, valid, lotado;

    for(l=0;l<max;l++){
    do{
        valid=0;
        printf("Entre com o numero do voo: ");
        scanf("%d", &voo[l]);
        for(p=0;p<max;p++){
            if(voo[l]==voo[p] && l!=p){
                valid=1;
                printf("Numero de voo já existente!\n");
            }
        }
    }while(valid!=0);

    printf("Entre com o numero do lugares: ");
    scanf("%d", &lugares[l]);
    }
    
    //Reserva
    do{
    printf("Informe seu numero de identidade: ");
    scanf("%d", &identi);
        do{
            valid=0;
            printf("Qual o numero do voo: ");
            scanf("%d", &busca);
            for(l=0;l<max;l++){
                if(voo[l]==busca){
                    valid=1;
                    p=l;
                }
            }
            if(!valid && busca!=0){
                printf("Voo não encontrado. Tente novamente\n");
            }

        }while(busca!=0 && valid!=1);
        if(valid){
        if(lugares[p]== 0){
            printf("Infelizmente nao existem lugares disponiveis. Por favor tente reservar em outro voo.\n");
        }
        else{
            printf("Existem lugares disponiveis.\n");
            lugares[p]--;
            printf("Aqui esta sua passagem:\n");
            printf("Numero de identidade: %d\n", identi);
            printf("Numero do voo: %d\n", busca);
        }
        }
        lotado=0;
        for(l=0;l<max;l++){
            if(lugares[l]==0){
                lotado++;
            }
        }
    }while(busca!=0 && lotado!=max);
    if(lotado==max)
    printf("\nNão exitem mas lugares disponveis.");
    return 0;
}