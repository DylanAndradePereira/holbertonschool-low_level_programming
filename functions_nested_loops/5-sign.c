#include "main.h"

/**
 * print_sign - print le signe d'un chiffre
 * @c: char a verifier
 *
 * Return: true si vrai bref
 */
int print_sign(int c)
{

	int verif;
	if (c > 0)
	{
		verif = 1;
	} else if (c == 0)
	{
		verif = 0;
	} else
	{
		verif = -1;
	}

	return (verif);
}
