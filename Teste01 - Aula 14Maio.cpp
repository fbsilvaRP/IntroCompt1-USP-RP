//Programa p/ calcular a soma dos primeiros 50 numeros pares
#include <stdio.h>
//Constante para definir o n. de pares somados
#define valor 100
int main()
{
	//Acumula o somatorio de pares
	int soma = 0; 
	for(int i = 0; i <= valor; i++)
		//Se o resto da divisao do valor por 2 for igual a zero, o valor é acumulado
		if((i % 2) == 0 )
			soma += i; 
	printf("Soma: %d", soma); 
	return 0;
}