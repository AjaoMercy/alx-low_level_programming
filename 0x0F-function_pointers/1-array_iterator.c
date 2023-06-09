#include "function_pointers.h"

/**
*array_iterator - executes a function given as a parameter
*on each element of an array
*
*@array: the array
*
*@size: size of the array
*
*@action: a pointer to the function
*
*Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (action && array)
	{
		for (x = 0; x < size; x++)
		{
			action(array[x]);
		}
	}
}
