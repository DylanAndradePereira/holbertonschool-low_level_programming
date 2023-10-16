#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Check a number
 * Return: 0
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;

	if (last > 0)
	{
		/* affiche 0 is zero */
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	else if (last > 5)
	{
		/* affiche n is positive */
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	} else if (last < 6 && last != 0)
	{
		/* affiche n is negative */
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	return (0);
}
