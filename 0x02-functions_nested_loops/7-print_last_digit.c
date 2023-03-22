#include "main.h"

/**
*print_last_digit - prints last digit of a number
*
*@n: the parameter
*
*Return: returns l
*/

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (n < 0)
		l = (-1 * l);
	_putchar(l + '0');
	return (l);
}
