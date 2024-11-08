/* Escreva um programa em ANSI C que leia um número inteiro positivo n e verifique se n é um número 
primo. Utilize uma estrutura de repetição for para realizar a verificação e exiba uma mensagem indicando 
se n é primo ou não. Um número primo é um número natural maior que 1 que só pode ser dividido por 1 e 
por ele mesmo sem deixar resto. Em outras palavras, um número primo tem exatamente dois divisores: 1 e 
o próprio número. */
#include <stdio.h>

int main(){
int n, i=2, res=0;
printf(">> ");
scanf("%d", &n);
do{
    if(i%2==0 || i%3==0 || i%5==0 || i%7==0){ i++; }
    if (n%i==0){
       if(n==i){printf("E primo"); return 0;}
       else{printf("Não e primo é divisivel por %d", i); return 0;}
    }
    else{
        res= n/i;
        i++;
    }

}while(i<res);
if(i>res){
printf("E primo");
}

return 0;
}
