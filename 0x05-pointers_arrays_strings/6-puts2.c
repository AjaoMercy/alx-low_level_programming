#include "main.h"

/**
*puts2 - prints every other character of a string
*
*@str: string to use
*
*Retrun: usually zero
*/

void puts2(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
