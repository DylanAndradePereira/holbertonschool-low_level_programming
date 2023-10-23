#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - entry point
 *
 * Description: tu connais flemme un peu
 *@str: poiteur de la chaine a compter
 * Return: la longueur de la chaine
 */

void rev_string(char *str)
{

	int c = 0;

	int n = 0;

	char str;

	while (str[c])
	{
		++c;
	}
	
	for (n = c - 1; n >= 0; n--)
	{
		strncat(str,str[n],1);
	}

	_putchar('\n');
}
