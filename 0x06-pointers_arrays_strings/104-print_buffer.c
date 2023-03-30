#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 *
 * @b: buffer
 *
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int s, t, u;

	if (size <= 0)
		printf("\n");
	else
	{
		for (s = 0; s < size; s += 10)
		{
			printf("%.8x:", s);
			for (t = s; t < s + 10; t++)
			{
				if (t % 2 == 0)
					printf(" ");
				if (t < size)
					printf("%.2x", *(b + t));
				else
					printf("  ");
			}
			printf(" ");
			for (u = s; u < s + 10; u++)
			{
				if (u >= size)
					break;
				if (*(b + u) < 32 || *(b + u) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + u));
			}
			printf("\n");
		}
	}
}
