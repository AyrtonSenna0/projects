#include <stdio.h>


void main()
{
	int n0 = -1, n1 = 1, entrada = 89, a = 0;
	for (int i = -1; i < entrada; i = a)
	{
		a = n0 + n1;
		if (a == entrada)
		{
			printf("O numero informado pertence a sequencia de Fibonacci\n");
		}
		else
		{
			n0 = n1;
			n1 = a;
		}
		
	}
	if (a != entrada)
	{
		printf("O numero informado nao pertence a sequencia de Fibonacci\n");
	}
}

