/*Foi feita uma pesquisa de audiência de canal de TV em várias casas de uma certa cidade, e mum
determinado dia. Para cada casa visitada foram fornecidos o número do canal (4, 5, 7, 12) e o
número de pessoas que estavam assistindo a ele naquela casa. Se a televisão estivesse desligada,
nada seria anotado, ou seja, esta casa não entraria na pesquisa. Criar um programa que:
• Leia um número indeterminado de dados, isto é, o número do canal e o número de pessoas que
estavam assistindo;
• Calcule e imprima a porcentagem de audiência em cada canal.
Obs.: Para encerrar a entrada de dados, digite o número do canal zero.*/

#include <stdio.h>
int main(){
	int num=0, canal;
	float can4=0, can5=0, can7=0, can12=0;
	do{
		printf("Qual o canal:\n");
		printf("[4] [5] [7] [12]\n");
		scanf("%d", &canal);
		if(canal==4){
			can4++;
			num++;
		}
		else if(canal==5){
			can5++;
			num++;
		}
		else if(canal==7){
			can7++;
			num++;
		}
		else if(canal==12){
			can12++;
			num++;
		}
		
		
	}while(canal!=0);
	can4= can4/num;
	can5= can5/num;
	can7= can7/num;
	can12= can12/num;
	printf("Audiencia canal 4 (%%): %.2f", can4);
	printf("\nAudiencia canal 5 (%%): %.2f", can5);
	printf("\nAudiencia canal 7 (%%): %.2f", can7);
	printf("\nAudiencia canal 12 (%%): %.2f", can12);
	
	return 0;
}
