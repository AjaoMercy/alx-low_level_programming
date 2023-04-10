#include <stdio.h>
#include <stdlib.h>

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
	int add = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (x = 1; x < argc; x++)
		{
			if (!atoi(argv[x]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				add += atoi(argv[x]);
			}
		}
		printf("%d\n", add);
	}
	return (0);
}
