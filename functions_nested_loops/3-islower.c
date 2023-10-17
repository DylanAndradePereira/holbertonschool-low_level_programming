#include <ctype.h>
#include "main.h"

/**
 * _islower - sert a verifier si le parametre est en minuscule
 * @c: char a verifier
 *
 * Return: true si vrai bref
 */
int _islower(int c)
{
	int verif;

	if (islower(c) == 0)
	{
		verif = 0;
	}
	else
	{
		verif = 1;
	}
	return (verif);
}
