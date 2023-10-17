#include <ctype.h>
#include "main.h"

/**
 * _islower -
 * @c: char a verifier
 *
 * Return: true si vrai bref
 */
int _islower(int c)
{
	in verif;

	if (islower(c) != 1)
	{
		verif = 0;
	}
	else
	{
		verif = 1;
	}
	return (verif);
}
