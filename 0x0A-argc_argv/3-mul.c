#include <stdio.h>
#include <stdlib.h>

/**
*main - the main function
*
*@argc: argument count
*
*@argv: argument vector
*
*Return: Error if its not 2 arguments
*/

int main(int argc, char *argv[])
{
	int a;
	int b;
	int mul;


	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;
		printf("%d\n", mul);
	}
	return (0);
}
