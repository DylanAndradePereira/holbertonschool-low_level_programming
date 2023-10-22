#include <limits.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * jack_bauer - Affiche l'heure de la journée entiere
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int i, j;
	int jour = 0;

	for (j = 0; j < 24; j++)
	{
		for (i = 0; i < 60; i++, jour++)
		{
			if (jour == 1440)
				break;
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar(':');
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar('\n');
		}
	}
}

