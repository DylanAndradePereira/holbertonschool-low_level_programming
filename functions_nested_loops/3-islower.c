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
	return !(islower(c));
}
