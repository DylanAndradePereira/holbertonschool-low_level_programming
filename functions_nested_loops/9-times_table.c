#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * times_table - check the code for Holberton School students.
 *
 */
void times_table(void)
{
	int t;
	int f;

		for (f = 0; f < 10; f++)
		{
			t = 0;
			putchar('\n');
			for (t = 0; t < 10; t++)
			{
				int r = f*t;
				printf("%d",r);

				if (t!=9)
				{
					/* code */
					putchar(',');
				}


				putchar(' ');
				if (r<10)
				{
					putchar(' ');
				}
			}

		}
}
