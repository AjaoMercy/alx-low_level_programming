#include "main.h"

/**
*factorial - the function
*
*@n: the given number
*
*Return: -1 if n is less than 0
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
