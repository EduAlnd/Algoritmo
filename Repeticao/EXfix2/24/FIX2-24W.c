/*Escreva um programa que peça ao usuário para digitar dois números inteiros positivos a e b, onde a 
deve ser menor que b. Caso o usuário digite valores fora desse critério, exiba uma mensagem de erro e 
solicite novamente ambos os números até que eles sejam válidos.*/
#include <stdio.h>

int main(){
int a, b;
while(a>=b){
printf(">> ");
scanf("%d", &a);
printf(">> ");
scanf("%d", &b);
if(a>=b){ printf("Erro tente novamente\n");}
}
printf("Correto");
return 0;
}
