//Faça um programa que imprima os múltiplos de 5, no intervalo de 1 até 500.

#include <stdio.h>
int main(){
int num;
printf("Faça um programa que imprima os múltiplos de 5, no intervalo de 1 até 500.\n");
for(num=1;num<=500; num++){
    if(num%5==0){
        printf("%d\n",num);
    }
}
    return 0;
}