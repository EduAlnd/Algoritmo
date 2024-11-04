//Faça um programa que imprima os múltiplos de 5, no intervalo de 1 até 500.

#include <stdio.h>
int main(){
int num=1;
printf("Faça um programa que imprima os múltiplos de 5, no intervalo de 1 até 500.\n");
do{
    if(num%5==0){
        printf("%d\n", num);
    }
    num++;
}while(num<=500);

    return 0;
}
