#include <stdio.h>

/**
*main - this is the main function
*
*Return: replies the main function
*/

int main(void)
{
	int n;
	char ab;

	for (n = 0; n < 10; n++)
		putchar(n + '0');
	for (ab = 'a'; ab <= 'f'; ab++)
		putchar(ab);
	putchar('\n');
	return (0);
}
