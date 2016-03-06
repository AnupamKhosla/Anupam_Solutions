#include <stdio.h>
int sigma(int sum);
 main()
 {
		int sum;
		
		
		printf("%d",sigma(5));
		
		}
		
int sigma(int sum)	
{
	
	return sum + sigma(sum-1);
}	
