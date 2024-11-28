/*Crie um programa que exiba a sequência de números de 1 a 100, mas, para múltiplos de 3, exiba "IFSP" 
em vez do número, e para múltiplos de 5, exiba "CAR". Para múltiplos de ambos, exiba "IFSP-CAR". Utilize 
uma estrutura de repetição for.*/
#include <stdio.h>

int main(){
int n=1;
while(n<=100){
    if(n%3==0 && n%5==0){ printf("IFSP-CAR\n"); }
    else if(n%3==0){ printf("IFSP\n"); }
    else if(n%5==0){ printf("CAR\n"); }
    else{printf("%d\n",n);}
    n++;
}
return 0;
}
