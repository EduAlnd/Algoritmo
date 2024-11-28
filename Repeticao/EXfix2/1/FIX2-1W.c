/*Escreva um programa em ANSI C que exiba os números de -50 a 50. 
Utilize as estruturas de repetição for, while e do-while.*/
#include <stdio.h>

int main(){
int num= -50;
while(num<=50){
    printf("%d\n", num);
    num++;
}
return 0;
}
