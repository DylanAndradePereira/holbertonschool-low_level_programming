#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * jack_bauer - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int t;
	int i = 0;
	int f;

	for (f = 0; f < 24; f++)
	{
		for (t = 0; t <= 59; t++)
		{
			/* 24 fois */

			_putchar("%02d",i);
			_putchar(":");
			_putchar("%02d", t);

			if (t == 59)
			{
				i++;
			}

		}

	}

}
