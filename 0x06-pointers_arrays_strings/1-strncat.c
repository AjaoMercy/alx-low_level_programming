#include "main.h"

/**
*_strncat - concatenates two strings
*
*@dest: destination string
*
*@src: source string
*
*@n: the number of bytes
*
*Return: returns the appended string
*/

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	for (x = 0; dest[x] != '\0'; x++)
	{
		x++;
	}
	for (y = 0; src[y] != '\0'; y++)
	{
		if (y < n)
		{
			dest[x + y] = src[y];
		}
	}
	dest[x + y] = '\0';
	return (dest);
}
