#include "main.h"
#include <stdio.h>

/**
* _strcpy - copies the string pointed to
*
* @dest: the destination
*
* @src: the source
*
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (x >= 0)
	{
		*(dest + x) = *(src + x);
		if (*(src + x) == '\0')
			break;
		x++;
	}
	return (dest);
}
