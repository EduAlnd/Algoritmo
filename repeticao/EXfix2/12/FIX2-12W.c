/*Implemente um programa que leia um número inteiro positivo n e exiba uma pirâmide de asteriscos 
com n linhas. Cada linha i deve conter i asteriscos. Utilize uma estrutura de repetição aninhada. */
#include <stdio.h>

int main(){
int n, aux=1, con=1;
printf(">> ");
scanf("%d", &n);
printf("\n\nWHILE>FOR\n\n");
while(con<=n){
    printf("%d\t", con);
    for(aux=1;aux<=con;aux++){
        printf("*");
        if(aux==con){
            printf("\n");
        }
    }
    
    con++;
}
printf("\n\nWHILE>DO\n\n");
con=1;
while(con<=n){
    printf("%d\t", con);
    aux=1;
    do{
        printf("*");
        if(aux==con){
            printf("\n");
        }
        aux++;
    }while(aux<=con);
    con++;
}
printf("\n\nWHILE>WHILE\n");
con=1;

while(con<=n){
    printf("%d\t", con);
    aux=1;
    while(aux<=con){
        printf("*");
        if(aux==con){
            printf("\n");
        }
        aux++;
    }
    con++;
}
return 0;
}
