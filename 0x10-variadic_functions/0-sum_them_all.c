#include "variadic_functions.h"

/**
*sum_them_all - adds all the parameters
*
*@n: amount of parameters
*
*Return: 0 if n is equal to 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list arglist;
	int total = 0;
	unsigned int x;

	if (n == 0)
	{
		return (0);
	}

	va_start(arglist, n);

	for (x = 0; x < n; x++)
	{
		int num = va_arg(arglist, int);

		total += num;
	}

	va_end(arglist);

	return (total);
}
