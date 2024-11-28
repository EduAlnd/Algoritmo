/* Implemente um programa em ANSI C que calcule o número reverso de um inteiro positivo n fornecido 
pelo usuário. Utilize uma estrutura de repetição while para inverter os dígitos e exibir o número resultante. 
A entrada de dados deve ser através de um único scanf().*/
#include <stdio.h>

int main(){
int n, con=1, res=0, aux=1;
printf(">> ");
scanf("%d", &n);
for(n;(n/con)!=0;con=con*10){}

con=con/10;
while(con>=1){
aux=n%10;
n=n/10;
res+= aux*con;
con=con/10;
}
printf("%d", res);
return 0;
}
