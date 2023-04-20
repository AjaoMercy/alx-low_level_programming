#include "variadic_functions.h"

/**
*print_strings - prints strings, followed by a new line
*
*@separator: is the string to be printed between the strings
*
*@n: is the number of strings passed to the function
*
*Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	unsigned int x;
	char *str;

	va_start(arglist, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(arglist, char *);

		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (x < n - 1)
		{
			if (separator)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(arglist);
}
