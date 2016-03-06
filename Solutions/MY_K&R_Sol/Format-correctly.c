#include<stdio.h>

main() /* GOOD PROGRAME MADE BY ANUPAM KHOSLA--DO NOT DELETE */
{
	int inspace=1;
	int c;
	while((c=getchar())!=EOF)
	{
		
		if(inspace==0)
		{
			putchar(c);
			if(c==' ')
			inspace=1;
		}
		
		
		if(inspace==1)
		{
			if(c!=' ')
			{
			  putchar(c);
			  inspace=0;
		    }
		}
		
		
			
		
	
	}
}
