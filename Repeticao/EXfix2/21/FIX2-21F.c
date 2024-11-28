/*Crie um programa que leia um número inteiro positivo n e exiba uma tabela de conversão de metros 
para pés para valores de 1 até n metros. Utilize uma estrutura de repetição for para calcular e exibir a 
conversão de cada valor. Sendo: Pés = Metros × 3,28084.*/
#include <stdio.h>

int main(){
int n, aux=1,con;
float ft;
printf(">> ");
scanf("%d", &n);
for(con=1;con<=n;con++){
    ft= (float)con*3.28084;
    printf("%dm = %.2fft\n",con, ft);
}
return 0;
}
