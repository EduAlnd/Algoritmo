/*Implemente um programa que leia dois números inteiros x e y. O programa deve garantir que x seja par 
e que y seja ímpar. Se qualquer um dos números não atender aos critérios, exiba uma mensagem de erro e 
solicite novamente ambos os números até que sejam válidos. */
#include <stdio.h>

int main(){
int x,y;
for(x;(x%2!=0)|| (y%2==0);x){
printf(">> ");
scanf("%d", &x);
printf(">> ");
scanf("%d", &y);
if((x%2!=0)|| (y%2==0)){ printf("Erro tente novamente\n");}
}
printf("Correto");
return 0;
}
