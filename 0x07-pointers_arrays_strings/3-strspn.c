#include "main.h"

/**
*_strspn - gets the length of a prefix substring
*
*@s: string to be searched
*
*@accept: characters to search for
*
*Return: returns length of s
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x;
	unsigned int y, bool;

	for (x = 0; s[x] != '\0'; x++)
	{
		bool = 1;
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (x);
}
