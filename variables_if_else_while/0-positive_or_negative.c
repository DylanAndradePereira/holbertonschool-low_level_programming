#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * Function main
 * @return the sum of a and b
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* check the boolean condition */
	if(n == 0)
	{
		/* affiche 0 is zero */
		printf( "%d is zero\n", n);
	}
	else if(n > 0)
	{
		/* affiche n is positive */
		printf( "%d is positive\n", n);	
	}else
	{
		/* affiche n is negative */
		printf( "%d is negative\n", n);
	}
	return (0);
}
