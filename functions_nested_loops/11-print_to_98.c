#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_to_98 - check the code for Holberton School students.
 *
 * @un : param 1
 */
void print_to_98(int un)
{

	if (un >= 98)
	{	
		int i;
		for ( i = un; i < 98; i++)
		{
			printf("%d", i);
		}
	} else
	{
		for (i = un; i > 98; i--)
		{
			printf("%d", i);
		}
	}

}
