#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - entry point
 * Description: tu connais flemme un peu
 * @str: poiteurde la chaine a compter
 * Return: void
 */

void puts2(char *str)
{
	unsigned int i;

	_putchar(str[0]);

	for (i = 2; i < strlen(str); i += 2)
	{
		_putchar(str[i]);
	}

	putchar('\n');
}
