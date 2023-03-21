#include "main.h"

/**
* print_sign -  prints the sign of a number
*
*@n: the int to be checked
*
*Return: prints one if greater than zero
*zero if it is zero
*negative one if less than zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
