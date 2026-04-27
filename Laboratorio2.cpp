//Programa feito por Felipe Braga em 27 de abril de 2026
//Laboratório 2 da disciplina de Introdução à Computação 1 


#include <stdio.h>
#include <stdlib.h>
int main()
{
	//Definição de variáveis:
	float horaInicio = 0.0, horaFinal = 0.0; 
	float duracaoJogo = 0.0;
	
	int funciona = 1;
	
	while(funciona)
	{
		//Obtendo as informações do usuário:
		printf("Digite o valor numerico da hora de inicio do jogo: ");
		scanf("%f%*c", &horaInicio);
		
		printf("Digite o valor numerico da hora de termino do jogo: "); 
		scanf("%f%*c", &horaFinal);
		
		//Caso a duração do jogo se estenda para o dia seguinte:
		if(horaFinal <= horaInicio)
			duracaoJogo = (24 - horaInicio) + horaFinal;
		else
			duracaoJogo = horaFinal - horaInicio;
			
		//Saída do programa:
		printf("O jogo durou %.2f horas", duracaoJogo);
		
		printf("\nDeseja calcular novamente? [0]NAO OU [1]SIM?: \nR: "); 
		scanf("%d%*c", &funciona);
		
		//Apaga o console
		system("cls");
	}
	
}
