#include "main.h"

/**
*_memcpy - copies memory area
*
*@dest: destination pointer
*
*@src: source pointer
*
*@n: number of bytes to copy
*
*Return: returns a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int q;

	for (q = 0; q < n; q++)
	{
		src[q] = dest[q];
	}
	return (dest);
}
