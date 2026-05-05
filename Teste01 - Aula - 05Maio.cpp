#include <stdio.h>
#include <stdlib.h>
int main()
{
	float salario;
	float ValorImposto;
	int condicional = 1; 
	
	while(condicional)
	{
		printf("\t --- Calculadora de impostos --- \n"); 
		printf("Valor decimal: "); 
		scanf("%f%*c", &salario); 
		
		//Para um salario de 0 a 2000, imposto isento
		if(salario <= 2000)
			ValorImposto = 0.00; 
		
		//O imposto é cobrado sobre o valor acima de 2000 (e náo sobre todo o valor)
		//O imposto também é acumulativo, assim, deve-se somar com o imposto da taxa da faixa anterior
		
		if((salario > 2000) && (salario <= 3000))
			ValorImposto = (salario - 2000) * 0.08;
			
		if((salario > 3000) && (salario <= 4500))
			//1000 * 0.08 corresponde ao valor extra da faixa anterior acrescida
			ValorImposto = ((salario - 3000) * 0.18) + 1000 * 0.08;
		
		if(salario > 4500)
			//1500 * 0.18 corresponde ao valor extra da faixa anterior acrescida 
			ValorImposto = ((salario - 4500) * 0.28) + 1000 * 0.08 + 1500 * 0.18; 
			
		printf("Valor do imposto: %.2f", ValorImposto); 
		
		printf("\nDeseja fazer novamente o calculo? \nR: SIM[1] OU NAO[0]: "); 
		scanf("%d%*c", &condicional);
		
		system("cls");
	}
	
	
	
	
		
	
}