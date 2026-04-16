//Programa feito em aula - 16/04/2026 - Introdução à Computação 1 
//Exemplo de aula

#include <stdio.h>

//Definição de constantes para definir a estrutura de repetição
#define limInferior 0
#define limSuperior 12

int main()
{
	int N = 12; 
	int exp2 = 1; 
	
	
	printf("= = = = Tabela de potencias =  = = = = = = = = = \n"); 
	printf("\tN\t|    N * N \t|    2 ^ N\t|\n");
	printf("-------------------------------------------------\n"); 
	for(int i = limInferior; i <= limSuperior; i++)
	{
		printf("|\t%d\t|\t%d\t|\t%d\t|\n", i, i * i, exp2);
		exp2 = exp2 * 2;
	}
	printf("-------------------------------------------------\n");

}