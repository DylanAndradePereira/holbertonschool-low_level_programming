#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Check a number
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 97 ; i < i+26 ; i++)
	{
			putchar(i);
	}

	for (i = 65 ; i < i+26 ; i++)
	{
			putchar(i);
	}

	putchar('\n');
	return (0);
}
