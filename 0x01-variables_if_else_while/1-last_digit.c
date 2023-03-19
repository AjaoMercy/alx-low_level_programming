#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
*main - it is the main function
*
*Return: replies the main function
*/

int main(void)
{
	int n;
	int lastnum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastnum = n % 10;
	if (lastnum > 5)
		printf("Last digit of %d is %d and is greater than 5", n, lastnum);
	else if (lastnum == 0)
		printf("Last digit of %d is %d and is 0", n, lastnum);
	else if (lastnum < 6 && lastnum != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastnum);
	printf("\n");
	return (0);
}
