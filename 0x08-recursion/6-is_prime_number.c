#include "main.h"

/**
*prime - checks for prime numbers
*
*@x: integer
*
*@y: to iterate
*
*Return: 1 if it is a prime  number, 0 if not
*/

int prime(unsigned int x, unsigned int y)
{
	if (x % y == 0)
	{
		if (x == y)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0 + prime(x, y + 1));
}

/**
*is_prime_number - checkes if an integer is a prime number
*
*@n: input integer
*
*Return: 1 if it's a prime number, 0 if not
*/

int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}
	if (n < 0)
	{
		return (0);
	}
	if (n == 0)
	{
		return (0);
	}
	return (prime(n, 2));
}
