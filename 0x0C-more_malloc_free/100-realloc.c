#include "main.h"
#include <stdlib.h>

/**
*_realloc - reallocates a memory block using malloc and free
*
*@ptr: pointer to the memory previously allocated
*@old_size: the size, in bytes, of the allocated space for ptr
*@new_size: the new size, in bytes of the new memory block
*
*Return: NULL if maloc fails
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
