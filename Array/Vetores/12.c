/*Crie um programa para gerenciar um sistema de reservas de mesas em uma casa
de espetáculo. A casa possui 30 mesas de 5 lugares cada. O programa deverá
permitir que o usuário escolha o código de uma mesa (100 a 129) e forneça a
quantidade de lugares desejados. O programa deverá informar se foi possível
realizar a reserva e atualizar a reserva. Se não for possível, o programa deverá
emitir uma mensagem. O programa deve terminar quando o usuário digitar
o código 0 (zero) para uma mesa ou quando todos os 150 lugares estiverem
ocupados*/

#include <stdio.h>
#define max 30
int main(){
    int mesa[max], lugar[max]={0}, l, cod=100, busca=0, lCheios=0;
    for(l=0;l<max;l++){
        mesa[l]= cod;
        cod++;
    }
    do{
        do{
            printf("Qual o codigo da mesa: ");
            scanf("%d", &busca);
           
            if((busca<100 || busca>=max+100)&& busca!=0){
                printf("Erro: Codigo invalido.\n");
            }
        }while((busca<100 || busca>=max+100) && busca!=0);
        for(l=0;l<max;l++){
            if(busca == mesa[l]){
                do{
                    printf("Quantos lugares: ");
                    scanf("%d", &lugar[l]);
                    if(lugar[l]<0 || lugar[l]>5){
                        printf("Erro: Numero de lugares invalido.\n");
                    }
                }while(lugar[l]<0 || lugar[l]>5);
                printf("A alteracao foi feita com sucesso\n");
            }
        }
        lCheios=0;
        for(l=0;l<max;l++){
            if(lugar[l]==5){
                lCheios++;
            }
        }
         printf("---%d\n", busca);
    }while(busca!=0 && lCheios != max);
    printf("Listagem\n");
    printf("Cod | lugares\n");
    printf("    |\n");
     for(l=0;l<max;l++){
        printf("%d | %.2d\n", mesa[l], lugar[l]);
    }
    
    return 0;
}