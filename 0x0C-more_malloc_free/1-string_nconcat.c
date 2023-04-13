#include "main.h"
#include <stdlib.h>

/**
*string_nconcat - concatenates two strings
*
*@s1: first string
*
*@s2: second string
*
*@n: number of bytes
*
*Return: NULL if the program fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sop;
	unsigned int len1, len2, lensop, x;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
		;
	}

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (n > len2)
		n = len2;

	lensop = len1 + n;

	sop = malloc(lensop + 1);

	if (sop == NULL)
		return (NULL);

	for (x = 0; x < lensop; x++)
		if (x < len1)
			sop[x] = s1[x];
		else
			sop[x] = s2[x - len1];

	sop[x] = '\0';

	return (sop);
}
