/*Implemente um programa que leia um número inteiro n e calcule o somatório dos números pares de 1 
até n usando uma estrutura de repetição for. Exiba o somatório ao final.*/
#include <stdio.h>

int main(){
int n, res;
printf(">> ");
scanf("%d", &n);
for(n;n!=1;n--){
    if(n%2==0){
        res +=n;
    }
}
printf(">> %d ", res);
return 0;
}
