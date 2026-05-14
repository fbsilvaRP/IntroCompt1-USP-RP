#include <stdio.h>
#define TAM1 5
int main()
{
	int vetor1[TAM1];
	float media = 0; 
	 
	//Preenchendo o vetor: 
	for(int i = 0; i < TAM1; i++)
	{
		int valor; 
		printf("Valor %d: ", i + 1); 
		scanf("%d%*c", &vetor1[i]);
		media += vetor1[i]; 
	}
	//Exibindo o vetor: 
	printf("\nVetor inserido: \n");
	for(int i = 0; i < TAM1; i++)
		printf("[%d], ", vetor1[i]);
	
	//Exibindo a media dos valores do vetor1: 
	media = media / TAM1; 
	printf("\nMedia aritmetica do primeiro vetor: %.2f", media);
}