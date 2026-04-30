//feito Por Felipe Braga em 29/04/2026.

//Observações:
/*
	O operador % retorna o resto da divisão - ex: 10 % 3 = 1; 
	O operador / retornará a divisão inteira caso as variáveis utilizadas sejam do tipo inteiro; 
*/

#include <stdio.h>
int main()
{
	//Definição de variáveis
	
	int l_min = 0;
	int l_max = 0; 
	int contador = 0;
	
	int unidade = 0;
	int dezena = 0; 
	int centena = 0; 
	
	printf("Entradas \n");
	
	printf("Valor minimo: "); 
	scanf("%d%*c", &l_min);
	
	printf("Valor maximo: "); 
	scanf("%d%*c", &l_max);
	
	for(int i = l_min; i <= l_max; i++)
	{
		//Identificando centena, dezena e unidade do valor i:
		int valor = i; 
		
		//para obter o algarismo das unidades, basta extrair a parte decimal do valor ao dividir por 10:
		unidade = valor % 10;
		
		//Após obter a parte decimal, deve-se obter a o quociente inteiro da divisão por 10 - ex: 101 vira 10; 
		valor = valor / 10; 
		
		//Para obter o algarismo das dezenas, a lógica se mantém: basta obter a parte decimal do novo valor ao dividir por 10:
		dezena = valor % 10; 
		
		//Após obter o algarismo das dezenas na parte decimal, o quociente inteiro da divisão por 10 é obtido novamente - ex: 10 vira 1.
		valor = valor / 10; 
		
		//Por fim, o algarismo das centenas é obtido - obtendo novamente a parte decimal do valor ao dividir por 10; 
		centena = valor % 10;
		
		//Verificando se há algum algarismo igual - Requisito do exercício - lógica utilizada:
		//Caso não haja digitos repetidos, ou seja, os três algarismos são diferentes, será incrementado em uma unidade;
			
		if((unidade != dezena) && (unidade != centena) && (dezena != centena))
			contador = contador + 1; 
	}
	
	printf("\n %d", contador);
	
}