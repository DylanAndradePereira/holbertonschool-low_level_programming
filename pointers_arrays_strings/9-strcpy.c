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

char *_strcpy(char *dest, char *src)
{
	long unsigned int i;

	dest[0] = '\0';
	for (i = 0; i < strlen(src); i++)
	{
		dest[i] = src[i];

	}

	return (dest);
}
