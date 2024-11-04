//Faça um programa que imprima os múltiplos de 5, no intervalo de 1 até 500.
#include <stdio.h>
int main(){
int num=1;
printf("Faça um programa que imprima os múltiplos de 5, no intervalo de 1 até 500.\n");
while(num<=500){
    if(num%5==0){
        printf("%d\n", num);
    }
    num++;
}

    return 0;
}