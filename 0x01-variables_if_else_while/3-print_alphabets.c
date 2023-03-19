#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: replies the main function
 */

int main(void)
{
	char ch;
	char ab;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ab = 'A'; ab <= 'Z'; ab++)
		putchar(ab);
	putchar('\n');
	return (0);
}
