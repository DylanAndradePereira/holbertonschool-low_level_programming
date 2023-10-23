#include "main.h"
#include <stdio.h>

/**
 * print_rev - entry point
 *
 * Description: tu connais flemme un peu
 *@str: poiteur de la chaine a compter
 * Return: la longueur de la chaine
 */

int print_rev(char *str)
{

	int n = 0;

	for (n = _strlen(*str);n >= 0; n--)
	{
		_putchar(str[n]);
	}

	return (n);
}
