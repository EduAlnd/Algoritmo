/*Implemente um programa que leia um número inteiro positivo n e verifique se ele é um número de 
Armstrong (ou seja, se a soma dos seus dígitos elevados ao número de dígitos é igual ao próprio número). 
Utilize uma estrutura de repetição while. Um número de Armstrong é um número que é igual à soma de 
seus próprios dígitos, cada um elevado à potência do número de dígitos. Por exemplo: 153 é um número 
de Armstrong porque (1^3 + 5^3 + 3^3 = 153) e 370  também é um número de Armstrong porque (3^3 + 
7^3 + 0^3 = 370). O código poderá receber até 4 digitos, elaborar a função para calcular o quadrado, cubo 
e elevado a quarta potência.*/
#include <stdio.h>

int calculo(int num, int quant, int res){
   if(quant==1){return res;}
   else{
    res = res*num;
    return calculo(num, --quant, res);
   }


}
int main(){
int n, i, digito=0, con=0, nAux=0, res;
do{
    printf(">> ");
    scanf("%d", &n);
    if(n<0 || n>9999){printf("Somente numeros positivos e com até 4 digitos\n");}
}while(n<0 || n>9999);

//con para saber o numero de digitos
for(i=1;n/i!=0; i=i*10){con++;}
//Guarda o valor de n
nAux=n;
//Verificação
for(res=0;nAux!=0; res){
digito= nAux%10;
nAux= nAux/10;
res+= calculo(digito, con, digito);
}

if(res==n){printf("E um numero de Armstrong");}
else{printf("Nao e um numero de Armstrong");}
return 0;
}
