#include "main.h"
#include <stdlib.h>

/**
*array_range - creates an array of integers
*
*@min: the minimum value to be in the array
*
*@max: the maximum value to be in the array
*
*Return: NULL if malloc fails
*/

int *array_range(int min, int max)
{
	int *a;
	int x;

	if (min > max)
	{
		return (NULL);
	}

	a = malloc(sizeof(*a) * ((max - min) + 1));

	if (a == NULL)
	{
		return (NULL);
	}
	for (x = 0; min <= max; x++, min++)
	{
		a[x] = min;
	}
	return (a);
}
