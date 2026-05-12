//Logica para identificar um ano bissexto: 
	//O ano bissexto ocorre a cada 4 anos; 
	//O ano bissexto é divisível por 4. Ex: 2024 é um ano bissexto; 

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int ano; 
	int mes;
	int bissexto = 0; 
	
	int dias = 0; 
	
	//Variavel para manter o loop funcionando
	int dec = 1; 
	
	while(dec)
	{ 
		//Leitura do ano 
		printf("Ano: ");
		scanf("%d%*c", &ano);
		
		//Identificadno se o ano é bissexto;
		if(((ano % 4) == 0) && ((ano % 400) == 0))
			bissexto = 1;  
		
		//Leitura do mes
		printf("Mes: "); 
		scanf("%d%*c", &mes);
		
		switch (mes)
		{
			case 1: 
				printf("Janeiro");
				dias = 31; 
				break;
			case 2:
				printf("Fevereiro"); 
				if(bissexto = 1)
					dias = 29; 
				else
					dias = 28;
				break;
			case 3:
				printf("Marco"); 
				dias = 31;
				break; 
			case 4:
				printf("Abril"); 
				dias = 30; 
				break;
			case 5: 
				printf("Maio");
				dias = 31; 
				break; 
			case 6: 
				printf("Junho"); 
				dias = 30; 
				break; 
			case 7: 
				printf("Julho");
				dias = 31; 
				break;
			case 8: 
				printf("Agosto"); 
				dias = 31; 
				break;
			case 9: 
				printf("Setembro");
				dias = 30; 
				break; 
			case 10:
				printf("Outubro");
				dias = 31; 
				break; 
			case 11: 
				printf("Novembro");
				dias = 30; 
				break; 
			case 12: 
				printf("Dezembro"); 
				dias = 31; 
				break; 
			default:
				printf("Erro...");
				return 0;  
				break; 
		}
		
	if(bissexto == 1)
		printf("\nO ano inserido eh bissexto.");
		
	printf("\nO mes selecionado tem %d dias.", dias); 
	
	printf("\nDeseja continuar? \n SIM[1] OU NAO[0]? \nR: "); 
	
	scanf("%d%*c", &dec); 
	
	system("cls");
	}
	return 0; 
}