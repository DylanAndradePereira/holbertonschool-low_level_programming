#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - entry point
 * Description: tu connais flemme un peu
 * @str: poiteurde la chaine a compter
 * Return: void
 */

void rev_string(char *str)
{

	int c = 0;
	int n = 0;
	int a = 0;
	unsigned int i;
	char temporaire[2000];

	while (str[c])
	{
		++c;
	}

	for (n = c - 1; n >= 0; n--)
	{
		temporaire[a] = str[n];
		a++;
	}

	for (i = 0; i < strlen(str); i++)
	{
		str[i] = temporaire[i];
	}
}
