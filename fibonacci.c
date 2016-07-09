#include<stdio.h>

void main()
{
	int a=0, b=1, fibo=0;
	while(1)
	{
		printf("%i, ", fibo);
		fibo=a+b;
		b=a;
		a=fibo;
	}
}

