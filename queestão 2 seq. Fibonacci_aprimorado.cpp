#include <stdio.h>


void main()
{
	int n0 = -1, n1 = 1, entrada = 1, a = 0;
	//calcula a sequência enquanto a última soma é menor que a entrada
	for (int i = -1; i < entrada; i = a)
	{
		a = n0 + n1;
		n0 = n1;
		n1 = a;
	}
	/* a condição i < entrada garante que "a" será igual a entrada caso pertença a sequência
	e maior que a entrada, caso não pertença*/
	if (a == entrada)
	{
		printf("O numero informado pertence a sequencia de Fibonacci\n");
	}
	else 
	{
		printf("O numero informado nao pertence a sequencia de Fibonacci\n");
	}
}

