/* Desenvolva um programa em ANSI C que leia números inteiros positivos até que o usuário digite um 
número negativo. Ao final, exiba quantos números pares foram digitados. Utilize uma estrutura de 
repetição do-while. */
#include <stdio.h>

int main(){
int n, con;
while(n>=0){
printf(">> ");
scanf("%d", &n);
if(n%2==0){con++;}

}
if(n<0 && n%2==0){con--;}
printf("%d", con);
return 0;
}
