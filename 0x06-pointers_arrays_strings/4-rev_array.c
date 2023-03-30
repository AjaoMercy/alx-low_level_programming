#include "main.h"

/**
*reverse_array - reverses an array
*
*@a: the array
*
*@n: number of elements to swap
*
*Return: void
*/

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int k;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			k = a[j];
			a[j] = a[j - 1];
			a[j - 1] = k;
		}
	}
}
