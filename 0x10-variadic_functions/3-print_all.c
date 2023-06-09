#include "variadic_functions.h"

/**
*print_all -  a function that prints anything
*
*@format: a list of types of arguments passed to the function
*
*Return: void
*/

void print_all(const char * const format, ...)
{
	va_list argslist;
	unsigned int i = 0, y, c = 0;
	char *n_str;
	const char v_types[] = "cifs";

	va_start(argslist, format);
	while (format && format[i])
	{
		y = 0;
		while (v_types[y])
		{
			if (format[i] == v_types[y] && c)
			{
				printf(", ");
				break;
			} y++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(argslist, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(argslist, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(argslist, double)), c = 1;
			break;
		case 's':
			n_str = va_arg(argslist, char *), c = 1;
			if (!n_str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", n_str);
			break;
		} i++;
	}
	printf("\n"), va_end(argslist);
}
