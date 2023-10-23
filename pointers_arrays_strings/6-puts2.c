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
	for (i = 0; i < strlen(str); i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
