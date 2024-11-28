/*Desenvolva um programa que contenha uma função chamada somaDigitos, que receba um número 
inteiro positivo e retorne a soma dos seus dígitos. No main, leia uma sequência de números até que o 
usuário insira o valor 0. Para cada número inserido, chame a função somaDigitos e exiba o resultado. Use 
uma estrutura de repetição para solicitar continuamente os números do usuário até que ele digite 0. */
#include <stdio.h>

int somaDigitos(int num){
    int res=0;
   if(num==0){return res;}
   else{
    res = num%10;
   num= num/10;
    return res + somaDigitos(num);
   }
}

int main(){
int n=1;
while(n!=0){
printf(">> ");
scanf("%d", &n);
printf("%d\n", somaDigitos(n));
}
return 0;
}