#include<stdio.h>
main()
{
	int c, state;
	state=0;
	while((c=getchar())!=EOF)
	{
		if(state==1)
		{
			if(c==' '||c=='\n'||c=='\t')
			{ state=0; putchar('\n'); }
		}
		
		
		if((c==' '||c=='\n'||c=='\t')==0)
		{
			 state=1;
			 putchar(c); 
		}
		
	}
	
}
