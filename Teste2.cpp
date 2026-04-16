#include <stdio.h>
int main()
{
	//Definição de variáveis
	int numero1, numero2;
	
	//Recebendo os dados do usuário
	printf("numero 1: "); 
	scanf("%d%*c", &numero1); 
	
	printf("numero 2: "); 
	scanf("%d%*c", &numero2);
	
	//Apresento para o usuário
	printf("%d + %d = %d", numero1, numero2, numero1 + numero2);
	
	return 0; 
	
}