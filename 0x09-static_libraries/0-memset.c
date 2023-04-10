#include "main.h"

/**
*_memset - fills memory with a constant byte
*
*@s: pointer to the memory
*
*@b: value to set each byte
*
*@n: number of bytes to set
*
*Return: returns a pointer to s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
