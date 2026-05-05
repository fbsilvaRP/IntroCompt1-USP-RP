#include <stdio.h>
#include <stdlib.h>
int main()
{
	int mes;
	int dias; 
	int condicao = 1;  
	
	while(condicao)
	{
		printf("Mes: "); 
		scanf("%d%*c", &mes);
		switch(mes)
		{
			case 1:
				printf("Janeiro");
				dias = 31; 
				break;
			case 2:
				printf("Fevereiro");
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
				break;
		}
	printf("\n Deseja inserir um novo numero? \n R: [1]SIM ou [0]NAO: ");
	scanf("%d%*c", &condicao);
	system("cls");
	}
}