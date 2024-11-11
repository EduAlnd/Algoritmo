/*Escreva um programa que leia um número inteiro n e exiba os primeiros n números palíndromos. Um 
número palíndromo é aquele que é igual ao seu reverso. Utilize uma estrutura de repetição while.  */
#include <stdio.h>

int main(){
int n, con=0, rever, num=1, res=0, tmp, aux=1;
printf(">> ");
scanf("%d", &n);

do{
//quantos numeros tem
for(con=10;(num/con)!=0;con=con*10){}
con = con/10;
//reverter
tmp=num;
for(rever=0; con>=1;con=con/10){
    res = tmp%10;
    tmp= tmp/10;
    rever+= res * con;
}
//checar
if(num==rever){printf("%d° %d\n", aux, num);n--; aux++;}
    num++;
}while(n>=1);
return 0;
}
