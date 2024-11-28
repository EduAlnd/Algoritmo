/*Desenvolva um programa que solicite a idade e o peso de uma pessoa. A idade deve ser um número 
entre 1 e 100, e o peso deve estar entre 30 e 150 kg. Caso uma ou ambas as entradas estejam fora do 
intervalo, exiba uma mensagem de erro e peça os valores novamente até que ambos sejam válidos.*/
#include <stdio.h>

int main(){
int idade, peso;
for(idade;(idade<1 || idade>100)|| (peso<30 || peso>150);idade){
printf(">> ");
scanf("%d", &idade);
printf(">> ");
scanf("%d", &peso);
if((idade<1 || idade>100)|| (peso<30 || peso>150)){ printf("Erro tente novamente\n");}
}
printf("Correto");
return 0;
}
