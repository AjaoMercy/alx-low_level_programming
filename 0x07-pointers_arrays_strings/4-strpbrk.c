#include "main.h"

/**
*_strpbrk - searches a string for a set of bytes
*
*@s: string to search
*
*@accept: characters to search for
*
*Return: returns a pointer to accept in s
*null if no character is found
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
				return (&s[x]);
		}
	}
	return ('\0');
}
