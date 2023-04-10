#include "main.h"

/**
*_abs - prints the abs value of an integer
*
*@n: a parnmeter
*Return: returned the value of n
*/

int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else if (n >= 0)
		n = n;
	return (n);
}


