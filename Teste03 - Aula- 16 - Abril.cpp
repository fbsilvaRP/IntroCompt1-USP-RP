#include <stdio.h>
int main()
{
	//Definição de variáveis
	int numero1, numero2; 
	
	//Recebendo do usuário
	printf("Primeiro valor: ");
	scanf("%d%*c", &numero1); 
	
	printf("Segundo valor: "); 
	scanf("%d%*c", &numero2); 
	
	//Realizando as operações + - * /
	
	printf("%d + %d = %d \n", numero1, numero2, numero1 + numero2); 
	
	printf("%d - %d = %d \n", numero1, numero2, numero1 - numero2); 
	
	printf("%d * %d = %d \n", numero1, numero2, numero1 * numero2); 
	
	if(numero2 != 0)
	{
		printf("%d / %d = %d \n", numero1, numero2, numero1 / numero2); 
		
		printf("%d resto da divisao por %d = %d", numero1, numero2, numero1 % numero2);
	}
	if(numero2 == 0)
		printf("Nao existe divisao por zero...");

	
	
	
	
	
	return 0; 
}