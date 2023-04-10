#include "main.h"

/**
*_puts - prints a string
*
*@s: the string to be printed
*
*Return: usually zero
*/

void _puts(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		_putchar (s[n]);
	}
	_putchar ('\n');
}

