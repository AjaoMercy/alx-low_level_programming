#include "main.h"
#include <stdlib.h>

/**
*_calloc -  allocates memory for an array, using malloc
*
*@nmemb: the number of elements
*
*@size: size of bytes
*
*Return: null if malloc fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);

	if (a == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < (nmemb * size); x++)
		a[x] = 0;

	return (a);

}
