/*Elabore um programa que leia um número inteiro positivo n e calcule a soma dos números de 1 a n 
usando as estruturas de repetição for, while e do-while. Exiba o resultado da soma. */
#include <stdio.h>

int main(){
int num, con=0;
printf(">> ");
scanf("%d", &num);
while(num>=1){
    con+=num;
    num--;
}
printf("%d", con);
return 0;
}
