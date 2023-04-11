#include "main.h"
#include <stdlib.h>

/**
*_strdup - returns a pointer to a new string
*
*@str: a string
*
*Return: NULL if the string is null
*/

char *_strdup(char *str)
{
	int x;
	int y;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}

	for (x = 0; str[x] != '\0'; x++)
	{
		x++;
	}
	new_str = (char *)malloc(sizeof(char) * (x + 1));

	if (new_str == NULL)
	{
		return (NULL);
	}
	for (y = 0; y <= x; y++)
	{
		new_str[y] = str[y];
	}
	return (new_str);
}
