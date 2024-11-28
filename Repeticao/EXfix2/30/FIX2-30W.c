/*Escreva um programa em ANSI C que solicite ao usuário uma string utilizando a função gets(). Em 
seguida, utilizando uma estrutura de repetição, percorra cada caractere da string para contar o número 
total de vogais presentes (a, e, i, o, u), considerando tanto letras maiúsculas quanto minúsculas. Ao final, 
exiba a quantidade total de vogais encontradas na string fornecida. */
#include <stdio.h>
//#include <conio.h> windows

int main(){
	char text[50];
	int i=0, con=0, total=0;
	printf(">> ");
	while(i<=50){
        scanf("%c", &text[i]); //linux
		//text[i]=getch(); windows
		if(text[i]=='+'){ // se windows  text[i]==13
			text[i]='\0';
			break;}
		if (i==50){	text[i]='\0';}
		i++;
		}
	while(i>=0){
		if(text[i]=='a' ||text[i]=='A'){total++;}
		if(text[i]=='e' ||text[i]=='E'){total++;}
		if(text[i]=='i' ||text[i]=='I'){total++;}
		if(text[i]=='o' ||text[i]=='O'){total++;}
		if(text[i]=='u' ||text[i]=='U'){total++;}
		i--;
	}
	printf("\nTexto digitado: %s\n", text);
	printf("Quant. de vogais: %d", total);
	return 0;
}
