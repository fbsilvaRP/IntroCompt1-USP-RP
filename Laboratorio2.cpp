//Programa feito por Felipe Braga em 27 de abril de 2026
//Laboratório 2 da disciplina de Introdução à Computação 1 

#include <stdio.h> 
#include <stdlib.h>
int main()
{
	//Definição de variáveis:
	float horaInicio = 0.0, horaFinal = 0.0; 
	float duracaoJogo = 0.0;
	
	//Variável para definir o funcionamento da estrutura de repetição:
	int funciona = 1;
	
	//Enquanto a variável é verdadeira(igual a 1), o programa mantém seu funcionamento;
	while(funciona)
	{
		//Obtendo as informações do usuário:
		
		printf("Digite o valor numerico da hora de inicio do jogo: ");
		scanf("%f%*c", &horaInicio);
		
		printf("Digite o valor numerico da hora de termino do jogo: "); 
		scanf("%f%*c", &horaFinal);
		
		//Caso a duração do jogo se estenda para o dia seguinte (lógica):
			//horaFinal < horaInicio: Significa que o jogo terminou no dia seguinte;
			//horaFinal = horaInicio: Significa que o jogo terminou no mesmo horário no dia seguinte;
			
		//Por que (24 - horaInicio) + horaFinal? 
			//Precisamos descobrir quanto tempo passou até o fim daquele dia - um dia tem 24h, logo, 24 - horaInicio;
			//Ao tempo decorrido no dia anterior, é acrescido o tempo do dia seguinte;
			
		if(horaFinal <= horaInicio)
			duracaoJogo = (24 - horaInicio) + horaFinal;
		else
			//Caso o jogo tenha terminado no mesmo dia, basta subtrair o valor inicial do valor inicial;
			duracaoJogo = horaFinal - horaInicio;
		
		//Caso a duração da partida seja maior do que 24h, OU (||) menor do que 0h, a partida é informada como inválida;
		if((duracaoJogo > 24) || (duracaoJogo < 0))
			printf("Partida invalida. Tente novamente...");
		else
			//Apresenta o tempo de duração ao usuário com duas casas após o ponto flutuante;
			printf("O jogo durou %.2f horas", duracaoJogo); 
		
		//Verificação para manter ou encerrar o funcionamento da estrutura de repetição;
		printf("\nDeseja calcular novamente? [0]NAO OU [1]SIM?: \nR: "); 
		scanf("%d%*c", &funciona);
		
		//Apaga o console.
		system("cls");
	}
	
}
