#include "main.h"

/**
*_isdigit - checks for digits
*
*@c: the integer to check
*
*Return: returns l if it is a digit
*0 if otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
