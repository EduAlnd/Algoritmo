/*Crie um programa que solicite dois números inteiros a e b. O programa deve garantir que ambos os 
números sejam múltiplos de 5 e que a seja menor que b. Caso alguma das condições não seja atendida, 
exiba uma mensagem de erro e peça os valores novamente até que ambos estejam corretos. */
#include <stdio.h>

int main(){
int a,b;
for(a;(a%5!=0)||(b%5!=0)||(a>=b);a){
printf(">> ");
scanf("%d", &a);
printf(">> ");
scanf("%d", &b);
if((a%5!=0)||(b%5!=0)||(a>=b)){printf("Erro tente novamente\n");}
}
printf("Correto");
return 0;
}
