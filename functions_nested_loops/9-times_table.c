#include "main.h"

/**
 * times_table - Affiche les tables de 0 a 9
 */
void times_table(void)
{
	int row, col;

	for (row = 0; row < 10; row++)
	{
		for (col  = 0; col < 10; col++)
		{
			if (col	== 0)
			{
				_putchar('0');
			}
			else if (row * col < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(row * col + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((row * col) / 10 + '0');
				_putchar((row * col) % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
