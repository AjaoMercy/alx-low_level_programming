#include "main.h"
#include <stdlib.h>

/**
*malloc_checked - allocates memory using malloc
*
*@b: the number of bytes
*
*Return: 98 if malloc fails
*/

void *malloc_checked(unsigned int b)
{
	char *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);
	return (x);

}
