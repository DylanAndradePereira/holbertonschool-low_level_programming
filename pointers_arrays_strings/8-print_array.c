#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - entry point
 * Description: tu connais flemme un peu
 * @ui: poiteurde la chaine a compteri
 * @array: strafoulah
 * Return: void
 */

void print_array(int *array, int ui)
{
	int i;

	for (i = 0; i < ui; i++)
	{
		if (i == 4)
		{
			printf("%d", *array[i]);
		}
		else
		{
			printf("%d, ", *array[i]);
		}

	}
}
