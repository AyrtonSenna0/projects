#include<stdio.h>
#include<string.h>

void main()
{
	char string[10] = "nome\0", aux;
	int j, i = 0;
	j = strlen(string) - 1;
	for (int i = 0; i <= j; i++)
	{
		aux = string[j];
		string[j] = string[i];
		string[i] = aux;
		j--;
	} 
	printf("%s\n", string);
}