#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: replies the main function
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'e' && ch != 'q')
		putchar(ch);
	putchar('\n');
	return (0);
}
