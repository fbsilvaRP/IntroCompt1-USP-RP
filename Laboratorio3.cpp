//Programa feito Por Felipe Braga em 29/04/2026.

//Enunciado direto ao ponto:

/*escrever um programa que, dados dois inteiros N e M, determine o número máximo de casas que
podem receber números entre N e M, incluindo-os, sem dígitos repetidos.

Entrada: Cada caso de teste é descrito em uma linha. A linha
contém dois inteiros N e M, conforme descrito acima (100 ≤ N ≤ M ≤ 999).
Saída: Para cada caso de teste, imprima uma linha com um inteiro
representando a quantidade de números de casas entre N e M,
inclusive, sem dígitos repetidos.
*/

#include <stdio.h>
int main()
{
	//Definição de variáveis
	int l_min = 0;
	int l_max = 0; 
	int contador = 0;
	
	float centena = 0; 
	float dezena = 0; 
	float unidade = 0;  
	
	float valor = 0;
	
	printf("Valor minimo: "); 
	scanf("%d%*c", &l_min);
	
	printf("Valor maximo: "); 
	scanf("%d%*c", &l_max);
	
	printf("Identificando centena, dezena e unidade de um valor digitado: \n");
	centena = valor % 100; 
	dezena = valor % 10;
	unidade = valor 
	
	for(int i = l_min; i <= l_max; i++)
	{
		//Identificando centena, dezena e unidade do valor i:
		unidade = i % 100;
		dezena = i % 10;
		printf("%d \n", i);
	}
	
	
	
}