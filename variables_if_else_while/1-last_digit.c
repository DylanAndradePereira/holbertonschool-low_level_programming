#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Check a number
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 0)
	{
		/* affiche 0 is zero */
		printf("Last digit of %d is %d and is is greater than 5\n", n);
	}
	else if (last_digit > 5)
	{
		/* affiche n is positive */
		printf("Last digit of %d is %d and is is greater than 5\n", n);
	} else if (last_digit < 6 && last_digit != 0)
	{
		/* affiche n is negative */
		printf("Last digit of %d is %d and is is greater than 5\n", n);
	}
	return (0);
}
