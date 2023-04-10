#include <stdio.h>

/**
*main - the main function
*
*@argc: argument count
*
*@argv: argument vector
*
*Return: usually zero
*/

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
