#include "main.h"

/**
*positive_or_negative - shows if numbers are positive or negative
*
*@i: the number to be checked
*
*Return: should be zero
*/

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
