#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - entry point
 * Description: tu connais flemme un peu
 * @str: poiteurde la chaine a compter
 * Return: void
 */

void print_array(int *array, int ui)
{

	for ( i = 0; i < 5; i++)
	{
		if (i == 4)
		{
			printf("%d",array[i]);
		}
		else
		{
			printf("%d, ",array[i]);
		}

	}
}
