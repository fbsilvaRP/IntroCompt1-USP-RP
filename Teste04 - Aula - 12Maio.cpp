#include <stdio.h>
int main()
{
	int n;
	int i = 0;  
	
	printf("n: "); 
	scanf("%d", &n); 
	
	do
	{
		printf("\n%d X %d = %d", n, i, n * i);
		i++; 
		
	}while(i <= 10); 
	
	return 0; 
	
	
	
}