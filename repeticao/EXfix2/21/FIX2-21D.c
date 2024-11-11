/*Crie um programa que leia um número inteiro positivo n e exiba uma tabela de conversão de metros 
para pés para valores de 1 até n metros. Utilize uma estrutura de repetição for para calcular e exibir a 
conversão de cada valor. Sendo: Pés = Metros × 3,28084.*/
#include <stdio.h>

int main(){
int n, aux=1,con=1;
float ft;
printf(">> ");
scanf("%d", &n);
do{
    ft= (float)con*3.28084;
    printf("%dm = %.2fft\n",con, ft);
    con++;
}while(con<=n);
return 0;
}
