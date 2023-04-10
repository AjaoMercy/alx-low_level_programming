#include "main.h"

/**
*_strchr - locates a character in a string
*
*@s: the string
*
*@c: the character to search for
*
*Return: returns a pointer to c in the string s
*or returns NULL if c is not found
*/

char *_strchr(char *s, char c)
{
	unsigned int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
		{
			return (&s[x]);
		}
	}
	if (s[x] == c)
	{
		return (&s[x]);
	}
	return ('\0');
}
