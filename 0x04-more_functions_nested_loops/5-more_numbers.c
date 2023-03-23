#include "main.h"

/**
*more_numbers - prints integers from 0-14
*
*Return: usually 0
*/

void more_numbers(void)
{
	int s;
	int n;

	for (s = 0; s < 10; s++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n >= 10)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}

}
