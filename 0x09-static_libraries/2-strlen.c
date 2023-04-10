#include "main.h"

/**
*_strlen - function to display length of a string
*
*@s: string to be counted
*
*Return: returns the length of a string
*/

int _strlen(char *s)
{
	int x;
	int y = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		y++;
	}
	return (y);
}
