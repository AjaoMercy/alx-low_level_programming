#include "main.h"

/**
*_isalpha - checks for alphabet character
*
*@c: the char to be checked
*
*Return: is one if it is lower or upper case
*and is zero if otherwise
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
