#include <ctype.h>

/**
 * _isalpha - verifie si c'est alpha 
 * @c: char a verifier
 *
 * Return: true si vrai bref
 */
int _isalpha(int c)
{
	int verif;

	if (isalpha(c) == 0)
	{
			verif = 0;
	}
	else
	{
			verif = 1;
	}
	return (verif);

}
