#include <stdio.h>
#define h 70
int main()
{
	int B, T; 
	
	printf("B: ");
	scanf("%d%*c", &B);
	
	printf("T: ");
	scanf("%d%*c", &T); 
	
	float AreaFe, AreaMa, AreaOriginal;
	
	AreaOriginal = 160 * 70; 
	
	AreaFe = ((B + T) * h) / 2; 
	
	AreaMa = AreaOriginal - AreaFe; 
	
	if(AreaFe > (AreaOriginal / 2))
		printf("1"); 
		
	if(AreaMa > (AreaOriginal / 2))
		printf("2");
		
	if(AreaFe == AreaMa)
		printf("0");
		
	return 0;
	
}