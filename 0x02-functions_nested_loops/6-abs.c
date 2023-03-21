#include "main.h"

/**
*_abs - prints the abs value of an integer
*
*@a: a parameter
*
*Return: returned the value of a
*/

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
