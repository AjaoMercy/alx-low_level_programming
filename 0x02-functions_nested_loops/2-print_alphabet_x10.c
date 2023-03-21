#include "main.h"

/**
* print_alphabet_x10 - prints alphabets in lowercase
*
*Return: usually 0
*/

void print_alphabet_x10(void)
{
	int l;
	int a;

	for (l = 1; l <= 10; l++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}
}
