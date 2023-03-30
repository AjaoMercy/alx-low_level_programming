#include "main.h"

/**
*_strcat - concatenates two strings
*
*@dest: destination string
*
*@src: source string
*
*Return: returns the appended string
*/

char *_strcat(char *dest, char *src)
{
	int x;
	int i;

	for (x = 0; dest[x] != '\0'; x++)
	{
		x++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[x + i] = src[i];
	}
	dest[x + i] = '\0';
	return (dest);
}
