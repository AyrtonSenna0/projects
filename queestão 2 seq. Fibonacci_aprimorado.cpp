#include <stdio.h>


void main()
{
	int n0 = -1, n1 = 1, entrada = 1, a = 0;
	//calcula a sequ�ncia enquanto a �ltima soma � menor que a entrada
	for (int i = -1; i < entrada; i = a)
	{
		a = n0 + n1;
		n0 = n1;
		n1 = a;
	}
	/* a condi��o i < entrada garante que "a" ser� igual a entrada caso perten�a a sequ�ncia
	e maior que a entrada, caso n�o perten�a*/
	if (a == entrada)
	{
		printf("O numero informado pertence a sequencia de Fibonacci\n");
	}
	else 
	{
		printf("O numero informado nao pertence a sequencia de Fibonacci\n");
	}
}

