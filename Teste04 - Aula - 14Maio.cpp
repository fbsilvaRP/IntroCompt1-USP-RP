#include <stdio.h>
#define TAM 8
int main()
{
	int vetor[TAM];
	int X, Y; 
	
	//Preenchendo o vetor: 
	for(int i = 0; i < TAM; i++)
	{
		int valor; 
		printf("Valor %d: ", i + 1); 
		scanf("%d%*c", &vetor[i]); 
	}
	//Exibe o vetor: 
	printf("Vetor inserido: \n");
	for(int i = 0; i < TAM; i++)
		printf("[%d], ",vetor[i]); 
		
	printf("\nDigite o valor de X(primeira posicao): "); 
	scanf("%d%*c", &X); 
	
	printf("\nDigite o valor de Y(segunda posicao): "); 
	scanf("%d%*c", &Y); 
	
	printf("X + Y = %d", vetor[X] + vetor[Y]); 

}

	
	