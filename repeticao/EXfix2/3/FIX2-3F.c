/* Implemente um programa que leia um número inteiro positivo n e exiba todos os números ímpares de 1 
até n usando as estruturas de repetição for, while e do-while. Exiba um número por linha.*/
#include <stdio.h>

int main(){
int n;
printf(">> ");
scanf("%d", &n);
for(n;n>=1;n--){
    if(n%2==1){
        printf(">> %d\n", n); 
    }
}
return 0;
}
