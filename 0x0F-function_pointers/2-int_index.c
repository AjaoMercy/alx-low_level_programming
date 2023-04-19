#include "function_pointers.h"

/**
*int_index - searches for an integer
*
*@array: an array
*
*@size: number of elements in the array
*
*@cmp:  a pointer to the function to be used to compare values
*
*Return: -1 if no element matches and if size <= 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (cmp && array)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]))
			{
				return (x);
			}
		}
	}

	return (-1);
}
