#include "main.h"

/**
*_islower - this is the function
*
*@c: int to be checked
*
*Return: one if it is lowercase
*and zero if it isnt
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
