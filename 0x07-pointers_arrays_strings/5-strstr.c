#include "main.h"

/**
*_strstr - locates a substring
*
*@haystack: the string
*
*@needle: the substring
*
*Return: beginning of the located substring
*or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		if (haystack[a] == needle[0])
		{
			b = 0;
			while (needle[b] != '\0' && haystack[a + b] == needle[b])
			{
				b++;
			}
			if (needle[b] == '\0')
			{
				return (&haystack[a]);
			}
		}
	}
	return ('\0');
}
