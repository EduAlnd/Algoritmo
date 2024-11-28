/*Elabore um programa que peça ao usuário duas notas de um aluno (valores entre 0 e 10) e um número 
inteiro representando a quantidade de faltas do aluno. Caso alguma das notas esteja fora do intervalo ou o 
número de faltas seja negativo, exiba uma mensagem de erro e peça novamente todas as entradas até que 
estejam corretas.*/
#include <stdio.h>

int main(){
int p1=-1,p2=-1, fal=-1;
for(p1;(p1<0 || p1>10) || (p2<0 || p2>10) || (fal<0);p1){
printf(">> ");
scanf("%d", &p1);
printf(">> ");
scanf("%d", &p2);
printf(">> ");
scanf("%d", &fal);
if((p1<0 || p1>10) || (p2<0 || p2>10) || (fal<0)){ printf("Erro tente novamente\n");}
}
printf("Correto");
return 0;
}
