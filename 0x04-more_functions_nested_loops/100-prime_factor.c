#include <stdio.h>

/**
* main - largest prime factor
*
* Return: usually 0
*/

int main(void)
{
	long int n, x;

	n = 612852475143;
	for (x = 2; x <= n; x++)
	{
		if (n % x == 0)
		{
			n /= x;
			x--;
		}
	}
	printf("%ld\n", x);
	return (0);
}
