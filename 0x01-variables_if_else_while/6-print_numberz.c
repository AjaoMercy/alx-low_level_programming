#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: usually zero
 */

int main(void)
{
	int no;

	for (no = 0; no < 10; no++)
		putchar(no + '0');
	putchar('\n');
	return (0);
}
