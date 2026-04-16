//Programa feito em aula - 16/04/2026 - Introdução à Computação 1 
//Exemplo de aula
#include <stdio.h>
int main()
{
	int N = 12; 
	int exp2 = 1; 
	
	
	printf("\tN\t|    N * N \t|    2 ^ N\t|\n");
	printf("-------------------------------------------------\n"); 
	for(int i = 0; i <= 12; i++)
	{
		printf("|\t%d\t|\t%d\t|\t%d\t|\n", i, i * i, exp2);
		exp2 = exp2 * 2;
	}
	printf("-------------------------------------------------\n");

}