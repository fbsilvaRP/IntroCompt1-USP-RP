#include <stdio.h>
#include <stdlib.h>
int main()
{
	//Define a condicao para manter o loop funcionando
	char verificacao; 
	
	float saldo = 0.00; 
	
	while(verificacao != 'd')
	{
		printf(" = = = Consulta bancaria = = = = = = = \n"); 
		printf(" = = = (a) - Consultar saldo \n");
		printf(" = = = (b) - Saque \n"); 
		printf(" = = = (c) - Deposito \n"); 
		printf(" = = = (d) - Sair \n"); 
		
		printf("R: "); 
		scanf("%c", &verificacao);
		
		if(verificacao == 'a')
			printf("Saldo: %.2f \n", saldo); 
			
		if(verificacao == 'b')
		{
			float valorSaque = 0.00; 
			printf("Valor para saque: ");
			scanf("%f%*c", &valorSaque); 
			saldo -= valorSaque; 	
		}
		if(verificacao == 'c')
		{
			float valorDeposito; 
			printf("Valor para deposito: ");
			scanf("%f%*c", &valorDeposito); 
			saldo += valorDeposito; 
		}
		
		system("pause");
		system("cls");
	}
}