/*A matriz dados contém na 1ª coluna a matrícula do aluno; na 2ª, o sexo (0 para
feminino e 1 para masculino); na 3ª, o código do curso, e na 4ª, o CR (coeficiente
de rendimento).
Faça um programa que armazene esses dados sabendo-se que o código do curso
é uma parte da matrícula: aascccnnn (aa ano, s semestre, ccc código do curso e
nnn matrícula no curso).
Além disso, um grupo empresarial resolveu premiar a aluna com CR mais alto de
um curso cujo código deverá ser digitado. Suponha 10 alunos e que o CR é um nº
inteiro*/

#include <stdio.h>
#define lin 3
#define col 4
int main() {
	int dados[lin][col], l=0, i=0, maior=0, premio=0;
	do{
		printf("Entre com a matricula(aascccnnn): ");
		scanf("%d", &dados[l][0]);
		do{
		printf("Entre com o sexo:\nMasculino [0] Feminino [1]\n");
		scanf("%d", &dados[l][1]);
		}while(dados[l][1]<0 || dados[l][1]>1);
		printf("Entre com o codigo do curso: ");
		scanf("%d", &dados[l][2]);
		printf("Entre com o CR: ");
		scanf("%d", &dados[l][3]);
		l++;
	}while(l<lin);
	printf("Curso para a premiacao: ");
	scanf("%d", &premio);
	for(l=0;l<lin;l++){
		if(dados[l][2] == premio){
			if(dados[l][2] >= maior && dados[l][1]==1){
				maior=dados[l][3];
				i=l;
			}
		}
	}
	printf("O maior CR do curso %d e %d da aluna com matricula %d.",dados[i][2], dados[i][3], dados[i][0]);
	return 0;
}
//matricula, sexo, codigo curso, cr