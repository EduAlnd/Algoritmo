/*Construa um programa que permita armazenar o salário de 20 pessoas. Calcular
e armazenar o novo salário sabendo-se que o reajuste foi de 8%. Imprimir uma
listagem numerada com o salário e o novo salário. Declare quantos vetores forem
necessários.*/

#include <stdio.h>
#define max 20
int main() {
	float sala[max]={1865, 3172, 4540, 2589, 3120,
					4724, 1943, 4631, 1874, 4853, 
					2908, 1453, 3486, 4261, 2537, 
					3219, 4876, 1602, 2214, 3874};
	int l, num=1;
	float reajust = 0.08;
	printf("  Salario  | Novo salarios\n");
	printf("           |\n");
	for(l=0; l<max; l++){
		printf("  %.2f  | ", sala[l]);
		sala[l]+= sala[l] * 0.08;
		printf("  %.2f\n", sala[l]);
	}
	return 0;
}