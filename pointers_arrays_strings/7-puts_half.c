#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - entry point
 * Description: tu connais flemme un peu
 * @str: poiteurde la chaine a compter
 * Return: void
 */

void puts_half(char *str)
{
	unsigned int i;

	for (i = strlen(str)/2; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}

	putchar('\n');
}
