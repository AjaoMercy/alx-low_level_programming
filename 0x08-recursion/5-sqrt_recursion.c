#include "main.h"

/**
*power - returns the square root of a number
*
*@n: integer
*
*@m: to iterate
*
*Return: -1 if there,s no square root
*/

int power(int n, int m)
{
	if (m % (n / m) == 0)
	{
		if (m * (n / m) == n)
		{
			return (m);
		}
		else
		{
			return (-1);
		}
	}
	return (0 + power(n, m + 1));
}

/**
*_sqrt_recursion - computes the square root of a number
*
*@n: the number
*
*Return: -1 if there's no natural square root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (power(n, 2));
}
