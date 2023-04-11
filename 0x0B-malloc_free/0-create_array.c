#include "main.h"
#include <stdlib.h>

/**
**create_array - creates an array of chars
*
*@size: array size
*
*@c: array
*
*Return: NULL if the size is 0
*/

char *create_array(unsigned int size, char c)
{
	char *y;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}

	y = malloc(sizeof(c) * size);

	if (y == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		y[x] = c;
	}
	return (y);
}
