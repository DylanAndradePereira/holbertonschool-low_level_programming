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

	int a = 0;

	int i;

	while (str[c])
	{
		 ++c;
	}

	char temporaire[c];

	for (n = c - 1; n >= 0; n--)
	{
		temporaire[a] = str[n];
		a++;
	}

	for (i = 0; i < 10; i++)
	{
		str[i] = temporaire[i];
	}

}
