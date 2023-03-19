#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: usually zero
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
