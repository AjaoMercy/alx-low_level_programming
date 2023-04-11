#include "main.h"
#include <stdlib.h>

/**
*str_concat - concatenates two strings
*
*@s1: first string
*
*@s2: second string
*
*Return: pointer to a string
*/

char *str_concat(char *s1, char *s2)
{
	int x;
	int i;
	int y;
	int l;
	char *new_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (x = 0; s1[x] != '\0'; x++)
	{
		;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		;
	}

	new_str = malloc(sizeof(char) * (x + i + 1));

	if (new_str == NULL)
	{
		free(new_str);
		return (NULL);
	}

	for (y = 0; y < x; y++)
		new_str[y] = s1[y];

	l = i;
	for (i = 0; i <= l; y++, i++)
		new_str[y] = s2[i];

	return (new_str);
}
