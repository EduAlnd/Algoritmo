/*Elabore um programa que leia uma sequência de números inteiros (positivos e negativos) e terminada 
pelo número zero e exiba a média dos números pares digitados. Utilize uma estrutura de repetição do-
while*/
#include <stdio.h>

int main(){
int n, con=0, par=0;
float res;
while(n!=0){
printf(">> ");
scanf("%d", &n);
if(n%2==0){
    par+=n;
    con++;
}
}
par = par-n;
con--;
res= (float)par/con;
printf("%.2f", res);
return 0;
}
