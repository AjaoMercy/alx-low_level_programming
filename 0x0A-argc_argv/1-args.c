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
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
