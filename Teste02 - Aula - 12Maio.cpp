//system("pause")
#include <stdio.h>
int main()
{
	int num;
	int dec = 1; 
	
	while(dec)
	{
		printf("Digite um valor positivo: "); 
		scanf("%d%*c", &num);
		
		//Encerra o loop se o valor inserido for um número positivo
		if(num > 0)
			dec = 0;  
		
 	}
	return 0; 
}