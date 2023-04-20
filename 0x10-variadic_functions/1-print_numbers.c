#include "variadic_functions.h"

/**
*print_numbers -  prints numbers, followed by a new line
*
*@separator: is the string to be printed between numbers
*
*@n:  is the number of integers passed to the function
*
*Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	unsigned int x;

	va_start(arglist, n);

	for (x = 0; x < n; x++)
	{
		int num = va_arg(arglist, int);

		printf("%d", num);
		if (separator && x < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arglist);
}
