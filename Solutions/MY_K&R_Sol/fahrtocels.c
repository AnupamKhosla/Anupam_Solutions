#include<stdio.h>
float f_to_c(float );
main()
{
	float fahr;
	for(fahr=0;fahr<=300;fahr=fahr+20)
	printf("%3f %6.1f\n", fahr, ((5.0/9.0)*(fahr-32)));
}

float f_to_c(float fahr)
{
	float p = ((5.0/9.0)*(fahr-32));
	return p;
}
