#include "main.h"

/**
*puts_half - prints half of a string
*
*@str: the string
*
*Return: usually zero
*/


void puts_half(char *str)
{
	int x;
	int y = 0;
	int i;

	for (x = 0; str[x] != '\0'; x++)
	{
		y++;
	}
	if (y % 2 == 0)
	{
		for (i = y / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else if (y % 2 != 0)
	{
		for (i = (y - 1) / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
