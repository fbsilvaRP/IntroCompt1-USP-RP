#include <stdio.h>
int main()
{	
	//Var para armazenar o produto dos valores
	int multiplicatorio = 1; 
	
	//n
	int n; 
	printf("n: "); 
	scanf("%d", &n);
	
	do
	{
		multiplicatorio *= n;
		n--;  
		
	}while(n > 0);
	
	printf("Multiplicatorio: %d", multiplicatorio);
	
	return 0; 
}